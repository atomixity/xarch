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
#ifndef __AVR8_IMPL_H__
#define __AVR8_IMPL_H__

#include "../util.h"

XAR_BEGIN_DECLS

static inline u16 avr8_NOP(addr_t pc)
{
    return ISA16(pc, 0000, 0000, 0000, 0000, ~0x0);
}

#if defined(AVRxm) || defined(AVRxt)
static inline u16 avr8_SPM5(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1111, 1000, ~0x0);
}
#endif

static inline u16 avr8_SPM(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1110, 1000, ~0x0);
}

static inline u16 avr8_ELPM1(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1101, 1000, ~0x0);
}

static inline u16 avr8_LPM1(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1100, 1000, ~0x0);
}

static inline u16 avr8_WDR(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1010, 1000, ~0x0);
}

static inline u16 avr8_BREAK(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1001, 1000, ~0x0);
}

static inline u16 avr8_SLEEP(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1000, 1000, ~0x0);
}

static inline u16 avr8_EICALL(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0001, 1001, ~0x0);
}

static inline u16 avr8_RETI(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0001, 1000, ~0x0);
}

static inline u16 avr8_ICALL(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0000, 1001, ~0x0);
}

static inline u16 avr8_RET(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0000, 1000, ~0x0);
}

static inline u16 avr8_CLI(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1111, 1000, ~0x0);
}

static inline u16 avr8_CLT(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1110, 1000, ~0x0);
}

static inline u16 avr8_CLH(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1101, 1000, ~0x0);
}

static inline u16 avr8_CLS(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1100, 1000, ~0x0);
}

static inline u16 avr8_CLV(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1011, 1000, ~0x0);
}

static inline u16 avr8_CLN(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1010, 1000, ~0x0);
}

static inline u16 avr8_CLZ(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1001, 1000, ~0x0);
}

static inline u16 avr8_CLC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1000, 1000, ~0x0);
}

static inline u16 avr8_SEI(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0111, 1000, ~0x0);
}

static inline u16 avr8_SET(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0110, 1000, ~0x0);
}

static inline u16 avr8_SEH(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0101, 1000, ~0x0);
}

static inline u16 avr8_SES(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0100, 1000, ~0x0);
}

static inline u16 avr8_SEV(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0011, 1000, ~0x0);
}

static inline u16 avr8_SEN(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0010, 1000, ~0x0);
}

static inline u16 avr8_EIJMP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0001, 1001, ~0x0);
}

static inline u16 avr8_SEZ(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0001, 1000, ~0x0);
}

static inline u16 avr8_IJMP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1001, ~0x0);
}

static inline u16 avr8_SEC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1000, ~0x0);
}

static inline u16 avr8_SBRS(addr_t pc)
{
    return ISA16(pc, 1111, 1110, 0000, 0000, ~0x1f7);
}

static inline u16 avr8_SBRC(addr_t pc)
{
    return ISA16(pc, 1111, 1100, 0000, 0000, ~0x1f7);
}

static inline u16 avr8_BST(addr_t pc)
{
    return ISA16(pc, 1111, 1010, 0000, 0000, ~0x1f7);
}

static inline u16 avr8_BLD(addr_t pc)
{
    return ISA16(pc, 1111, 1000, 0000, 0000, ~0x1f7);
}

static inline u16 avr8_BRID(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0111, ~0x3f8);
}

static inline u16 avr8_BRTC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0110, ~0x3f8);
}

static inline u16 avr8_BRHC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0101, ~0x3f8);
}

static inline u16 avr8_BRGE(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0100, ~0x3f8);
}

static inline u16 avr8_BRVC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0011, ~0x3f8);
}

static inline u16 avr8_BRPL(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0010, ~0x3f8);
}

static inline u16 avr8_BRNE(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0001, ~0x3f8);
}

static inline u16 avr8_BRCC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, ~0x3f8);
}

static inline u16 avr8_BRSH(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, ~0x3f8);
}

static inline u16 avr8_BRBC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_BRIE(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0111, ~0x3f8);
}

static inline u16 avr8_BRTS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0110, ~0x3f8);
}

static inline u16 avr8_BRHS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0101, ~0x3f8);
}

static inline u16 avr8_BRLT(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0100, ~0x3f8);
}

static inline u16 avr8_BRVS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0011, ~0x3f8);
}

static inline u16 avr8_BRMI(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0010, ~0x3f8);
}

static inline u16 avr8_BREQ(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0001, ~0x3f8);
}

static inline u16 avr8_BRCS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, ~0x3f8);
}

static inline u16 avr8_BRLO(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, ~0x3f8);
}

static inline u16 avr8_BRBS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, ~0x3f8);
}

static inline u16 avr8_SER(addr_t pc)
{
    return ISA16(pc, 1110, 1111, 0000, 1111, ~0xf0);
}

static inline u16 avr8_LDI(addr_t pc)
{
    return ISA16(pc, 1110, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr8_RCALL(addr_t pc)
{
    return ISA16(pc, 1101, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr8_RJMP(addr_t pc)
{
    return ISA16(pc, 1100, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr8_OUT(addr_t pc)
{
    return ISA16(pc, 1011, 1000, 0000, 0000, 0xf800);
}

static inline u16 avr8_IN(addr_t pc)
{
    return ISA16(pc, 1011, 0000, 0000, 0000, 0xf800);
}

static inline u16 avr8_STy4(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 1000, ~0x2df7);
}

static inline u16 avr8_STz4(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 0000, ~0x2df7);
}

static inline u16 avr8_LDy4(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 1000, ~0x2df7);
}

static inline u16 avr8_LDz4(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 0000, ~0x2df7);
}

static inline u16 avr8_MUL(addr_t pc)
{
    return ISA16(pc, 1001, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_SBIS(addr_t pc)
{
    return ISA16(pc, 1001, 1011, 0000, 0000, 0xff);
}

static inline u16 avr8_SBI(addr_t pc)
{
    return ISA16(pc, 1001, 1010, 0000, 0000, 0xff);
}

static inline u16 avr8_SBIC(addr_t pc)
{
    return ISA16(pc, 1001, 1001, 0000, 0000, 0xff);
}

static inline u16 avr8_CBI(addr_t pc)
{
    return ISA16(pc, 1001, 1000, 0000, 0000, 0xff);
}

static inline u16 avr8_SBIW(addr_t pc)
{
    return ISA16(pc, 1001, 0111, 0000, 0000, 0xff);
}

static inline u16 avr8_ADIW(addr_t pc)
{
    return ISA16(pc, 1001, 0110, 0000, 0000, 0xff);
}

static inline u16 avr8_CALL(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1110, ~0x1f1);
}

static inline u16 avr8_JMP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1100, ~0x1f1);
}

static inline u16 avr8_DES(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1011, ~0xf0);
}

static inline u16 avr8_DEC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1010, ~0x1f0);
}

static inline u16 avr8_BCLR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1000, 1000, ~0x70);
}

static inline u16 avr8_BSET(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1000, ~0x70);
}

static inline u16 avr8_ROR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0111, ~0x1f0);
}

static inline u16 avr8_LSR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0110, ~0x1f0);
}

static inline u16 avr8_ASR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0101, ~0x1f0);
}

static inline u16 avr8_INC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0011, ~0x1f0);
}

static inline u16 avr8_SWAP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0010, ~0x1f0);
}

static inline u16 avr8_NEG(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0001, ~0x1f0);
}

static inline u16 avr8_COM(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0000, ~0x1f0);
}

static inline u16 avr8_PUSH(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1111, ~0x1f0);
}

static inline u16 avr8_STx3(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1110, ~0x1f0);
}

static inline u16 avr8_STx2(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1101, ~0x1f0);
}

static inline u16 avr8_STx1(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1100, ~0x1f0);
}

static inline u16 avr8_STy3(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1010, ~0x1f0);
}

static inline u16 avr8_STy2(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1001, ~0x1f0);
}

static inline u16 avr8_LAT(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0111, ~0x1f0);
}

static inline u16 avr8_LAC(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0110, ~0x1f0);
}

static inline u16 avr8_LAS(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0101, ~0x1f0);
}

static inline u16 avr8_XCH(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0100, ~0x1f0);
}

static inline u16 avr8_STz3(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0010, ~0x1f0);
}

static inline u16 avr8_STz2(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0001, ~0x1f0);
}

#if defined(AVRrc)
static inline u16 avr8_STS(addr_t pc)
{
    return ISA16(pc, 1010, 1000, 0000, 0000, 0xf800);
}
#else /* !AVRrc */
static inline u16 avr8_STS(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0000, ~0x1f0);
}
#endif /* AVRrc */

static inline u16 avr8_POP(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1111, ~0x1f0);
}

static inline u16 avr8_LDx3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1110, ~0x1f0);
}

static inline u16 avr8_LDx2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1101, ~0x1f0);
}

static inline u16 avr8_LDx1(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1100, ~0x1f0);
}

static inline u16 avr8_LDy3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1010, ~0x1f0);
}

static inline u16 avr8_LDy2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1001, ~0x1f0);
}

static inline u16 avr8_ELPM3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0111, ~0x1f0);
}

static inline u16 avr8_ELPM2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0110, ~0x1f0);
}

static inline u16 avr8_LPM3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0101, ~0x1f0);
}

static inline u16 avr8_LPM2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0100, ~0x1f0);
}

static inline u16 avr8_LDz3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0010, ~0x1f0);
}

static inline u16 avr8_LDz2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0001, ~0x1f0);
}

#if defined(AVRrc)
static inline u16 avr8_LDS(addr_t pc)
{
    return ISA16(pc, 1010, 0000, 0000, 0000, 0xf800);
}
#else /* !AVRrc */
static inline u16 avr8_LDS(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0000, ~0x1f0);
}
#endif /* AVRrc */

static inline u16 avr8_STy1(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 1000, ~0x1f0);
}

static inline u16 avr8_STz1(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 0000, ~0x1f0);
}

static inline u16 avr8_LDy1(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 1000, ~0x1f0);
}

static inline u16 avr8_LDz1(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 0000, ~0x1f0);
}

static inline u16 avr8_ANDI(addr_t pc)
{
    return ISA16(pc, 0111, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr8_CBR(addr_t pc)
{
    return ISA16(pc, 0111, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr8_SBR(addr_t pc)
{
    return ISA16(pc, 0110, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr8_ORI(addr_t pc)
{
    return ISA16(pc, 0110, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr8_SUBI(addr_t pc)
{
    return ISA16(pc, 0101, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr8_SBCI(addr_t pc)
{
    return ISA16(pc, 0100, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr8_CPI(addr_t pc)
{
    return ISA16(pc, 0011, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr8_MOV(addr_t pc)
{
    return ISA16(pc, 0010, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_OR(addr_t pc)
{
    return ISA16(pc, 0010, 1000, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_CLR(addr_t pc)
{
    return ISA16(pc, 0010, 0100, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_EOR(addr_t pc)
{
    return ISA16(pc, 0010, 0100, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_TST(addr_t pc)
{
    return ISA16(pc, 0010, 0000, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_AND(addr_t pc)
{
    return ISA16(pc, 0010, 0000, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_ROL(addr_t pc)
{
    return ISA16(pc, 0001, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_ADC(addr_t pc)
{
    return ISA16(pc, 0001, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_SUB(addr_t pc)
{
    return ISA16(pc, 0001, 1000, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_CP(addr_t pc)
{
    return ISA16(pc, 0001, 0100, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_CPSE(addr_t pc)
{
    return ISA16(pc, 0001, 0000, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_LSL(addr_t pc)
{
    return ISA16(pc, 0000, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_ADD(addr_t pc)
{
    return ISA16(pc, 0000, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_SBC(addr_t pc)
{
    return ISA16(pc, 0000, 1000, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_CPC(addr_t pc)
{
    return ISA16(pc, 0000, 0100, 0000, 0000, ~0x3ff);
}

static inline u16 avr8_FMULSU(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 1000, 1000, ~0x33);
}

static inline u16 avr8_FMULS(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 1000, 0000, ~0x33);
}

static inline u16 avr8_FMUL(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 0000, 1000, ~0x33);
}

static inline u16 avr8_MULSU(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 0000, 0000, ~0x33);
}

static inline u16 avr8_MULS(addr_t pc)
{
    return ISA16(pc, 0000, 0010, 0000, 0000, ~0xff);
}

static inline u16 avr8_MOVW(addr_t pc)
{
    return ISA16(pc, 0000, 0001, 0000, 0000, ~0xff);
}

XAR_END_DECLS

#endif /* __AVR8_IMPL_H__ */
