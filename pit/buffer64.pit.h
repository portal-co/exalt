
    #ifndef R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d
    #define R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d
    #include <interface99.h>
    #include <handle.h>
    #include <stdint.h>
    #define R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_IFACE vfunc(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_res,R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8,VSelf,uint64_t) vfunc(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_res,R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size,VSelf,) vfunc(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_res,R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8,VSelf,uint64_t,uint32_t)
    #define R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_EXTENDS (Droppable)
    
    typedef struct R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_res{
    uint32_t v0
    } R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_res;
    typedef struct R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_fres{
    uint32_t v0
    } R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_fres;
    ;
    typedef struct R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_res{
    uint64_t v0
    } R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_res;
    typedef struct R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_fres{
    uint64_t v0
    } R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_fres;
    ;
    typedef struct R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_res{
    
    } R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_res;
    typedef struct R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_fres{
    
    } R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_fres;
    
    interface(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d);
    declImplExtern(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d,handle_t);
    extern __externref_t R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_ref(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d rid);
    #define R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_of(a) handle_new(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_ref(a))
    #endif
    #ifdef R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_IMPL
    __attribute__((import_module("pit/68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d"), import_name("~c_impl"))) extern __externref_t $$of_$68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d(68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d rid);
    __externref_t R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_ref(68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d rid){
        return $$of_$68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d(rid);
    };
    __attribute__((export_name("pit/68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d/~c_impl.drop"))) static void drop(68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d rid){
        VCALL_SUPER(rid,Droppable,drop);
        free(rid.self);
    };
    
                static __attribute__((import_module("pit/68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d"), import_name("read8"))) R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_fres R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_impl(uint32_t v0);
                R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_res handle_t_R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8(__externref_t self,uint64_t v0){
                VSELF(handle_t);
                    R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_fres fres = R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_impl(handle_borrow(self),v0);
                    return R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_res{
                        fres.v0
                    };
                };
                __attribute__((export_name("pit/68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d/~c_impl/read8"))) static R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_fres R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_export(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d me,uint64_t v0){
                    R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_res res = VCALL(me,R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8,v0);
                    return R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_read8_fres{
                        res.v0
                    };
                };
        ;

                static __attribute__((import_module("pit/68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d"), import_name("size"))) R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_fres R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_impl(uint64_t v0);
                R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_res handle_t_R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size(__externref_t self){
                VSELF(handle_t);
                    R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_fres fres = R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_impl(handle_borrow(self),);
                    return R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_res{
                        fres.v0
                    };
                };
                __attribute__((export_name("pit/68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d/~c_impl/size"))) static R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_fres R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_export(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d me){
                    R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_res res = VCALL(me,R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size,);
                    return R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_size_fres{
                        res.v0
                    };
                };
        ;

                static __attribute__((import_module("pit/68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d"), import_name("write8"))) R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_fres R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_impl();
                R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_res handle_t_R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8(__externref_t self,uint64_t v0,uint32_t v1){
                VSELF(handle_t);
                    R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_fres fres = R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_impl(handle_borrow(self),v0,v1);
                    return R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_res{
                        
                    };
                };
                __attribute__((export_name("pit/68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d/~c_impl/write8"))) static R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_fres R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_export(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d me,uint64_t v0,uint32_t v1){
                    R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_res res = VCALL(me,R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8,v0,v1);
                    return R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_write8_fres{
                        
                    };
                };
        
    implExtern(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d,handle_t);
    #endif
    