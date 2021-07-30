// This file is autogenerated. Do not edit it by hand. Regenerate it with:
//   cd compiler/IREmitter/Intrinsics && make

// clang-format off
    {core::Symbols::Array(), "+", CMethod{"sorbet_int_rb_ary_plus"}},
    {core::Symbols::Array(), "<<", CMethod{"sorbet_int_rb_ary_push"}},
    {core::Symbols::Array(), "<=>", CMethod{"sorbet_int_rb_ary_cmp"}},
    {core::Symbols::Array(), "[]", CMethod{"sorbet_int_rb_ary_aref"}},
    {core::Symbols::Array(), "slice", CMethod{"sorbet_int_rb_ary_aref"}},
    {core::Symbols::Array(), "assoc", CMethod{"sorbet_int_rb_ary_assoc"}},
    {core::Symbols::Array(), "at", CMethod{"sorbet_int_rb_ary_at"}},
    {core::Symbols::Array(), "clear", CMethod{"sorbet_int_rb_ary_clear"}},
    {core::Symbols::Array(), "delete", CMethod{"sorbet_int_rb_ary_delete"}},
    {core::Symbols::Array(), "include?", CMethod{"sorbet_int_rb_ary_includes"}},
    {core::Symbols::Array(), "initialize_copy", CMethod{"sorbet_int_rb_ary_replace"}},
    {core::Symbols::Array(), "replace", CMethod{"sorbet_int_rb_ary_replace"}},
    {core::Symbols::Array(), "last", CMethod{"sorbet_int_rb_ary_last"}},
    {core::Symbols::Array(), "rassoc", CMethod{"sorbet_int_rb_ary_rassoc"}},
    {core::Symbols::Array(), "sort", CMethod{"sorbet_int_rb_ary_sort"}},
    {core::Symbols::Array(), "sort!", CMethod{"sorbet_int_rb_ary_sort_bang"}},
    {core::Symbols::Float(), "*", CMethod{"sorbet_int_rb_float_mul"}},
    {core::Symbols::Float(), "**", CMethod{"sorbet_int_rb_float_pow"}},
    {core::Symbols::Float(), "+", CMethod{"sorbet_int_rb_float_plus"}},
    {core::Symbols::Float(), "-@", CMethod{"sorbet_int_rb_float_uminus"}},
    {core::Symbols::Float(), "<", CMethod{"sorbet_int_flo_lt"}},
    {core::Symbols::Float(), "<=", CMethod{"sorbet_int_flo_le"}},
    {core::Symbols::Float(), ">", CMethod{"sorbet_int_rb_float_gt"}},
    {core::Symbols::Float(), ">=", CMethod{"sorbet_int_flo_ge"}},
    {core::Symbols::Float(), "abs", CMethod{"sorbet_int_rb_float_abs"}},
    {core::Symbols::Float(), "magnitude", CMethod{"sorbet_int_rb_float_abs"}},
    {core::Symbols::Float(), "finite?", CMethod{"sorbet_int_rb_flo_is_finite_p"}},
    {core::Symbols::Float(), "infinite?", CMethod{"sorbet_int_rb_flo_is_infinite_p"}},
    {core::Symbols::Integer(), "%", CMethod{"sorbet_int_rb_int_modulo"}},
    {core::Symbols::Integer(), "modulo", CMethod{"sorbet_int_rb_int_modulo"}},
    {core::Symbols::Integer(), "&", CMethod{"sorbet_int_rb_int_and"}},
    {core::Symbols::Integer(), "*", CMethod{"sorbet_int_rb_int_mul"}},
    {core::Symbols::Integer(), "**", CMethod{"sorbet_int_rb_int_pow"}},
    {core::Symbols::Integer(), "+", CMethod{"sorbet_int_rb_int_plus"}},
    {core::Symbols::Integer(), "-", CMethod{"sorbet_int_rb_int_minus"}},
    {core::Symbols::Integer(), "-@", CMethod{"sorbet_int_rb_int_uminus"}},
    {core::Symbols::Integer(), "/", CMethod{"sorbet_int_rb_int_div"}},
    {core::Symbols::Integer(), "<<", CMethod{"sorbet_int_rb_int_lshift"}},
    {core::Symbols::Integer(), "<=>", CMethod{"sorbet_int_rb_int_cmp"}},
    {core::Symbols::Integer(), "===", CMethod{"sorbet_int_rb_int_equal"}},
    {core::Symbols::Integer(), "==", CMethod{"sorbet_int_rb_int_equal"}},
    {core::Symbols::Integer(), ">", CMethod{"sorbet_int_rb_int_gt"}},
    {core::Symbols::Integer(), ">=", CMethod{"sorbet_int_rb_int_ge"}},
    {core::Symbols::Integer(), "abs", CMethod{"sorbet_int_rb_int_abs"}},
    {core::Symbols::Integer(), "magnitude", CMethod{"sorbet_int_rb_int_abs"}},
    {core::Symbols::Integer(), "div", CMethod{"sorbet_int_rb_int_idiv"}},
    {core::Symbols::Integer(), "divmod", CMethod{"sorbet_int_rb_int_divmod"}},
    {core::Symbols::Integer(), "fdiv", CMethod{"sorbet_int_rb_int_fdiv"}},
    {core::Symbols::Integer(), "gcd", CMethod{"sorbet_int_rb_gcd"}},
    {core::Symbols::Integer(), "gcdlcm", CMethod{"sorbet_int_rb_gcdlcm"}},
    {core::Symbols::Integer(), "lcm", CMethod{"sorbet_int_rb_lcm"}},
    {core::Symbols::Integer(), "odd?", CMethod{"sorbet_int_rb_int_odd_p"}},
    {core::Symbols::Integer(), "pow", CMethod{"sorbet_int_rb_int_powm"}},
    {core::Symbols::String(), "*", CMethod{"sorbet_int_rb_str_times"}},
    {core::Symbols::String(), "+", CMethod{"sorbet_int_rb_str_plus"}},
    {core::Symbols::String(), "<<", CMethod{"sorbet_int_rb_str_concat"}},
    {core::Symbols::String(), "==", CMethod{"sorbet_int_rb_str_equal"}},
    {core::Symbols::String(), "===", CMethod{"sorbet_int_rb_str_equal"}},
    {core::Symbols::String(), "dump", CMethod{"sorbet_int_rb_str_dump"}},
    {core::Symbols::String(), "eql?", CMethod{"sorbet_int_rb_str_eql"}},
    {core::Symbols::String(), "freeze", CMethod{"sorbet_int_rb_str_freeze"}},
    {core::Symbols::String(), "initialize_copy", CMethod{"sorbet_int_rb_str_replace"}},
    {core::Symbols::String(), "replace", CMethod{"sorbet_int_rb_str_replace"}},
    {core::Symbols::String(), "inspect", CMethod{"sorbet_int_rb_str_inspect"}},
    {core::Symbols::String(), "intern", CMethod{"sorbet_int_rb_str_intern"}},
    {core::Symbols::String(), "to_sym", CMethod{"sorbet_int_rb_str_intern"}},
    {core::Symbols::String(), "length", CMethod{"sorbet_int_rb_str_length"}},
    {core::Symbols::String(), "size", CMethod{"sorbet_int_rb_str_length"}},
    {core::Symbols::String(), "ord", CMethod{"sorbet_int_rb_str_ord"}},
    {core::Symbols::String(), "succ", CMethod{"sorbet_int_rb_str_succ"}},
    {core::Symbols::String(), "next", CMethod{"sorbet_int_rb_str_succ"}},
    // clang-format on
