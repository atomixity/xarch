/**
 * Copyright 2025 Leesoo Ahn <lsahn@ooseel.net>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __XARCH_UTIL_H__
#define __XARCH_UTIL_H__

#include <stdint.h>

#ifdef __cplusplus
#define XAR_BEGIN_DECLS extern "C" {
#define XAR_END_DECLS   }
#else
#define XAR_BEGIN_DECLS
#define XAR_END_DECLS
#endif

typedef int8_t      s8;
typedef int16_t     s16;
typedef int32_t     s32;
typedef int64_t     s64;

typedef uint8_t     u8;
typedef uint16_t    u16;
typedef uint32_t    u32;
typedef uint64_t    u64;


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

/**
 * @brief Decodes 16-bit instructions.
 * 
 * This function decodes 16-bit opcode(@_instr) by class4
 * and returns 0 or a masked value representing false or true
 * respectively.
 * 
 * @param _instr opcodes from Program Counter.
 * @param c3..c0 represents defined opcodes in binary form.
 * @param _mask a mask to recognize a opcode.
 * @return 0 if @_instr is not part of @c3..@c0.
 *         x > 0 if fully matched by @_mask, 0xffff,
 *               or partially matched with @c3..@c0.
 */
#define ISA16(_instr, c3, c2, c1, c0, _mask)                                \
    (                                                                       \
        ((___class4(c3, c2, c1, c0) & ((u16)(_mask)))                       \
            ==                                                              \
        ((*(u16*)(_instr)) & ((u16)(_mask))))                               \
            ? (~(_mask) ? (*(u16*)(_instr) & ~(_mask)) : *(u16*)(_instr))   \
            : 0                                                             \
    )

/**
 * @brief Decodes 32-bit instructions.
 * 
 * This function decodes 32-bit opcode(@_instr) by class8
 * and returns 0 or a masked value representing false or true
 * respectively.
 * 
 * @param _instr opcodes from Program Counter.
 * @param c7..c0 represents defined opcodes in binary form.
 * @param _mask a mask to recognize a opcode.
 * @return 0 if @_instr is not part of @c7..@c0.
 *         x > 0 if fully matched by @_mask, 0xffff'ffff,
 *               or partially matched with @c7..@c0.
 */
#define ISA32(_instr, c7, c6, c5, c4, c3, c2, c1, c0, _mask)                \
    (                                                                       \
        ((___class8(c7, c6, c5, c4, c3, c2, c1, c0) & ((u32)(_mask)))       \
            ==                                                              \
        ((*(u32*)(_instr)) & ((u32)(_mask))))                               \
            ? (~(_mask) ? (*(u32*)(_instr) & ~(_mask)) : *(u32*)(_instr))   \
            : 0                                                             \
    )

#endif /* __XARCH_UTIL_H__ */
