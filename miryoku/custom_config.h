// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp Q,     &kp W,     &kp E,    &kp R,    &kp T,                                             &kp Y,  &kp U, &kp I, &kp O, &kp P,\
&kp A,     &kp S,     &kp D,    &kp F,    &kp G,                                             &kp H, &kp J, &kp K, &kp L, &kp SEMI,\
U_LT(U_BUTTON, Z), U_MT(LALT, X), U_MT(LCTRL, C), U_MT(LSHFT, V), U_MT(LGUI, B),             U_MT(LGUI, N),  U_MT(LSHFT, M), U_MT(LCTRL, COMMA), U_MT(LALT, DOT), U_LT(U_BUTTON, SLASH),\
U_NP, U_NP, U_LT(U_MEDIA, ESC),U_LT(U_NAV, TAB),U_LT(U_MOUSE, SPACE),                        U_LT(U_SYM, BSPC),  U_LT(U_NUM, RET), U_LT(U_FUN, DEL),  U_NP, U_NP

#define MIRYOKU_LAYER_SYM \
&kp APOS,          &kp DQT,          &kp CARET,        &kp BSLH,         &kp GRAVE,        &kp LBKT,          &kp LT,               &kp EQUAL,     &kp RT,       &kp RBKT,            \
&kp EXCL,          &kp AT,           &kp NUHS,         &kp DLLR,         &kp AMP,          &kp LBRC,          &kp LPAR,             &kp PIPE,      &kp RPAR,     &kp RBRC,          \
&kp PRCNT,         &kp FSLH,         &kp MINUS,        &kp PLUS,         &kp STAR,         &kp UNDER,         &kp EQUAL &kp RT,     U_NA,          U_NA,         U_NA,              \
U_NP,              U_NP,             &kp LPAR,         &kp RPAR,         &kp UNDER,        U_NA,              U_NA,                 U_NA,          U_NP,         U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp INS,           &kp HOME,          &kp UP,            &kp END,           &kp PG_UP,         \
U_NA,              &kp RALT,          U_NA,              U_NA,              U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
U_NA,              &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp LGUI,          U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP
