// Koka generated module: src/main, koka version: 3.2.3, platform: 64-bit
#include "src_main.h"


// lift anonymous function
struct kk_src_main_hc_assert_fun200__t {
  struct kk_function_s _base;
};
static kk_box_t kk_src_main_hc_assert_fun200(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc_assert_fun200(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc_assert_fun200, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_src_main_hc_assert_fun200(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x201;
  bool b_0_9 = kk_bool_unbox(_b_x2); /*bool*/;
  if (b_0_9) {
    _x_x201 = false; /*bool*/
  }
  else {
    _x_x201 = true; /*bool*/
  }
  return kk_bool_box(_x_x201);
}

kk_unit_t kk_src_main_hc_assert(bool b, kk_context_t* _ctx) { /* (b : bool) -> exn () */ 
  bool _match_x191;
  kk_box_t _x_x199 = kk_std_core_hnd__open_none1(kk_src_main_new_hc_assert_fun200(_ctx), kk_bool_box(b), _ctx); /*10001*/
  _match_x191 = kk_bool_unbox(_x_x199); /*bool*/
  if (_match_x191) {
    kk_box_t _x_x202;
    kk_string_t _x_x203;
    kk_define_string_literal(static, _s_x204, 16, "assertion failed", _ctx)
    _x_x203 = kk_string_dup(_s_x204, _ctx); /*string*/
    _x_x202 = kk_std_core_exn_throw(_x_x203, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    kk_unit_unbox(_x_x202); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_src_main_hc_show_maybe_fun212__t {
  struct kk_function_s _base;
};
static kk_box_t kk_src_main_hc_show_maybe_fun212(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc_show_maybe_fun212(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc_show_maybe_fun212, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_src_main_hc_show_maybe_fun212(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10070_13 = kk_string_unbox(_b_x11); /*string*/;
  kk_string_t _x_x213;
  kk_string_t _x_x214;
  kk_define_string_literal(static, _s_x215, 5, "Some(", _ctx)
  _x_x214 = kk_string_dup(_s_x215, _ctx); /*string*/
  kk_string_t _x_x216;
  kk_string_t _x_x217;
  kk_define_string_literal(static, _s_x218, 1, ")", _ctx)
  _x_x217 = kk_string_dup(_s_x218, _ctx); /*string*/
  _x_x216 = kk_std_core_types__lp__plus__plus__rp_(_y_x10070_13, _x_x217, _ctx); /*string*/
  _x_x213 = kk_std_core_types__lp__plus__plus__rp_(_x_x214, _x_x216, _ctx); /*string*/
  return kk_string_box(_x_x213);
}

kk_string_t kk_src_main_hc_show_maybe(kk_std_core_types__maybe m, kk_function_t show_a, kk_context_t* _ctx) { /* forall<a,e> (m : maybe<a>, show-a : (a) -> e string) -> e string */ 
  if (kk_std_core_types__is_Nothing(m, _ctx)) {
    kk_function_drop(show_a, _ctx);
    kk_define_string_literal(static, _s_x210, 4, "None", _ctx)
    return kk_string_dup(_s_x210, _ctx);
  }
  {
    kk_box_t x = m._cons.Just.value;
    kk_string_t x_0_10080 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_a, (show_a, x, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_10080, _ctx);
      kk_box_t _x_x211 = kk_std_core_hnd_yield_extend(kk_src_main_new_hc_show_maybe_fun212(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x211);
    }
    {
      kk_string_t _x_x219;
      kk_define_string_literal(static, _s_x220, 5, "Some(", _ctx)
      _x_x219 = kk_string_dup(_s_x220, _ctx); /*string*/
      kk_string_t _x_x221;
      kk_string_t _x_x222;
      kk_define_string_literal(static, _s_x223, 1, ")", _ctx)
      _x_x222 = kk_string_dup(_s_x223, _ctx); /*string*/
      _x_x221 = kk_std_core_types__lp__plus__plus__rp_(x_0_10080, _x_x222, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x219, _x_x221, _ctx);
    }
  }
}


// lift anonymous function
struct kk_src_main_hc_show_result_fun235__t {
  struct kk_function_s _base;
};
static kk_box_t kk_src_main_hc_show_result_fun235(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc_show_result_fun235(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc_show_result_fun235, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_src_main_hc_show_result_fun235(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10072_20 = kk_string_unbox(_b_x15); /*string*/;
  kk_string_t _x_x236;
  kk_string_t _x_x237;
  kk_define_string_literal(static, _s_x238, 3, "Ok(", _ctx)
  _x_x237 = kk_string_dup(_s_x238, _ctx); /*string*/
  kk_string_t _x_x239;
  kk_string_t _x_x240;
  kk_define_string_literal(static, _s_x241, 1, ")", _ctx)
  _x_x240 = kk_string_dup(_s_x241, _ctx); /*string*/
  _x_x239 = kk_std_core_types__lp__plus__plus__rp_(_y_x10072_20, _x_x240, _ctx); /*string*/
  _x_x236 = kk_std_core_types__lp__plus__plus__rp_(_x_x237, _x_x239, _ctx); /*string*/
  return kk_string_box(_x_x236);
}


// lift anonymous function
struct kk_src_main_hc_show_result_fun248__t {
  struct kk_function_s _base;
};
static kk_box_t kk_src_main_hc_show_result_fun248(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc_show_result_fun248(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc_show_result_fun248, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_src_main_hc_show_result_fun248(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10073_21 = kk_string_unbox(_b_x17); /*string*/;
  kk_string_t _x_x249;
  kk_string_t _x_x250;
  kk_define_string_literal(static, _s_x251, 4, "Err(", _ctx)
  _x_x250 = kk_string_dup(_s_x251, _ctx); /*string*/
  kk_string_t _x_x252;
  kk_string_t _x_x253;
  kk_define_string_literal(static, _s_x254, 1, ")", _ctx)
  _x_x253 = kk_string_dup(_s_x254, _ctx); /*string*/
  _x_x252 = kk_std_core_types__lp__plus__plus__rp_(_y_x10073_21, _x_x253, _ctx); /*string*/
  _x_x249 = kk_std_core_types__lp__plus__plus__rp_(_x_x250, _x_x252, _ctx); /*string*/
  return kk_string_box(_x_x249);
}

kk_string_t kk_src_main_hc_show_result(kk_std_core_types__either r, kk_function_t show_a, kk_function_t show_e, kk_context_t* _ctx) { /* forall<a,b,e> (r : either<a,b>, show-a : (b) -> e string, show-e : (a) -> e string) -> e string */ 
  if (kk_std_core_types__is_Right(r, _ctx)) {
    kk_box_t x = r._cons.Right.right;
    kk_function_drop(show_e, _ctx);
    kk_string_t x_0_10084 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_a, (show_a, x, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_10084, _ctx);
      kk_box_t _x_x234 = kk_std_core_hnd_yield_extend(kk_src_main_new_hc_show_result_fun235(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x234);
    }
    {
      kk_string_t _x_x242;
      kk_define_string_literal(static, _s_x243, 3, "Ok(", _ctx)
      _x_x242 = kk_string_dup(_s_x243, _ctx); /*string*/
      kk_string_t _x_x244;
      kk_string_t _x_x245;
      kk_define_string_literal(static, _s_x246, 1, ")", _ctx)
      _x_x245 = kk_string_dup(_s_x246, _ctx); /*string*/
      _x_x244 = kk_std_core_types__lp__plus__plus__rp_(x_0_10084, _x_x245, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x242, _x_x244, _ctx);
    }
  }
  {
    kk_box_t e = r._cons.Left.left;
    kk_function_drop(show_a, _ctx);
    kk_string_t x_1_10088 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_e, (show_e, e, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_1_10088, _ctx);
      kk_box_t _x_x247 = kk_std_core_hnd_yield_extend(kk_src_main_new_hc_show_result_fun248(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x247);
    }
    {
      kk_string_t _x_x255;
      kk_define_string_literal(static, _s_x256, 4, "Err(", _ctx)
      _x_x255 = kk_string_dup(_s_x256, _ctx); /*string*/
      kk_string_t _x_x257;
      kk_string_t _x_x258;
      kk_define_string_literal(static, _s_x259, 1, ")", _ctx)
      _x_x258 = kk_string_dup(_s_x259, _ctx); /*string*/
      _x_x257 = kk_std_core_types__lp__plus__plus__rp_(x_1_10088, _x_x258, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x255, _x_x257, _ctx);
    }
  }
}

kk_integer_t kk_src_main_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (v : int, lo : int, hi : int) -> int */ 
  kk_integer_t a_10002;
  bool _match_x184 = kk_integer_gt_borrow(v,lo,kk_context()); /*bool*/;
  if (_match_x184) {
    kk_integer_drop(lo, _ctx);
    a_10002 = v; /*int*/
  }
  else {
    kk_integer_drop(v, _ctx);
    a_10002 = lo; /*int*/
  }
  bool _match_x183 = kk_integer_lt_borrow(a_10002,hi,kk_context()); /*bool*/;
  if (_match_x183) {
    kk_integer_drop(hi, _ctx);
    return a_10002;
  }
  {
    kk_integer_drop(a_10002, _ctx);
    return hi;
  }
}

kk_integer_t kk_src_main_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x182 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x182) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  { // tailcall
    kk_integer_t _x_x260 = kk_integer_dup(b, _ctx); /*int*/
    kk_integer_t _x_x261 = kk_integer_mod(a,b,kk_context()); /*int*/
    a = _x_x260;
    b = _x_x261;
    goto kk__tailcall;
  }
}

kk_integer_t kk_src_main_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  bool _match_x179 = kk_integer_eq_borrow(a,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x179) {
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_x180 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x180) {
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      return kk_integer_from_small(0);
    }
    {
      kk_integer_t n_10006;
      kk_integer_t _x_x262 = kk_integer_dup(a, _ctx); /*int*/
      kk_integer_t _x_x263 = kk_integer_dup(b, _ctx); /*int*/
      n_10006 = kk_integer_mul(_x_x262,_x_x263,kk_context()); /*int*/
      kk_integer_t _x_x264;
      bool _match_x181 = kk_integer_lt_borrow(n_10006,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x181) {
        _x_x264 = kk_integer_sub((kk_integer_from_small(0)),n_10006,kk_context()); /*int*/
      }
      else {
        _x_x264 = n_10006; /*int*/
      }
      kk_integer_t _x_x265 = kk_src_main_hc__gcd(a, b, _ctx); /*int*/
      return kk_integer_div(_x_x264,_x_x265,kk_context());
    }
  }
}

kk_integer_t kk_src_main_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx) { /* (base : int, exp : int) -> div int */ 
  bool _match_x178 = kk_integer_lte_borrow(exp,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x178) {
    kk_integer_drop(exp, _ctx);
    kk_integer_drop(base, _ctx);
    return kk_integer_from_small(1);
  }
  {
    kk_integer_t _x_x266 = kk_integer_dup(base, _ctx); /*int*/
    kk_integer_t _x_x267;
    kk_integer_t _x_x268 = kk_integer_add_small_const(exp, -1, _ctx); /*int*/
    _x_x267 = kk_src_main_hc__pow(base, _x_x268, _ctx); /*int*/
    return kk_integer_mul(_x_x266,_x_x267,kk_context());
  }
}

kk_integer_t kk_src_main_hc__sign(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x175 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x175) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(1);
  }
  {
    bool _match_x176;
    bool _brw_x177 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x176 = _brw_x177; /*bool*/
    if (_match_x176) {
      return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
    }
    {
      return kk_integer_from_small(0);
    }
  }
}

kk_std_core_types__list kk_src_main_hc__range(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (lo : int, hi : int) -> div list<int> */ 
  bool _match_x174 = kk_integer_gte_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x174) {
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list ys_10014;
    kk_integer_t _x_x269;
    kk_integer_t _x_x270 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x269 = kk_integer_add_small_const(_x_x270, 1, _ctx); /*int*/
    ys_10014 = kk_src_main_hc__range(_x_x269, hi, _ctx); /*list<int>*/
    kk_std_core_types__list _x_x271 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(lo, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x271, ys_10014, _ctx);
  }
}

kk_std_core_types__list kk_src_main_hc__range__inc(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (lo : int, hi : int) -> div list<int> */ 
  bool _match_x173 = kk_integer_gt_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x173) {
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list ys_10018;
    kk_integer_t _x_x272;
    kk_integer_t _x_x273 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x272 = kk_integer_add_small_const(_x_x273, 1, _ctx); /*int*/
    ys_10018 = kk_src_main_hc__range__inc(_x_x272, hi, _ctx); /*list<int>*/
    kk_std_core_types__list _x_x274 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(lo, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x274, ys_10018, _ctx);
  }
}

kk_integer_t kk_src_main_hc__isqrt__loop(kk_integer_t n, kk_integer_t x0, kk_integer_t x1, kk_context_t* _ctx) { /* (n : int, x0 : int, x1 : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x172 = kk_integer_gte_borrow(x1,x0,kk_context()); /*bool*/;
  if (_match_x172) {
    kk_integer_drop(x1, _ctx);
    kk_integer_drop(n, _ctx);
    return x0;
  }
  {
    kk_integer_drop(x0, _ctx);
    kk_integer_t y_10022;
    kk_integer_t _x_x275 = kk_integer_dup(n, _ctx); /*int*/
    kk_integer_t _x_x276 = kk_integer_dup(x1, _ctx); /*int*/
    y_10022 = kk_integer_div(_x_x275,_x_x276,kk_context()); /*int*/
    kk_integer_t x2;
    kk_integer_t _x_x277;
    kk_integer_t _x_x278 = kk_integer_dup(x1, _ctx); /*int*/
    _x_x277 = kk_integer_add(_x_x278,y_10022,kk_context()); /*int*/
    x2 = kk_integer_div(_x_x277,(kk_integer_from_small(2)),kk_context()); /*int*/
    { // tailcall
      kk_integer_t _x_x279 = x1; /*int*/
      x0 = _x_x279;
      x1 = x2;
      goto kk__tailcall;
    }
  }
}

kk_integer_t kk_src_main_hc__isqrt(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  bool _match_x171 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x171) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(0);
  }
  {
    kk_integer_t x1;
    kk_integer_t _x_x280;
    kk_integer_t _x_x281 = kk_integer_dup(n, _ctx); /*int*/
    _x_x280 = kk_integer_add_small_const(_x_x281, 1, _ctx); /*int*/
    x1 = kk_integer_div(_x_x280,(kk_integer_from_small(2)),kk_context()); /*int*/
    kk_integer_t _x_x282 = kk_integer_dup(n, _ctx); /*int*/
    return kk_src_main_hc__isqrt__loop(_x_x282, n, x1, _ctx);
  }
}

bool kk_src_main_hc__is__digit(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x169 = kk_integer_gte_borrow(n,(kk_integer_from_small(48)),kk_context()); /*bool*/;
  if (_match_x169) {
    bool _brw_x170 = kk_integer_lte_borrow(n,(kk_integer_from_small(57)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x170;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_src_main_hc__is__upper(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x167 = kk_integer_gte_borrow(n,(kk_integer_from_small(65)),kk_context()); /*bool*/;
  if (_match_x167) {
    bool _brw_x168 = kk_integer_lte_borrow(n,(kk_integer_from_small(90)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x168;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_src_main_hc__is__lower(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x165 = kk_integer_gte_borrow(n,(kk_integer_from_small(97)),kk_context()); /*bool*/;
  if (_match_x165) {
    bool _brw_x166 = kk_integer_lte_borrow(n,(kk_integer_from_small(122)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x166;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_src_main_hc__is__alpha(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x158 = kk_integer_gte_borrow(n,(kk_integer_from_small(65)),kk_context()); /*bool*/;
  if (_match_x158) {
    bool _match_x161;
    bool _brw_x164 = kk_integer_lte_borrow(n,(kk_integer_from_small(90)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x161 = _brw_x164; /*bool*/
    if (_match_x161) {
      return true;
    }
    {
      kk_integer_t n_0 = kk_integer_from_int(c,kk_context()); /*int*/;
      bool _match_x162 = kk_integer_gte_borrow(n_0,(kk_integer_from_small(97)),kk_context()); /*bool*/;
      if (_match_x162) {
        bool _brw_x163 = kk_integer_lte_borrow(n_0,(kk_integer_from_small(122)),kk_context()); /*bool*/;
        kk_integer_drop(n_0, _ctx);
        return _brw_x163;
      }
      {
        kk_integer_drop(n_0, _ctx);
        return false;
      }
    }
  }
  {
    kk_integer_drop(n, _ctx);
    kk_integer_t n_0_0 = kk_integer_from_int(c,kk_context()); /*int*/;
    bool _match_x159 = kk_integer_gte_borrow(n_0_0,(kk_integer_from_small(97)),kk_context()); /*bool*/;
    if (_match_x159) {
      bool _brw_x160 = kk_integer_lte_borrow(n_0_0,(kk_integer_from_small(122)),kk_context()); /*bool*/;
      kk_integer_drop(n_0_0, _ctx);
      return _brw_x160;
    }
    {
      kk_integer_drop(n_0_0, _ctx);
      return false;
    }
  }
}

bool kk_src_main_hc__is__alnum(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  bool _match_x155 = kk_src_main_hc__is__alpha(c, _ctx); /*bool*/;
  if (_match_x155) {
    return true;
  }
  {
    kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
    bool _match_x156 = kk_integer_gte_borrow(n,(kk_integer_from_small(48)),kk_context()); /*bool*/;
    if (_match_x156) {
      bool _brw_x157 = kk_integer_lte_borrow(n,(kk_integer_from_small(57)),kk_context()); /*bool*/;
      kk_integer_drop(n, _ctx);
      return _brw_x157;
    }
    {
      kk_integer_drop(n, _ctx);
      return false;
    }
  }
}

bool kk_src_main_hc__is__space(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x151 = kk_integer_eq_borrow(n,(kk_integer_from_small(32)),kk_context()); /*bool*/;
  if (_match_x151) {
    kk_integer_drop(n, _ctx);
    return true;
  }
  {
    bool _match_x152 = kk_integer_eq_borrow(n,(kk_integer_from_small(9)),kk_context()); /*bool*/;
    if (_match_x152) {
      kk_integer_drop(n, _ctx);
      return true;
    }
    {
      bool _match_x153 = kk_integer_eq_borrow(n,(kk_integer_from_small(10)),kk_context()); /*bool*/;
      if (_match_x153) {
        kk_integer_drop(n, _ctx);
        return true;
      }
      {
        bool _brw_x154 = kk_integer_eq_borrow(n,(kk_integer_from_small(13)),kk_context()); /*bool*/;
        kk_integer_drop(n, _ctx);
        return _brw_x154;
      }
    }
  }
}

bool kk_src_main_hc__is__punct(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x140;
  bool _match_x147 = kk_integer_gte_borrow(n,(kk_integer_from_small(33)),kk_context()); /*bool*/;
  if (_match_x147) {
    bool _match_x149 = kk_integer_lte_borrow(n,(kk_integer_from_small(47)),kk_context()); /*bool*/;
    if (_match_x149) {
      _match_x140 = true; /*bool*/
    }
    else {
      bool _match_x150 = kk_integer_gte_borrow(n,(kk_integer_from_small(58)),kk_context()); /*bool*/;
      if (_match_x150) {
        _match_x140 = kk_integer_lte_borrow(n,(kk_integer_from_small(64)),kk_context()); /*bool*/
      }
      else {
        _match_x140 = false; /*bool*/
      }
    }
  }
  else {
    bool _match_x148 = kk_integer_gte_borrow(n,(kk_integer_from_small(58)),kk_context()); /*bool*/;
    if (_match_x148) {
      _match_x140 = kk_integer_lte_borrow(n,(kk_integer_from_small(64)),kk_context()); /*bool*/
    }
    else {
      _match_x140 = false; /*bool*/
    }
  }
  if (_match_x140) {
    kk_integer_drop(n, _ctx);
    return true;
  }
  {
    bool _match_x141 = kk_integer_gte_borrow(n,(kk_integer_from_small(91)),kk_context()); /*bool*/;
    if (_match_x141) {
      bool _match_x144 = kk_integer_lte_borrow(n,(kk_integer_from_small(96)),kk_context()); /*bool*/;
      if (_match_x144) {
        kk_integer_drop(n, _ctx);
        return true;
      }
      {
        bool _match_x145 = kk_integer_gte_borrow(n,(kk_integer_from_small(123)),kk_context()); /*bool*/;
        if (_match_x145) {
          bool _brw_x146 = kk_integer_lte_borrow(n,(kk_integer_from_small(126)),kk_context()); /*bool*/;
          kk_integer_drop(n, _ctx);
          return _brw_x146;
        }
        {
          kk_integer_drop(n, _ctx);
          return false;
        }
      }
    }
    {
      bool _match_x142 = kk_integer_gte_borrow(n,(kk_integer_from_small(123)),kk_context()); /*bool*/;
      if (_match_x142) {
        bool _brw_x143 = kk_integer_lte_borrow(n,(kk_integer_from_small(126)),kk_context()); /*bool*/;
        kk_integer_drop(n, _ctx);
        return _brw_x143;
      }
      {
        kk_integer_drop(n, _ctx);
        return false;
      }
    }
  }
}


// lift anonymous function
struct kk_src_main_hc__all__digits_fun284__t {
  struct kk_function_s _base;
};
static bool kk_src_main_hc__all__digits_fun284(kk_function_t _fself, kk_box_t _b_x32, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc__all__digits_fun284(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc__all__digits_fun284, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_src_main_hc__all__digits_fun284(kk_function_t _fself, kk_box_t _b_x32, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x285 = kk_char_unbox(_b_x32, KK_OWNED, _ctx); /*char*/
  return kk_src_main_hc__is__digit(_x_x285, _ctx);
}

bool kk_src_main_hc__all__digits(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x137;
  kk_integer_t _brw_x138;
  kk_string_t _x_x283 = kk_string_dup(s, _ctx); /*string*/
  _brw_x138 = kk_std_core_string_chars_fs_count(_x_x283, _ctx); /*int*/
  bool _brw_x139 = kk_integer_eq_borrow(_brw_x138,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x138, _ctx);
  _match_x137 = _brw_x139; /*bool*/
  if (_match_x137) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x30_33 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x30_33, kk_src_main_new_hc__all__digits_fun284(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_src_main_hc__all__alpha_fun287__t {
  struct kk_function_s _base;
};
static bool kk_src_main_hc__all__alpha_fun287(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc__all__alpha_fun287(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc__all__alpha_fun287, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_src_main_hc__all__alpha_fun287(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x288 = kk_char_unbox(_b_x37, KK_OWNED, _ctx); /*char*/
  return kk_src_main_hc__is__alpha(_x_x288, _ctx);
}

bool kk_src_main_hc__all__alpha(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x134;
  kk_integer_t _brw_x135;
  kk_string_t _x_x286 = kk_string_dup(s, _ctx); /*string*/
  _brw_x135 = kk_std_core_string_chars_fs_count(_x_x286, _ctx); /*int*/
  bool _brw_x136 = kk_integer_eq_borrow(_brw_x135,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x135, _ctx);
  _match_x134 = _brw_x136; /*bool*/
  if (_match_x134) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x35_38 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x35_38, kk_src_main_new_hc__all__alpha_fun287(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_src_main_hc__all__upper_fun290__t {
  struct kk_function_s _base;
};
static bool kk_src_main_hc__all__upper_fun290(kk_function_t _fself, kk_box_t _b_x42, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc__all__upper_fun290(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc__all__upper_fun290, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_src_main_hc__all__upper_fun290(kk_function_t _fself, kk_box_t _b_x42, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x291 = kk_char_unbox(_b_x42, KK_OWNED, _ctx); /*char*/
  return kk_src_main_hc__is__upper(_x_x291, _ctx);
}

bool kk_src_main_hc__all__upper(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x131;
  kk_integer_t _brw_x132;
  kk_string_t _x_x289 = kk_string_dup(s, _ctx); /*string*/
  _brw_x132 = kk_std_core_string_chars_fs_count(_x_x289, _ctx); /*int*/
  bool _brw_x133 = kk_integer_eq_borrow(_brw_x132,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x132, _ctx);
  _match_x131 = _brw_x133; /*bool*/
  if (_match_x131) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x40_43 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x40_43, kk_src_main_new_hc__all__upper_fun290(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_src_main_hc__all__lower_fun293__t {
  struct kk_function_s _base;
};
static bool kk_src_main_hc__all__lower_fun293(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc__all__lower_fun293(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc__all__lower_fun293, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_src_main_hc__all__lower_fun293(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x294 = kk_char_unbox(_b_x47, KK_OWNED, _ctx); /*char*/
  return kk_src_main_hc__is__lower(_x_x294, _ctx);
}

bool kk_src_main_hc__all__lower(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x128;
  kk_integer_t _brw_x129;
  kk_string_t _x_x292 = kk_string_dup(s, _ctx); /*string*/
  _brw_x129 = kk_std_core_string_chars_fs_count(_x_x292, _ctx); /*int*/
  bool _brw_x130 = kk_integer_eq_borrow(_brw_x129,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x129, _ctx);
  _match_x128 = _brw_x130; /*bool*/
  if (_match_x128) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x45_48 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x45_48, kk_src_main_new_hc__all__lower_fun293(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_src_main_hc__all__alnum_fun296__t {
  struct kk_function_s _base;
};
static bool kk_src_main_hc__all__alnum_fun296(kk_function_t _fself, kk_box_t _b_x52, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc__all__alnum_fun296(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc__all__alnum_fun296, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_src_main_hc__all__alnum_fun296(kk_function_t _fself, kk_box_t _b_x52, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x297 = kk_char_unbox(_b_x52, KK_OWNED, _ctx); /*char*/
  return kk_src_main_hc__is__alnum(_x_x297, _ctx);
}

bool kk_src_main_hc__all__alnum(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x125;
  kk_integer_t _brw_x126;
  kk_string_t _x_x295 = kk_string_dup(s, _ctx); /*string*/
  _brw_x126 = kk_std_core_string_chars_fs_count(_x_x295, _ctx); /*int*/
  bool _brw_x127 = kk_integer_eq_borrow(_brw_x126,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x126, _ctx);
  _match_x125 = _brw_x127; /*bool*/
  if (_match_x125) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x50_53 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x50_53, kk_src_main_new_hc__all__alnum_fun296(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_src_main_hc__glob__match__chars_fun303__t {
  struct kk_function_s _base;
};
static bool kk_src_main_hc__glob__match__chars_fun303(kk_function_t _fself, kk_box_t _b_x59, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc__glob__match__chars_fun303(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc__glob__match__chars_fun303, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_src_main_hc__glob__match__chars_fun303(kk_function_t _fself, kk_box_t _b_x59, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x304;
  kk_char_t _x_x305 = kk_char_unbox(_b_x59, KK_OWNED, _ctx); /*char*/
  _x_x304 = kk_std_core_string_char_fs_string(_x_x305, _ctx); /*string*/
  kk_string_t _x_x306;
  kk_define_string_literal(static, _s_x307, 1, "/", _ctx)
  _x_x306 = kk_string_dup(_s_x307, _ctx); /*string*/
  return kk_string_is_neq(_x_x304,_x_x306,kk_context());
}

bool kk_src_main_hc__glob__match__chars(kk_std_core_types__list pat, kk_std_core_types__list input, kk_context_t* _ctx) { /* (pat : list<char>, input : list<char>) -> div bool */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(pat, _ctx)) {
    if (kk_std_core_types__is_Nil(input, _ctx)) {
      return true;
    }
    {
      kk_std_core_types__list_drop(input, _ctx);
      return false;
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x298 = kk_std_core_types__as_Cons(pat, _ctx);
    kk_box_t _box_x55 = _con_x298->head;
    kk_std_core_types__list prest = _con_x298->tail;
    kk_char_t p = kk_char_unbox(_box_x55, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(pat, _ctx)) {
      kk_datatype_ptr_free(pat, _ctx);
    }
    else {
      kk_std_core_types__list_dup(prest, _ctx);
      kk_datatype_ptr_decref(pat, _ctx);
    }
    kk_string_t _match_x122 = kk_std_core_string_char_fs_string(p, _ctx); /*string*/;
    if (kk_string_cmp_cstr_borrow(_match_x122, "\?", _ctx) == 0) {
      kk_string_drop(_match_x122, _ctx);
      if (kk_std_core_types__is_Nil(input, _ctx)) {
        kk_std_core_types__list_drop(prest, _ctx);
        return false;
      }
      {
        struct kk_std_core_types_Cons* _con_x299 = kk_std_core_types__as_Cons(input, _ctx);
        kk_box_t _box_x56 = _con_x299->head;
        kk_std_core_types__list irest = _con_x299->tail;
        kk_char_t c = kk_char_unbox(_box_x56, KK_BORROWED, _ctx);
        if kk_likely(kk_datatype_ptr_is_unique(input, _ctx)) {
          kk_datatype_ptr_free(input, _ctx);
        }
        else {
          kk_std_core_types__list_dup(irest, _ctx);
          kk_datatype_ptr_decref(input, _ctx);
        }
        bool _match_x124;
        kk_string_t _x_x300 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
        kk_string_t _x_x301;
        kk_define_string_literal(static, _s_x302, 1, "/", _ctx)
        _x_x301 = kk_string_dup(_s_x302, _ctx); /*string*/
        _match_x124 = kk_string_is_eq(_x_x300,_x_x301,kk_context()); /*bool*/
        if (_match_x124) {
          kk_std_core_types__list_drop(prest, _ctx);
          kk_std_core_types__list_drop(irest, _ctx);
          return false;
        }
        { // tailcall
          pat = prest;
          input = irest;
          goto kk__tailcall;
        }
      }
    }
    if (kk_string_cmp_cstr_borrow(_match_x122, "*", _ctx) == 0) {
      kk_string_drop(_match_x122, _ctx);
      if (kk_std_core_types__is_Nil(prest, _ctx)) {
        return kk_std_core_list_all(input, kk_src_main_new_hc__glob__match__chars_fun303(_ctx), _ctx);
      }
      {
        return kk_src_main_hc__glob__star(prest, input, _ctx);
      }
    }
    {
      kk_string_drop(_match_x122, _ctx);
      if (kk_std_core_types__is_Nil(input, _ctx)) {
        kk_std_core_types__list_drop(prest, _ctx);
        return false;
      }
      {
        struct kk_std_core_types_Cons* _con_x308 = kk_std_core_types__as_Cons(input, _ctx);
        kk_box_t _box_x60 = _con_x308->head;
        kk_std_core_types__list irest_0 = _con_x308->tail;
        kk_char_t c_1 = kk_char_unbox(_box_x60, KK_BORROWED, _ctx);
        if kk_likely(kk_datatype_ptr_is_unique(input, _ctx)) {
          kk_datatype_ptr_free(input, _ctx);
        }
        else {
          kk_std_core_types__list_dup(irest_0, _ctx);
          kk_datatype_ptr_decref(input, _ctx);
        }
        bool _match_x123 = (p == c_1); /*bool*/;
        if (_match_x123) { // tailcall
                           pat = prest;
                           input = irest_0;
                           goto kk__tailcall;
        }
        {
          kk_std_core_types__list_drop(prest, _ctx);
          kk_std_core_types__list_drop(irest_0, _ctx);
          return false;
        }
      }
    }
  }
}

bool kk_src_main_hc__glob__star(kk_std_core_types__list prest_0, kk_std_core_types__list input_0, kk_context_t* _ctx) { /* (prest : list<char>, input : list<char>) -> div bool */ 
  kk__tailcall: ;
  bool _match_x120;
  kk_std_core_types__list _x_x309 = kk_std_core_types__list_dup(prest_0, _ctx); /*list<char>*/
  kk_std_core_types__list _x_x310 = kk_std_core_types__list_dup(input_0, _ctx); /*list<char>*/
  _match_x120 = kk_src_main_hc__glob__match__chars(_x_x309, _x_x310, _ctx); /*bool*/
  if (_match_x120) {
    kk_std_core_types__list_drop(prest_0, _ctx);
    kk_std_core_types__list_drop(input_0, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Nil(input_0, _ctx)) {
    kk_std_core_types__list_drop(prest_0, _ctx);
    return false;
  }
  {
    struct kk_std_core_types_Cons* _con_x311 = kk_std_core_types__as_Cons(input_0, _ctx);
    kk_box_t _box_x64 = _con_x311->head;
    kk_std_core_types__list irest_1 = _con_x311->tail;
    kk_char_t c_2 = kk_char_unbox(_box_x64, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(input_0, _ctx)) {
      kk_datatype_ptr_free(input_0, _ctx);
    }
    else {
      kk_std_core_types__list_dup(irest_1, _ctx);
      kk_datatype_ptr_decref(input_0, _ctx);
    }
    bool _match_x121;
    kk_string_t _x_x312 = kk_std_core_string_char_fs_string(c_2, _ctx); /*string*/
    kk_string_t _x_x313;
    kk_define_string_literal(static, _s_x314, 1, "/", _ctx)
    _x_x313 = kk_string_dup(_s_x314, _ctx); /*string*/
    _match_x121 = kk_string_is_eq(_x_x312,_x_x313,kk_context()); /*bool*/
    if (_match_x121) {
      kk_std_core_types__list_drop(prest_0, _ctx);
      kk_std_core_types__list_drop(irest_1, _ctx);
      return false;
    }
    { // tailcall
      input_0 = irest_1;
      goto kk__tailcall;
    }
  }
}

bool kk_src_main_hc__glob__doublestar(kk_std_core_types__list prest, kk_std_core_types__list paths, kk_context_t* _ctx) { /* (prest : list<string>, paths : list<string>) -> div bool */ 
  kk__tailcall: ;
  bool _match_x119;
  kk_std_core_types__list _x_x317 = kk_std_core_types__list_dup(prest, _ctx); /*list<string>*/
  kk_std_core_types__list _x_x318 = kk_std_core_types__list_dup(paths, _ctx); /*list<string>*/
  _match_x119 = kk_src_main_hc__glob__match__segments(_x_x317, _x_x318, _ctx); /*bool*/
  if (_match_x119) {
    kk_std_core_types__list_drop(prest, _ctx);
    kk_std_core_types__list_drop(paths, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Nil(paths, _ctx)) {
    kk_std_core_types__list_drop(prest, _ctx);
    return false;
  }
  {
    struct kk_std_core_types_Cons* _con_x319 = kk_std_core_types__as_Cons(paths, _ctx);
    kk_box_t _box_x65 = _con_x319->head;
    kk_std_core_types__list srest = _con_x319->tail;
    kk_string_t _pat_3 = kk_string_unbox(_box_x65);
    if kk_likely(kk_datatype_ptr_is_unique(paths, _ctx)) {
      kk_string_drop(_pat_3, _ctx);
      kk_datatype_ptr_free(paths, _ctx);
    }
    else {
      kk_std_core_types__list_dup(srest, _ctx);
      kk_datatype_ptr_decref(paths, _ctx);
    }
    { // tailcall
      paths = srest;
      goto kk__tailcall;
    }
  }
}

bool kk_src_main_hc__glob__match__segments(kk_std_core_types__list pats, kk_std_core_types__list paths_0, kk_context_t* _ctx) { /* (pats : list<string>, paths : list<string>) -> div bool */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(pats, _ctx)) {
    if (kk_std_core_types__is_Nil(paths_0, _ctx)) {
      return true;
    }
    {
      kk_std_core_types__list_drop(paths_0, _ctx);
      return false;
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x320 = kk_std_core_types__as_Cons(pats, _ctx);
    kk_box_t _box_x66 = _con_x320->head;
    kk_std_core_types__list prest_0 = _con_x320->tail;
    kk_string_t p = kk_string_unbox(_box_x66);
    if kk_likely(kk_datatype_ptr_is_unique(pats, _ctx)) {
      kk_datatype_ptr_free(pats, _ctx);
    }
    else {
      kk_string_dup(p, _ctx);
      kk_std_core_types__list_dup(prest_0, _ctx);
      kk_datatype_ptr_decref(pats, _ctx);
    }
    bool _match_x117;
    kk_string_t _x_x321 = kk_string_dup(p, _ctx); /*string*/
    kk_string_t _x_x322;
    kk_define_string_literal(static, _s_x323, 2, "**", _ctx)
    _x_x322 = kk_string_dup(_s_x323, _ctx); /*string*/
    _match_x117 = kk_string_is_eq(_x_x321,_x_x322,kk_context()); /*bool*/
    if (_match_x117) {
      kk_string_drop(p, _ctx);
      return kk_src_main_hc__glob__doublestar(prest_0, paths_0, _ctx);
    }
    if (kk_std_core_types__is_Nil(paths_0, _ctx)) {
      kk_std_core_types__list_drop(prest_0, _ctx);
      kk_string_drop(p, _ctx);
      return false;
    }
    {
      struct kk_std_core_types_Cons* _con_x324 = kk_std_core_types__as_Cons(paths_0, _ctx);
      kk_box_t _box_x67 = _con_x324->head;
      kk_std_core_types__list srest_0 = _con_x324->tail;
      kk_string_t s = kk_string_unbox(_box_x67);
      if kk_likely(kk_datatype_ptr_is_unique(paths_0, _ctx)) {
        kk_datatype_ptr_free(paths_0, _ctx);
      }
      else {
        kk_string_dup(s, _ctx);
        kk_std_core_types__list_dup(srest_0, _ctx);
        kk_datatype_ptr_decref(paths_0, _ctx);
      }
      bool _match_x118;
      kk_std_core_types__list _x_x325 = kk_std_core_string_list(p, _ctx); /*list<char>*/
      kk_std_core_types__list _x_x326 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _match_x118 = kk_src_main_hc__glob__match__chars(_x_x325, _x_x326, _ctx); /*bool*/
      if (_match_x118) { // tailcall
                         pats = prest_0;
                         paths_0 = srest_0;
                         goto kk__tailcall;
      }
      {
        kk_std_core_types__list_drop(srest_0, _ctx);
        kk_std_core_types__list_drop(prest_0, _ctx);
        return false;
      }
    }
  }
}


// lift anonymous function
struct kk_src_main_hc__glob__match__path_fun331__t {
  struct kk_function_s _base;
};
static kk_box_t kk_src_main_hc__glob__match__path_fun331(kk_function_t _fself, kk_box_t _b_x70, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc__glob__match__path_fun331(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc__glob__match__path_fun331, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_src_main_hc__glob__match__path_fun331(kk_function_t _fself, kk_box_t _b_x70, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x332;
  kk_char_t _x_x333 = kk_char_unbox(_b_x70, KK_OWNED, _ctx); /*char*/
  _x_x332 = kk_std_core_string_char_fs_string(_x_x333, _ctx); /*string*/
  return kk_string_box(_x_x332);
}


// lift anonymous function
struct kk_src_main_hc__glob__match__path_fun340__t {
  struct kk_function_s _base;
};
static kk_box_t kk_src_main_hc__glob__match__path_fun340(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc__glob__match__path_fun340(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc__glob__match__path_fun340, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_src_main_hc__glob__match__path_fun340(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x341;
  kk_char_t _x_x342 = kk_char_unbox(_b_x75, KK_OWNED, _ctx); /*char*/
  _x_x341 = kk_std_core_string_char_fs_string(_x_x342, _ctx); /*string*/
  return kk_string_box(_x_x341);
}

bool kk_src_main_hc__glob__match__path(kk_string_t pattern, kk_string_t hc__path, kk_context_t* _ctx) { /* (pattern : string, hc_path : string) -> div bool */ 
  kk_std_core_types__list pat__parts;
  bool _match_x114;
  kk_string_t _x_x327;
  kk_define_string_literal(static, _s_x328, 1, "/", _ctx)
  _x_x327 = kk_string_dup(_s_x328, _ctx); /*string*/
  kk_string_t _x_x329 = kk_string_empty(); /*string*/
  _match_x114 = kk_string_is_eq(_x_x327,_x_x329,kk_context()); /*bool*/
  if (_match_x114) {
    kk_std_core_types__list _b_x68_71 = kk_std_core_string_list(pattern, _ctx); /*list<char>*/;
    kk_function_t _brw_x115 = kk_src_main_new_hc__glob__match__path_fun331(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x116 = kk_std_core_list_map(_b_x68_71, _brw_x115, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x115, _ctx);
    pat__parts = _brw_x116; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x334;
    kk_define_string_literal(static, _s_x335, 1, "/", _ctx)
    _x_x334 = kk_string_dup(_s_x335, _ctx); /*string*/
    v_10011 = kk_string_splitv(pattern,_x_x334,kk_context()); /*vector<string>*/
    pat__parts = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  kk_std_core_types__list path__parts;
  bool _match_x111;
  kk_string_t _x_x336;
  kk_define_string_literal(static, _s_x337, 1, "/", _ctx)
  _x_x336 = kk_string_dup(_s_x337, _ctx); /*string*/
  kk_string_t _x_x338 = kk_string_empty(); /*string*/
  _match_x111 = kk_string_is_eq(_x_x336,_x_x338,kk_context()); /*bool*/
  if (_match_x111) {
    kk_std_core_types__list _b_x73_76 = kk_std_core_string_list(hc__path, _ctx); /*list<char>*/;
    kk_function_t _brw_x112 = kk_src_main_new_hc__glob__match__path_fun340(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x113 = kk_std_core_list_map(_b_x73_76, _brw_x112, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x112, _ctx);
    path__parts = _brw_x113; /*list<string>*/
  }
  else {
    kk_vector_t v_10011_0;
    kk_string_t _x_x343;
    kk_define_string_literal(static, _s_x344, 1, "/", _ctx)
    _x_x343 = kk_string_dup(_s_x344, _ctx); /*string*/
    v_10011_0 = kk_string_splitv(hc__path,_x_x343,kk_context()); /*vector<string>*/
    path__parts = kk_std_core_vector_vlist(v_10011_0, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_src_main_hc__glob__match__segments(pat__parts, path__parts, _ctx);
}


// lift anonymous function
struct kk_src_main_hc__words_fun350__t {
  struct kk_function_s _base;
};
static kk_box_t kk_src_main_hc__words_fun350(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc__words_fun350(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc__words_fun350, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_src_main_hc__words_fun350(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x351;
  kk_char_t _x_x352 = kk_char_unbox(_b_x80, KK_OWNED, _ctx); /*char*/
  _x_x351 = kk_std_core_string_char_fs_string(_x_x352, _ctx); /*string*/
  return kk_string_box(_x_x351);
}


// lift anonymous function
struct kk_src_main_hc__words_fun355__t {
  struct kk_function_s _base;
};
static bool kk_src_main_hc__words_fun355(kk_function_t _fself, kk_box_t _b_x83, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc__words_fun355(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc__words_fun355, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_src_main_hc__words_fun355(kk_function_t _fself, kk_box_t _b_x83, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool b_10041;
  kk_integer_t _brw_x102;
  kk_string_t _x_x356 = kk_string_unbox(_b_x83); /*string*/
  _brw_x102 = kk_std_core_string_chars_fs_count(_x_x356, _ctx); /*int*/
  bool _brw_x103 = kk_integer_eq_borrow(_brw_x102,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x102, _ctx);
  b_10041 = _brw_x103; /*bool*/
  if (b_10041) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_src_main_hc__words(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  kk_std_core_types__list _b_x81_84;
  bool _match_x104;
  kk_string_t _x_x346;
  kk_define_string_literal(static, _s_x347, 1, " ", _ctx)
  _x_x346 = kk_string_dup(_s_x347, _ctx); /*string*/
  kk_string_t _x_x348 = kk_string_empty(); /*string*/
  _match_x104 = kk_string_is_eq(_x_x346,_x_x348,kk_context()); /*bool*/
  if (_match_x104) {
    kk_std_core_types__list _b_x78_86 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x105 = kk_src_main_new_hc__words_fun350(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x106 = kk_std_core_list_map(_b_x78_86, _brw_x105, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x105, _ctx);
    _b_x81_84 = _brw_x106; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x353;
    kk_define_string_literal(static, _s_x354, 1, " ", _ctx)
    _x_x353 = kk_string_dup(_s_x354, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x353,kk_context()); /*vector<string>*/
    _b_x81_84 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_std_core_list_filter(_b_x81_84, kk_src_main_new_hc__words_fun355(_ctx), _ctx);
}


// lift anonymous function
struct kk_src_main_hc__lines_fun361__t {
  struct kk_function_s _base;
};
static kk_box_t kk_src_main_hc__lines_fun361(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc__lines_fun361(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc__lines_fun361, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_src_main_hc__lines_fun361(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x362;
  kk_char_t _x_x363 = kk_char_unbox(_b_x91, KK_OWNED, _ctx); /*char*/
  _x_x362 = kk_std_core_string_char_fs_string(_x_x363, _ctx); /*string*/
  return kk_string_box(_x_x362);
}

kk_std_core_types__list kk_src_main_hc__lines(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  bool _match_x99;
  kk_string_t _x_x357;
  kk_define_string_literal(static, _s_x358, 1, "\n", _ctx)
  _x_x357 = kk_string_dup(_s_x358, _ctx); /*string*/
  kk_string_t _x_x359 = kk_string_empty(); /*string*/
  _match_x99 = kk_string_is_eq(_x_x357,_x_x359,kk_context()); /*bool*/
  if (_match_x99) {
    kk_std_core_types__list _b_x89_92 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x100 = kk_src_main_new_hc__lines_fun361(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x101 = kk_std_core_list_map(_b_x89_92, _brw_x100, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x100, _ctx);
    return _brw_x101;
  }
  {
    kk_vector_t v_10011;
    kk_string_t _x_x364;
    kk_define_string_literal(static, _s_x365, 1, "\n", _ctx)
    _x_x364 = kk_string_dup(_s_x365, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x364,kk_context()); /*vector<string>*/
    return kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx);
  }
}

kk_string_t kk_src_main_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx) { /* (s : string, n : int) -> div string */ 
  bool _match_x98 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x98) {
    kk_string_drop(s, _ctx);
    kk_integer_drop(n, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x371 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x372;
    kk_integer_t _x_x373 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    _x_x372 = kk_src_main_hc__repeat__str(s, _x_x373, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x371, _x_x372, _ctx);
  }
}

kk_string_t kk_src_main_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10055;
  kk_string_t _x_x374 = kk_string_dup(s, _ctx); /*string*/
  y_10055 = kk_std_core_string_chars_fs_count(_x_x374, _ctx); /*int*/
  kk_integer_t b_10053 = kk_integer_sub(width,y_10055,kk_context()); /*int*/;
  kk_string_t _x_x375;
  kk_integer_t _x_x376;
  bool _match_x97 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10053,kk_context()); /*bool*/;
  if (_match_x97) {
    kk_integer_drop(b_10053, _ctx);
    _x_x376 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x376 = b_10053; /*int*/
  }
  _x_x375 = kk_src_main_hc__repeat__str(ch, _x_x376, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x375, s, _ctx);
}

kk_string_t kk_src_main_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10059;
  kk_string_t _x_x377 = kk_string_dup(s, _ctx); /*string*/
  y_10059 = kk_std_core_string_chars_fs_count(_x_x377, _ctx); /*int*/
  kk_integer_t b_10057 = kk_integer_sub(width,y_10059,kk_context()); /*int*/;
  kk_string_t _x_x378;
  kk_integer_t _x_x379;
  bool _match_x96 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10057,kk_context()); /*bool*/;
  if (_match_x96) {
    kk_integer_drop(b_10057, _ctx);
    _x_x379 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x379 = b_10057; /*int*/
  }
  _x_x378 = kk_src_main_hc__repeat__str(ch, _x_x379, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(s, _x_x378, _ctx);
}

kk_string_t kk_src_main_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10063;
  kk_string_t _x_x380 = kk_string_dup(s, _ctx); /*string*/
  y_10063 = kk_std_core_string_chars_fs_count(_x_x380, _ctx); /*int*/
  kk_integer_t b_10061 = kk_integer_sub(width,y_10063,kk_context()); /*int*/;
  kk_integer_t total;
  bool _match_x95 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10061,kk_context()); /*bool*/;
  if (_match_x95) {
    kk_integer_drop(b_10061, _ctx);
    total = kk_integer_from_small(0); /*int*/
  }
  else {
    total = b_10061; /*int*/
  }
  kk_integer_t left;
  kk_integer_t _x_x381 = kk_integer_dup(total, _ctx); /*int*/
  left = kk_integer_div(_x_x381,(kk_integer_from_small(2)),kk_context()); /*int*/
  kk_integer_t right;
  kk_integer_t _x_x382 = kk_integer_dup(left, _ctx); /*int*/
  right = kk_integer_sub(total,_x_x382,kk_context()); /*int*/
  kk_string_t _x_x383;
  kk_string_t _x_x384;
  kk_string_t _x_x385 = kk_string_dup(ch, _ctx); /*string*/
  _x_x384 = kk_src_main_hc__repeat__str(_x_x385, left, _ctx); /*string*/
  _x_x383 = kk_std_core_types__lp__plus__plus__rp_(_x_x384, s, _ctx); /*string*/
  kk_string_t _x_x386 = kk_src_main_hc__repeat__str(ch, right, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x383, _x_x386, _ctx);
}

kk_string_t kk_src_main_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx) { /* (s : string, pre : string) -> string */ 
  kk_std_core_types__maybe maybe_10066;
  kk_string_t _x_x387 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x388 = kk_string_dup(pre, _ctx); /*string*/
  maybe_10066 = kk_std_core_sslice_starts_with(_x_x387, _x_x388, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10066, _ctx)) {
    kk_box_t _box_x94 = maybe_10066._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10066, _ctx);
    kk_std_core_types__list _x_x389;
    kk_std_core_types__list _x_x390 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x391 = kk_std_core_string_chars_fs_count(pre, _ctx); /*int*/
    _x_x389 = kk_std_core_list_drop(_x_x390, _x_x391, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x389, _ctx);
  }
  {
    kk_string_drop(pre, _ctx);
    return s;
  }
}

// initialization
void kk_src_main__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_std_core_bool__init(_ctx);
  kk_std_core_order__init(_ctx);
  kk_std_core_char__init(_ctx);
  kk_std_core_int__init(_ctx);
  kk_std_core_vector__init(_ctx);
  kk_std_core_string__init(_ctx);
  kk_std_core_sslice__init(_ctx);
  kk_std_core_list__init(_ctx);
  kk_std_core_maybe__init(_ctx);
  kk_std_core_maybe2__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_lazy__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  kk_std_core__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_src_main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core__done(_ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_lazy__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core_maybe2__done(_ctx);
  kk_std_core_maybe__done(_ctx);
  kk_std_core_list__done(_ctx);
  kk_std_core_sslice__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_vector__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_order__done(_ctx);
  kk_std_core_bool__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
