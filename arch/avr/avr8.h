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

static inline u16 avr_NOP(addr_t pc)
{
    return ISA16(pc, 0000, 0000, 0000, 0000, ~0x0);
}

#if defined(AVRxm) || defined(AVRxt)
static inline u16 avr_SPM(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1111, 1000, ~0x0);
}
#endif

static inline u16 avr_SPM(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1110, 1000, ~0x0);
}

static inline u16 avr_ELPM1(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1101, 1000, ~0x0);
}

static inline u16 avr_LPM1(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1100, 1000, ~0x0);
}

static inline u16 avr_WDR(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1010, 1000, ~0x0);
}

static inline u16 avr_BREAK(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1001, 1000, ~0x0);
}

static inline u16 avr_SLEEP(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1000, 1000, ~0x0);
}

static inline u16 avr_EICALL(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0001, 1001, ~0x0);
}

static inline u16 avr_RETI(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0001, 1000, ~0x0);
}

static inline u16 avr_ICALL(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0000, 1001, ~0x0);
}

static inline u16 avr_RET(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0000, 1000, ~0x0);
}

static inline u16 avr_CLI(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1111, 1000, ~0x0);
}

static inline u16 avr_CLT(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1110, 1000, ~0x0);
}

static inline u16 avr_CLH(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1101, 1000, ~0x0);
}

static inline u16 avr_CLS(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1100, 1000, ~0x0);
}

static inline u16 avr_CLV(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1011, 1000, ~0x0);
}

static inline u16 avr_CLN(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1010, 1000, ~0x0);
}

static inline u16 avr_CLZ(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1001, 1000, ~0x0);
}

static inline u16 avr_CLC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1000, 1000, ~0x0);
}

static inline u16 avr_SEI(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0111, 1000, ~0x0);
}

static inline u16 avr_SET(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0110, 1000, ~0x0);
}

static inline u16 avr_SEH(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0101, 1000, ~0x0);
}

static inline u16 avr_SES(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0100, 1000, ~0x0);
}

static inline u16 avr_SEV(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0011, 1000, ~0x0);
}

static inline u16 avr_SEN(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0010, 1000, ~0x0);
}

static inline u16 avr_EIJMP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0001, 1001, ~0x0);
}

static inline u16 avr_SEZ(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0001, 1000, ~0x0);
}

static inline u16 avr_IJMP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1001, ~0x0);
}

static inline u16 avr_SEC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1000, ~0x0);
}

static inline u16 avr_SBRS(addr_t pc)
{
    return ISA16(pc, 1111, 1110, 0000, 0000, ~0x1f7);
}

static inline u16 avr_SBRC(addr_t pc)
{
    return ISA16(pc, 1111, 1100, 0000, 0000, ~0x1f7);
}

static inline u16 avr_BST(addr_t pc)
{
    return ISA16(pc, 1111, 1010, 0000, 0000, ~0x1f7);
}

static inline u16 avr_BLD(addr_t pc)
{
    return ISA16(pc, 1111, 1000, 0000, 0000, ~0x1f7);
}

static inline u16 avr_BRID(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0111, ~0x3f8);
}

static inline u16 avr_BRTC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0110, ~0x3f8);
}

static inline u16 avr_BRHC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0101, ~0x3f8);
}

static inline u16 avr_BRGE(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0100, ~0x3f8);
}

static inline u16 avr_BRVC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0011, ~0x3f8);
}

static inline u16 avr_BRPL(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0010, ~0x3f8);
}

static inline u16 avr_BRNE(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0001, ~0x3f8);
}

static inline u16 avr_BRCC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, ~0x3f8);
}

static inline u16 avr_BRSH(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, ~0x3f8);
}

static inline u16 avr_BRBC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, ~0x3ff);
}

static inline u16 avr_BRIE(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0111, ~0x3f8);
}

static inline u16 avr_BRTS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0110, ~0x3f8);
}

static inline u16 avr_BRHS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0101, ~0x3f8);
}

static inline u16 avr_BRLT(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0100, ~0x3f8);
}

static inline u16 avr_BRVS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0011, ~0x3f8);
}

static inline u16 avr_BRMI(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0010, ~0x3f8);
}

static inline u16 avr_BREQ(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0001, ~0x3f8);
}

static inline u16 avr_BRCS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, ~0x3f8);
}

static inline u16 avr_BRLO(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, ~0x3f8);
}

static inline u16 avr_BRBS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, ~0x3f8);
}

static inline u16 avr_SER(addr_t pc)
{
    return ISA16(pc, 1110, 1111, 0000, 1111, ~0xf0);
}

static inline u16 avr_LDI(addr_t pc)
{
    return ISA16(pc, 1110, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr_RCALL(addr_t pc)
{
    return ISA16(pc, 1101, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr_RJMP(addr_t pc)
{
    return ISA16(pc, 1100, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr_OUT(addr_t pc)
{
    return ISA16(pc, 1011, 1000, 0000, 0000, 0xf800);
}

static inline u16 avr_IN(addr_t pc)
{
    return ISA16(pc, 1011, 0000, 0000, 0000, 0xf800);
}

#if defined(AVRrc)
static inline u16 avr_STS(addr_t pc)
{
    return ISA16(pc, 1010, 1000, 0000, 0000, 0xf800);
}

static inline u16 avr_LDS(addr_t pc)
{
    return ISA16(pc, 1010, 0000, 0000, 0000, 0xf800);
}
#endif

static inline u16 avr_STy4(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 1000, ~0x2df7);
}

static inline u16 avr_STz4(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 0000, ~0x2df7);
}

static inline u16 avr_LDy4(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 1000, ~0x2df7);
}

static inline u16 avr_LDz4(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 0000, ~0x2df7);
}

static inline u16 avr_MUL(addr_t pc)
{
    return ISA16(pc, 1001, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr_SBIS(addr_t pc)
{
    return ISA16(pc, 1001, 1011, 0000, 0000, 0xff);
}

static inline u16 avr_SBI(addr_t pc)
{
    return ISA16(pc, 1001, 1010, 0000, 0000, 0xff);
}

static inline u16 avr_SBIC(addr_t pc)
{
    return ISA16(pc, 1001, 1001, 0000, 0000, 0xff);
}

static inline u16 avr_CBI(addr_t pc)
{
    return ISA16(pc, 1001, 1000, 0000, 0000, 0xff);
}

static inline u16 avr_SBIW(addr_t pc)
{
    return ISA16(pc, 1001, 0111, 0000, 0000, 0xff);
}

static inline u16 avr_ADIW(addr_t pc)
{
    return ISA16(pc, 1001, 0110, 0000, 0000, 0xff);
}

static inline u16 avr_CALL(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1110, ~0x1f1);
}

static inline u16 avr_JMP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1100, ~0x1f1);
}

static inline u16 avr_DES(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1011, ~0xf0);
}

static inline u16 avr_DEC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1010, ~0x1f0);
}

static inline u16 avr_BCLR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1000, 1000, ~0x70);
}

static inline u16 avr_BSET(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1000, ~0x70);
}

static inline u16 avr_ROR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0111, ~0x1f0);
}

static inline u16 avr_LSR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0110, ~0x1f0);
}

static inline u16 avr_ASR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0101, ~0x1f0);
}

static inline u16 avr_INC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0011, ~0x1f0);
}

static inline u16 avr_SWAP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0010, ~0x1f0);
}

static inline u16 avr_NEG(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0001, ~0x1f0);
}

static inline u16 avr_COM(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0000, ~0x1f0);
}

static inline u16 avr_PUSH(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1111, ~0x1f0);
}

static inline u16 avr_STx3(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1110, ~0x1f0);
}

static inline u16 avr_STx2(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1101, ~0x1f0);
}

static inline u16 avr_STx1(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1100, ~0x1f0);
}

static inline u16 avr_STy3(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1010, ~0x1f0);
}

static inline u16 avr_STy2(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1001, ~0x1f0);
}

static inline u16 avr_LAT(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0111, ~0x1f0);
}

static inline u16 avr_LAC(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0110, ~0x1f0);
}

static inline u16 avr_LAS(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0101, ~0x1f0);
}

static inline u16 avr_XCH(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0100, ~0x1f0);
}

static inline u16 avr_STz3(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0010, ~0x1f0);
}

static inline u16 avr_STz2(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0001, ~0x1f0);
}

static inline u16 avr_STS(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0000, ~0x1f0);
}

static inline u16 avr_POP(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1111, ~0x1f0);
}

static inline u16 avr_LDx3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1110, ~0x1f0);
}

static inline u16 avr_LDx2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1101, ~0x1f0);
}

static inline u16 avr_LDx1(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1100, ~0x1f0);
}

static inline u16 avr_LDy3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1010, ~0x1f0);
}

static inline u16 avr_LDy2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1001, ~0x1f0);
}

static inline u16 avr_ELPM3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0111, ~0x1f0);
}

static inline u16 avr_ELPM2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0110, ~0x1f0);
}

static inline u16 avr_LPM3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0101, ~0x1f0);
}

static inline u16 avr_LPM2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0100, ~0x1f0);
}

static inline u16 avr_LDz3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0010, ~0x1f0);
}

static inline u16 avr_LDz2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0001, ~0x1f0);
}

static inline u16 avr_LDS(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0000, ~0x1f0);
}

static inline u16 avr_STy1(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 1000, ~0x1f0);
}

static inline u16 avr_STz1(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 0000, ~0x1f0);
}

static inline u16 avr_LDy1(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 1000, ~0x1f0);
}

static inline u16 avr_LDz1(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 0000, ~0x1f0);
}

static inline u16 avr_ANDI(addr_t pc)
{
    return ISA16(pc, 0111, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr_CBR(addr_t pc)
{
    return ISA16(pc, 0111, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr_SBR(addr_t pc)
{
    return ISA16(pc, 0110, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr_ORI(addr_t pc)
{
    return ISA16(pc, 0110, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr_SUBI(addr_t pc)
{
    return ISA16(pc, 0101, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr_SBCI(addr_t pc)
{
    return ISA16(pc, 0100, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr_CPI(addr_t pc)
{
    return ISA16(pc, 0011, 0000, 0000, 0000, 0xf000);
}

static inline u16 avr_MOV(addr_t pc)
{
    return ISA16(pc, 0010, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr_OR(addr_t pc)
{
    return ISA16(pc, 0010, 1000, 0000, 0000, ~0x3ff);
}

static inline u16 avr_CLR(addr_t pc)
{
    return ISA16(pc, 0010, 0100, 0000, 0000, ~0x3ff);
}

static inline u16 avr_EOR(addr_t pc)
{
    return ISA16(pc, 0010, 0100, 0000, 0000, ~0x3ff);
}

static inline u16 avr_TST(addr_t pc)
{
    return ISA16(pc, 0010, 0000, 0000, 0000, ~0x3ff);
}

static inline u16 avr_AND(addr_t pc)
{
    return ISA16(pc, 0010, 0000, 0000, 0000, ~0x3ff);
}

static inline u16 avr_ROL(addr_t pc)
{
    return ISA16(pc, 0001, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr_ADC(addr_t pc)
{
    return ISA16(pc, 0001, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr_SUB(addr_t pc)
{
    return ISA16(pc, 0001, 1000, 0000, 0000, ~0x3ff);
}

static inline u16 avr_CP(addr_t pc)
{
    return ISA16(pc, 0001, 0100, 0000, 0000, ~0x3ff);
}

static inline u16 avr_CPSE(addr_t pc)
{
    return ISA16(pc, 0001, 0000, 0000, 0000, ~0x3ff);
}

static inline u16 avr_LSL(addr_t pc)
{
    return ISA16(pc, 0000, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr_ADD(addr_t pc)
{
    return ISA16(pc, 0000, 1100, 0000, 0000, ~0x3ff);
}

static inline u16 avr_SBC(addr_t pc)
{
    return ISA16(pc, 0000, 1000, 0000, 0000, ~0x3ff);
}

static inline u16 avr_CPC(addr_t pc)
{
    return ISA16(pc, 0000, 0100, 0000, 0000, ~0x3ff);
}

static inline u16 avr_FMULSU(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 1000, 1000, ~0x33);
}

static inline u16 avr_FMULS(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 1000, 0000, ~0x33);
}

static inline u16 avr_FMUL(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 0000, 1000, ~0x33);
}

static inline u16 avr_MULSU(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 0000, 0000, ~0x33);
}

static inline u16 avr_MULS(addr_t pc)
{
    return ISA16(pc, 0000, 0010, 0000, 0000, ~0xff);
}

static inline u16 avr_MOVW(addr_t pc)
{
    return ISA16(pc, 0000, 0001, 0000, 0000, ~0xff);
}

XAR_END_DECLS

#endif /* __AVR8_IMPL_H__ */
