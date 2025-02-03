
    #ifndef Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6
    #define Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6
    #include <interface99.h>
    #include <handle.h>
    #include <stdint.h>
    #define Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_IFACE vfunc(Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_res,Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read,VSelf,uint32_t) vfunc(Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_res,Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64,VSelf,uint64_t)
    #define Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_EXTENDS (Droppable)
    
    typedef struct Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_res{
    R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5 v0
    } Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_res;
    typedef struct Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_fres{
    __externref_t v0
    } Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_fres;
    ;
    typedef struct Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_res{
    R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d v0
    } Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_res;
    typedef struct Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_fres{
    __externref_t v0
    } Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_fres;
    
    interface(Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6);
    declImplExtern(Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6,handle_t);
    extern __externref_t Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_ref(Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6 rid);
    #define Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_of(a) handle_new(Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_ref(a))
    #endif
    #ifdef Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_IMPL
    __attribute__((import_module("pit/bf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6"), import_name("~c_impl"))) extern __externref_t $$of_$bf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6(bf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6 rid);
    __externref_t Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_ref(bf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6 rid){
        return $$of_$bf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6(rid);
    };
    __attribute__((export_name("pit/bf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6/~c_impl.drop"))) static void drop(bf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6 rid){
        VCALL_SUPER(rid,Droppable,drop);
        free(rid.self);
    };
    
                static __attribute__((import_module("pit/bf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6"), import_name("read"))) Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_fres Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_impl(__externref_t v0);
                Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_res handle_t_Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read(__externref_t self,uint32_t v0){
                VSELF(handle_t);
                    Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_fres fres = Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_impl(handle_borrow(self),v0);
                    return Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_res{
                        handle_pop(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_ref(fres.v0))
                    };
                };
                __attribute__((export_name("pit/bf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6/~c_impl/read"))) static Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_fres Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_export(Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6 me,uint32_t v0){
                    Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_res res = VCALL(me,Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read,v0);
                    return Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read_fres{
                        DYN(handle_t,R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5,({
                                handle_t handle = handle_new(res.v0);
                                handle_t* h = malloc(sizeof(handle_t));
                                *h = handle;
                                h
                            }))
                    };
                };
        ;

                static __attribute__((import_module("pit/bf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6"), import_name("read64"))) Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_fres Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_impl(__externref_t v0);
                Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_res handle_t_Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64(__externref_t self,uint64_t v0){
                VSELF(handle_t);
                    Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_fres fres = Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_impl(handle_borrow(self),v0);
                    return Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_res{
                        handle_pop(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_ref(fres.v0))
                    };
                };
                __attribute__((export_name("pit/bf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6/~c_impl/read64"))) static Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_fres Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_export(Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6 me,uint64_t v0){
                    Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_res res = VCALL(me,Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64,v0);
                    return Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6_read64_fres{
                        DYN(handle_t,R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d,({
                                handle_t handle = handle_new(res.v0);
                                handle_t* h = malloc(sizeof(handle_t));
                                *h = handle;
                                h
                            }))
                    };
                };
        
    implExtern(Rbf0885d2d24ecbc6981a65f1b9a2e0bcdee0443f17ca667a8b17817a15b3e8f6,handle_t);
    #endif
    