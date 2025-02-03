
    #ifndef R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5
    #define R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5
    #include <interface99.h>
    #include <handle.h>
    #include <stdint.h>
    #define R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_IFACE vfunc(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_res,R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8,VSelf,uint32_t) vfunc(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_res,R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size,VSelf,) vfunc(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_res,R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8,VSelf,uint32_t,uint32_t)
    #define R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_EXTENDS (Droppable)
    
    typedef struct R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_res{
    uint32_t v0
    } R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_res;
    typedef struct R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_fres{
    uint32_t v0
    } R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_fres;
    ;
    typedef struct R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_res{
    uint32_t v0
    } R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_res;
    typedef struct R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_fres{
    uint32_t v0
    } R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_fres;
    ;
    typedef struct R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_res{
    
    } R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_res;
    typedef struct R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_fres{
    
    } R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_fres;
    
    interface(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5);
    declImplExtern(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5,handle_t);
    extern __externref_t R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_ref(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5 rid);
    #define R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_of(a) handle_new(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_ref(a))
    #endif
    #ifdef R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_IMPL
    __attribute__((import_module("pit/867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5"), import_name("~c_impl"))) extern __externref_t $$of_$867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5(867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5 rid);
    __externref_t R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_ref(867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5 rid){
        return $$of_$867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5(rid);
    };
    __attribute__((export_name("pit/867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5/~c_impl.drop"))) static void drop(867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5 rid){
        VCALL_SUPER(rid,Droppable,drop);
        free(rid.self);
    };
    
                static __attribute__((import_module("pit/867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5"), import_name("read8"))) R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_fres R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_impl(uint32_t v0);
                R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_res handle_t_R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8(__externref_t self,uint32_t v0){
                VSELF(handle_t);
                    R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_fres fres = R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_impl(handle_borrow(self),v0);
                    return R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_res{
                        fres.v0
                    };
                };
                __attribute__((export_name("pit/867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5/~c_impl/read8"))) static R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_fres R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_export(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5 me,uint32_t v0){
                    R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_res res = VCALL(me,R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8,v0);
                    return R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_read8_fres{
                        res.v0
                    };
                };
        ;

                static __attribute__((import_module("pit/867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5"), import_name("size"))) R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_fres R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_impl(uint32_t v0);
                R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_res handle_t_R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size(__externref_t self){
                VSELF(handle_t);
                    R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_fres fres = R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_impl(handle_borrow(self),);
                    return R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_res{
                        fres.v0
                    };
                };
                __attribute__((export_name("pit/867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5/~c_impl/size"))) static R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_fres R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_export(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5 me){
                    R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_res res = VCALL(me,R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size,);
                    return R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_size_fres{
                        res.v0
                    };
                };
        ;

                static __attribute__((import_module("pit/867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5"), import_name("write8"))) R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_fres R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_impl();
                R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_res handle_t_R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8(__externref_t self,uint32_t v0,uint32_t v1){
                VSELF(handle_t);
                    R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_fres fres = R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_impl(handle_borrow(self),v0,v1);
                    return R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_res{
                        
                    };
                };
                __attribute__((export_name("pit/867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5/~c_impl/write8"))) static R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_fres R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_export(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5 me,uint32_t v0,uint32_t v1){
                    R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_res res = VCALL(me,R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8,v0,v1);
                    return R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_write8_fres{
                        
                    };
                };
        
    implExtern(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5,handle_t);
    #endif
    