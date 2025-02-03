#pragma once
#include <stdint.h>
#include <interface99.h>
typedef size_t handle_t;
#define nulhdl_t (handle_t)0
extern __externref_t handle_borrow(handle_t);
extern __externref_t handle_pop(handle_t);
extern handle_t handle_new(__externref_t);
extern boo, exref_is_null(__externref_t);
#define Droppable_IFACE vfunc(void,drop,VSelf)

interface(Droppable);
declImplExtern(Droppable,handle_t);