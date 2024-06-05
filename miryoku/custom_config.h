// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp Q,     &kp W,     &kp E,    &kp R,    &kp T,                                             &kp Y,  &kp U, &kp I, &kp O, &kp P,\
&kp A,     &kp S,     &kp D,    &kp F,    &kp G,                                             &kp H, &kp J, &kp K, &kp L, &kp SEMI,\
U_LT(U_BUTTON, Z), U_MT(LALT, X), U_MT(LCTRL, C), U_MT(LSHFT, V), U_MT(LGUI, B),             U_MT(LGUI, N),  U_MT(LSHFT, M), U_MT(LCTRL, COMMA), U_MT(LALT, DOT), U_LT(U_BUTTON, SLASH),\
U_NP, U_NP, U_LT(U_MEDIA, ESC),U_LT(U_NAV, TAB),U_LT(U_MOUSE, SPACE),                        U_LT(U_SYM, BSPC),  U_LT(U_NUM, RET), U_LT(U_FUN, DEL),  U_NP, U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              U_NA,              U_NA,              U_NA,              U_NA,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          &kp LGUI,          &kp LSHFT,         &kp LCTRL,         &kp LALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp INS,           &kp HOME,          &kp UP,            &kp END,           &kp PG_UP,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
U_NA,              &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp LGUI,          U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP
