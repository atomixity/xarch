#ifndef __XARCH_UTIL_H__
#define __XARCH_UTIL_H__

#include <stdint.h>

#define ___bit4(d_bit4, c_bit4, b_bit4, a_bit4) \
    (                                           \
        ((0b ## d_bit4) << 12) |                \
        ((0b ## c_bit4) <<  8) |                \
        ((0b ## b_bit4) <<  4) |                \
        ((0b ## a_bit4)      )                  \
    )

#define ISA16(_instr, d4, c4, b4, a4, _mask)            \
    (!!(                                                \
        (___bit4(d4, c4, b4, a4) & ((uint16_t)(_mask))) \
            ==                                          \
        ((*(uint16_t*)(_instr)) & ((uint16_t)(_mask)))  \
            ? 1 : 0                                     \
    ))

#endif /* __XARCH_UTIL_H__ */
