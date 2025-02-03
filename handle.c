#include <handle.h>

// typedef uint32_t handle_t;
static __externref_t table[0];
__externref_t handle_borrow(handle_t x) {
  if (x == 0) {
    return __builtin_wasm_ref_null_extern();
  }
  return __builtin_wasm_table_get(table, x - 1);
}
__externref_t handle_pop(handle_t x) {
  if (x == 0) {
    return __builtin_wasm_ref_null_extern();
  }
  __externref_t ref = __builtin_wasm_table_get(table, x - 1);
  __builtin_wasm_table_set(table, x - 1, __builtin_wasm_ref_null_extern());
  return ref;
}
handle_t handle_new(__externref_t x) {
  if (exref_is_null(x)) {
    return 0;
  }
  handle_t h = 0;
  while (exref_is_null(__builtin_wasm_table_get(table, h))) {
    h++;
    if (h == __builtin_wasm_table_size(table))
      __builtin_wasm_table_grow(table, __builtin_wasm_ref_null_extern(), 1);
  };
  __builtin_wasm_table_set(table, h, x);
  return h + 1;
}
#ifdef EXA_pit
__attribute__((import_module("pit"),
               import_name("drop"))) extern void pit_drop(__externref_t);

#endif

void handle_t_drop(VSelf) {
  VSELF(handle_t);
  __externref_t x = handle_pop(*self);
  if (exref_is_null(x))
    return;
#ifdef EXA_pit
  pit_drop(x);
#endif
}

implExtern(Droppable, handle_t);