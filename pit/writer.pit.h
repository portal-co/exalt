
    #ifndef Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206
    #define Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206
    #include <interface99.h>
    #include <handle.h>
    #include <stdint.h>
    #define Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_IFACE vfunc(Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_res,Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write,VSelf,R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5) vfunc(Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_res,Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64,VSelf,R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d)
    #define Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_EXTENDS (Droppable)
    
    typedef struct Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_res{
    uint32_t v0
    } Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_res;
    typedef struct Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_fres{
    uint32_t v0
    } Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_fres;
    ;
    typedef struct Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_res{
    uint64_t v0
    } Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_res;
    typedef struct Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_fres{
    uint64_t v0
    } Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_fres;
    
    interface(Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206);
    declImplExtern(Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206,handle_t);
    extern __externref_t Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_ref(Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206 rid);
    #define Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_of(a) handle_new(Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_ref(a))
    #endif
    #ifdef Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_IMPL
    __attribute__((import_module("pit/ba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206"), import_name("~c_impl"))) extern __externref_t $$of_$ba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206(ba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206 rid);
    __externref_t Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_ref(ba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206 rid){
        return $$of_$ba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206(rid);
    };
    __attribute__((export_name("pit/ba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206/~c_impl.drop"))) static void drop(ba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206 rid){
        VCALL_SUPER(rid,Droppable,drop);
        free(rid.self);
    };
    
                static __attribute__((import_module("pit/ba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206"), import_name("write"))) Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_fres Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_impl(uint32_t v0);
                Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_res handle_t_Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write(__externref_t self,R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5 v0){
                VSELF(handle_t);
                    Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_fres fres = Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_impl(handle_borrow(self),DYN(handle_t,R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5,({
                                handle_t handle = handle_new(v0);
                                handle_t* h = malloc(sizeof(handle_t));
                                *h = handle;
                                h
                            })));
                    return Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_res{
                        fres.v0
                    };
                };
                __attribute__((export_name("pit/ba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206/~c_impl/write"))) static Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_fres Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_export(Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206 me,__externref_t v0){
                    Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_res res = VCALL(me,Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write,handle_pop(R867207405fe87fda620c2d7a5485e8e5e274636a898a166fb674448b4391ffc5_ref(v0)));
                    return Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write_fres{
                        res.v0
                    };
                };
        ;

                static __attribute__((import_module("pit/ba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206"), import_name("write64"))) Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_fres Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_impl(uint64_t v0);
                Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_res handle_t_Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64(__externref_t self,R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d v0){
                VSELF(handle_t);
                    Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_fres fres = Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_impl(handle_borrow(self),DYN(handle_t,R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d,({
                                handle_t handle = handle_new(v0);
                                handle_t* h = malloc(sizeof(handle_t));
                                *h = handle;
                                h
                            })));
                    return Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_res{
                        fres.v0
                    };
                };
                __attribute__((export_name("pit/ba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206/~c_impl/write64"))) static Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_fres Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_export(Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206 me,__externref_t v0){
                    Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_res res = VCALL(me,Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64,handle_pop(R68da167712ddf1601aed7908c99972e62a41bdea1e28b241306a6b58d29e532d_ref(v0)));
                    return Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206_write64_fres{
                        res.v0
                    };
                };
        
    implExtern(Rba605f4053a13290a61455843f5bef1c09f92055ed154bcec6b8713ded049206,handle_t);
    #endif
    