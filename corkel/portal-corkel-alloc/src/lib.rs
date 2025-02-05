#![no_std]

extern crate alloc;

// #[cfg(not(feature = "module-linking"))]
pub struct CkAllocator;

const MIN_ALIGN: usize = 8;

// #[cfg(not(feature = "module-linking"))]
unsafe impl alloc::alloc::GlobalAlloc for CkAllocator {
    #[inline]
    unsafe fn alloc(&self, layout: alloc::alloc::Layout) -> *mut u8 {
        extern "C" {
            fn malloc(amt: usize) -> *mut core::ffi::c_void;
            fn aligned_alloc(a: usize, b: usize) -> *mut core::ffi::c_void;
        }
        if layout.align() <= MIN_ALIGN && layout.align() <= layout.size() {
            malloc(layout.size()) as *mut u8
        } else {
            aligned_alloc(layout.align(), layout.size()) as *mut u8
        }
    }

    #[inline]
    unsafe fn alloc_zeroed(&self, layout: alloc::alloc::Layout) -> *mut u8 {
        extern "C" {
            fn calloc(amt: usize, amt2: usize) -> *mut core::ffi::c_void;
        }
        if layout.align() <= MIN_ALIGN && layout.align() <= layout.size() {
            calloc(layout.size(), 1) as *mut u8
        } else {
            let ptr = self.alloc(layout);
            if !ptr.is_null() {
                core::ptr::write_bytes(ptr, 0, layout.size());
            }
            ptr
        }
    }

    #[inline]
    unsafe fn dealloc(&self, ptr: *mut u8, _layout: alloc::alloc::Layout) {
        extern "C" {
            fn free(ptr: *mut core::ffi::c_void);
        }
        free(ptr as *mut core::ffi::c_void)
    }

    #[inline]
    unsafe fn realloc(
        &self,
        ptr: *mut u8,
        layout: alloc::alloc::Layout,
        new_size: usize,
    ) -> *mut u8 {
        extern "C" {
            fn realloc(ptr: *mut core::ffi::c_void, amt: usize) -> *mut core::ffi::c_void;
        }
        if layout.align() <= MIN_ALIGN && layout.align() <= new_size {
            realloc(ptr as *mut core::ffi::c_void, new_size) as *mut u8
        } else {
            let new_layout =
                alloc::alloc::Layout::from_size_align_unchecked(new_size, layout.align());

            let new_ptr = alloc::alloc::GlobalAlloc::alloc(self, new_layout);
            if !new_ptr.is_null() {
                let size = core::cmp::min(layout.size(), new_size);
                core::ptr::copy_nonoverlapping(ptr, new_ptr, size);
                alloc::alloc::GlobalAlloc::dealloc(self, ptr, layout);
            }
            new_ptr
        }
    }
}
