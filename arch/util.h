#ifndef __XARCH_UTIL_H__
#define __XARCH_UTIL_H__

#include <stdint.h>

typedef int8_t      s8;
typedef int16_t     s16;
typedef int32_t     s32;
typedef int64_t     s64;

typedef uint8_t     u8;
typedef uint16_t    u16;
typedef uint32_t    u32;
typedef uint64_t    u64;

typedef void* addr_t;


#define ___class4(class3, class2, class1, class0)   \
    (                                               \
        ((0b ## class3) << 12) |                    \
        ((0b ## class2) <<  8) |                    \
        ((0b ## class1) <<  4) |                    \
        ((0b ## class0)      )                      \
    )

#define ___class8(class7, class6, class5, class4,           \
                  class3, class2, class1, class0)           \
    (                                                       \
        ___class4(class7, class6, class5, class4) << 16 |   \
        ___class4(class3, class2, class1, class0)           \
    )

#define ISA16(_instr, c3, c2, c1, c0, _mask)            \
    (!!(                                                \
        (___class4(c3, c2, c1, c0) & ((u16)(_mask)))    \
            ==                                          \
        ((*(u16*)(_instr)) & ((u16)(_mask)))            \
            ? 1 : 0                                     \
    ))

#endif /* __XARCH_UTIL_H__ */
