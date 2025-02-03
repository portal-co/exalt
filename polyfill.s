.globl exref_is_null
exref_is_null:
  .functype exref_is_null (externref) -> (i32)
  local.get 0
  ref.is_null
  end_function