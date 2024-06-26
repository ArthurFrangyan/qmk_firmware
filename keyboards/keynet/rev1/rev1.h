#pragma once

#include "keynet.h"

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
    #include <avr/io.h>
    #include <avr/interrupt.h>
#endif
#endif

/*
#define LAYOUT( \
    L00, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35, LT4, RT4, R30, R31, R32, R33, R34, R35, \
                        LT1, LT2, LT3, RT3, RT2, RT1 \
    ) \
    { \
        { L00, L01, L02, L03, L04, L05 }, \
        { L10, L11, L12, L13, L14, L15 }, \
        { L20, L21, L22, L23, L24, L25 }, \
        { L30, L31, L32, L33, L34, L35 }, \
        { KC_NO, KC_NO, LT4, LT1, LT2, LT3 }, \
        { R05, R04, R03, R02, R01, R00 }, \
        { R15, R14, R13, R12, R11, R10 }, \
        { R25, R24, R23, R22, R21, R20 }, \
        { R35, R34, R33, R32, R31, R30 }, \
        { KC_NO, KC_NO, RT4, RT1, RT2, RT3 } \
    }
*/
#define ___ KC_NO 
#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06, L07,                         R00, R01, R02, R03, R04, R05, R06, R07,\
    L10, L11, L12, L13, L14, L15, L16, L17,                         R10, R11, R12, R13, R14, R15, R16, R17,\
    L20, L21, L22, L23, L24, L25, L26,                                   R20, R21, R22, R23, R24, R25, R26,\
    L30, L31, L32, L33, L34, L35, L36, E01, L46,               R40, E02, R30, R31, R32, R33, R34, R35, R36,\
                   L40, L41, L42, L43, L44, L45,               R41, R42, R43, R44, R45, R46\
    ) \
    { \
        { L00, L01, L02, L03, L04, L05, L06, L07 }, \
        { L10, L11, L12, L13, L14, L15, L16, L17 }, \
        { L20, L21, L22, L23, L24, L25, L26, ___ }, \
        { L30, L31, L32, L33, L34, L35, L36, E01 }, \
        { L40, L41, ___, L42, L43, L44, L45, L46 }, \
        { R07, R06, R05, R04, R03, R02, R01, R00 },\
        { R17, R16, R15, R14, R13, R12, R11, R10 }, \
        { R26, R25, R24, R23, R22, R21, R20, ___ }, \
        { R36, R35, R34, R33, R32, R31, R30, E02 }, \
        { R46, R45, R44, R43, R42, R41, R40, ___ } \
    }
