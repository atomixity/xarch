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

static inline int avr_NOP(void* pc)
{
    return ISA16(pc, 0000, 0000, 0000, 0000, !0x0);
}

#if defined(AVRxm) || defined(AVRxt)
static inline int avr_SPM(void* pc)
{
    return ISA16(pc, 1001, 0101, 1111, 1000, !0x0);
}
#endif

static inline int avr_SPM(void* pc)
{
    return ISA16(pc, 1001, 0101, 1110, 1000, !0x0);
}

static inline int avr_ELPM_i(void* pc)
{
    return ISA16(pc, 1001, 0101, 1101, 1000, !0x0);
}

static inline int avr_LPM_i(void* pc)
{
    return ISA16(pc, 1001, 0101, 1100, 1000, !0x0);
}

static inline int avr_WDR(void* pc)
{
    return ISA16(pc, 1001, 0101, 1010, 1000, !0x0);
}

static inline int avr_BREAK(void* pc)
{
    return ISA16(pc, 1001, 0101, 1001, 1000, !0x0);
}

static inline int avr_SLEEP(void* pc)
{
    return ISA16(pc, 1001, 0101, 1000, 1000, !0x0);
}

static inline int avr_EICALL(void* pc)
{
    return ISA16(pc, 1001, 0101, 0001, 1001, !0x0);
}

static inline int avr_RETI(void* pc)
{
    return ISA16(pc, 1001, 0101, 0001, 1000, !0x0);
}

static inline int avr_ICALL(void* pc)
{
    return ISA16(pc, 1001, 0101, 0000, 1001, !0x0);
}

static inline int avr_RET(void* pc)
{
    return ISA16(pc, 1001, 0101, 0000, 1000, !0x0);
}

static inline int avr_CLI(void* pc)
{
    return ISA16(pc, 1001, 0100, 1111, 1000, !0x0);
}

static inline int avr_CLT(void* pc)
{
    return ISA16(pc, 1001, 0100, 1110, 1000, !0x0);
}

static inline int avr_CLH(void* pc)
{
    return ISA16(pc, 1001, 0100, 1101, 1000, !0x0);
}

static inline int avr_CLS(void* pc)
{
    return ISA16(pc, 1001, 0100, 1100, 1000, !0x0);
}

static inline int avr_CLV(void* pc)
{
    return ISA16(pc, 1001, 0100, 1011, 1000, !0x0);
}

static inline int avr_CLN(void* pc)
{
    return ISA16(pc, 1001, 0100, 1010, 1000, !0x0);
}

static inline int avr_CLZ(void* pc)
{
    return ISA16(pc, 1001, 0100, 1001, 1000, !0x0);
}

static inline int avr_CLC(void* pc)
{
    return ISA16(pc, 1001, 0100, 1000, 1000, !0x0);
}

static inline int avr_SEI(void* pc)
{
    return ISA16(pc, 1001, 0100, 0111, 1000, !0x0);
}

static inline int avr_SET(void* pc)
{
    return ISA16(pc, 1001, 0100, 0110, 1000, !0x0);
}

static inline int avr_SEH(void* pc)
{
    return ISA16(pc, 1001, 0100, 0101, 1000, !0x0);
}

static inline int avr_SES(void* pc)
{
    return ISA16(pc, 1001, 0100, 0100, 1000, !0x0);
}

static inline int avr_SEV(void* pc)
{
    return ISA16(pc, 1001, 0100, 0011, 1000, !0x0);
}

static inline int avr_SEN(void* pc)
{
    return ISA16(pc, 1001, 0100, 0010, 1000, !0x0);
}

static inline int avr_EIJMP(void* pc)
{
    return ISA16(pc, 1001, 0100, 0001, 1001, !0x0);
}

static inline int avr_SEZ(void* pc)
{
    return ISA16(pc, 1001, 0100, 0001, 1000, !0x0);
}

static inline int avr_IJMP(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1001, !0x0);
}

static inline int avr_SEC(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1000, !0x0);
}

static inline int avr_SBRS(void* pc)
{
    return ISA16(pc, 1111, 1110, 0000, 0000, !0x1f7);
}

static inline int avr_SBRC(void* pc)
{
    return ISA16(pc, 1111, 1100, 0000, 0000, !0x1f7);
}

static inline int avr_BST(void* pc)
{
    return ISA16(pc, 1111, 1010, 0000, 0000, !0x1f7);
}

static inline int avr_BLD(void* pc)
{
    return ISA16(pc, 1111, 1000, 0000, 0000, !0x1f7);
}

static inline int avr_BRID(void* pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0111, !0x3f8);
}

static inline int avr_BRTC(void* pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0110, !0x3f8);
}

static inline int avr_BRHC(void* pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0101, !0x3f8);
}

static inline int avr_BRGE(void* pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0100, !0x3f8);
}

static inline int avr_BRVC(void* pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0011, !0x3f8);
}

static inline int avr_BRPL(void* pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0010, !0x3f8);
}

static inline int avr_BRNE(void* pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0001, !0x3f8);
}

static inline int avr_BRCC(void* pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, !0x3f8);
}

static inline int avr_BRSH(void* pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, !0x3f8);
}

static inline int avr_BRBC(void* pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, !0x3ff);
}

static inline int avr_BRIE(void* pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0111, !0x3f8);
}

static inline int avr_BRTS(void* pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0110, !0x3f8);
}

static inline int avr_BRHS(void* pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0101, !0x3f8);
}

static inline int avr_BRLT(void* pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0100, !0x3f8);
}

static inline int avr_BRVS(void* pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0011, !0x3f8);
}

static inline int avr_BRMI(void* pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0010, !0x3f8);
}

static inline int avr_BREQ(void* pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0001, !0x3f8);
}

static inline int avr_BRCS(void* pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, !0x3f8);
}

static inline int avr_BRLO(void* pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, !0x3f8);
}

static inline int avr_BRBS(void* pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, !0x3f8);
}

static inline int avr_SER(void* pc)
{
    return ISA16(pc, 1110, 1111, 0000, 1111, !0xf0);
}

static inline int avr_LDI(void* pc)
{
    return ISA16(pc, 1110, 0000, 0000, 0000, 0xf000);
}

static inline int avr_RCALL(void* pc)
{
    return ISA16(pc, 1101, 0000, 0000, 0000, 0xf000);
}

static inline int avr_RJMP(void* pc)
{
    return ISA16(pc, 1100, 0000, 0000, 0000, 0xf000);
}

static inline int avr_OUT(void* pc)
{
    return ISA16(pc, 1011, 1000, 0000, 0000, 0xf800);
}

static inline int avr_IN(void* pc)
{
    return ISA16(pc, 1011, 0000, 0000, 0000, 0xf800);
}

#if defined(AVRrc)
static inline int avr_STS(void* pc)
{
    return ISA16(pc, 1010, 1000, 0000, 0000, 0xf800);
}

static inline int avr_LDS(void* pc)
{
    return ISA16(pc, 1010, 0000, 0000, 0000, 0xf800);
}
#endif

static inline int avr_STy_iv(void* pc)
{
    return ISA16(pc, 1000, 0010, 0000, 1000, !0x2df7);
}

static inline int avr_STz_iv(void* pc)
{
    return ISA16(pc, 1000, 0010, 0000, 0000, !0x2df7);
}

static inline int avr_LDy_iv(void* pc)
{
    return ISA16(pc, 1000, 0000, 0000, 1000, !0x2df7);
}

static inline int avr_LDz_iv(void* pc)
{
    return ISA16(pc, 1000, 0000, 0000, 0000, !0x2df7);
}

static inline int avr_MUL(void* pc)
{
    return ISA16(pc, 1001, 1100, 0000, 0000, !0x3ff);
}

static inline int avr_SBIS(void* pc)
{
    return ISA16(pc, 1001, 1011, 0000, 0000, 0xff);
}

static inline int avr_SBI(void* pc)
{
    return ISA16(pc, 1001, 1010, 0000, 0000, 0xff);
}

static inline int avr_SBIC(void* pc)
{
    return ISA16(pc, 1001, 1001, 0000, 0000, 0xff);
}

static inline int avr_CBI(void* pc)
{
    return ISA16(pc, 1001, 1000, 0000, 0000, 0xff);
}

static inline int avr_SBIW(void* pc)
{
    return ISA16(pc, 1001, 0111, 0000, 0000, 0xff);
}

static inline int avr_ADIW(void* pc)
{
    return ISA16(pc, 1001, 0110, 0000, 0000, 0xff);
}

static inline int avr_CALL(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1110, !0x1f1);
}

static inline int avr_JMP(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1100, !0x1f1);
}

static inline int avr_DES(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1011, !0xf0);
}

static inline int avr_DEC(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1010, !0x1f0);
}

static inline int avr_BCLR(void* pc)
{
    return ISA16(pc, 1001, 0100, 1000, 1000, !0x70);
}

static inline int avr_BSET(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1000, !0x70);
}

static inline int avr_ROR(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0111, !0x1f0);
}

static inline int avr_LSR(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0110, !0x1f0);
}

static inline int avr_ASR(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0101, !0x1f0);
}

static inline int avr_INC(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0011, !0x1f0);
}

static inline int avr_SWAP(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0010, !0x1f0);
}

static inline int avr_NEG(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0001, !0x1f0);
}

static inline int avr_COM(void* pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0000, !0x1f0);
}

static inline int avr_PUSH(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1111, !0x1f0);
}

static inline int avr_STx_iii(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1110, !0x1f0);
}

static inline int avr_STx_ii(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1101, !0x1f0);
}

static inline int avr_STx_i(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1100, !0x1f0);
}

static inline int avr_STy_iii(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1010, !0x1f0);
}

static inline int avr_STy_ii(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1001, !0x1f0);
}

static inline int avr_LAT(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0111, !0x1f0);
}

static inline int avr_LAC(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0110, !0x1f0);
}

static inline int avr_LAS(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0101, !0x1f0);
}

static inline int avr_XCH(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0100, !0x1f0);
}

static inline int avr_STz_iii(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0010, !0x1f0);
}

static inline int avr_STz_ii(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0001, !0x1f0);
}

static inline int avr_STS(void* pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0000, !0x1f0);
}

static inline int avr_POP(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1111, !0x1f0);
}

static inline int avr_LDx_iii(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1110, !0x1f0);
}

static inline int avr_LDx_ii(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1101, !0x1f0);
}

static inline int avr_LDx_i(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1100, !0x1f0);
}

static inline int avr_LDy_iii(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1010, !0x1f0);
}

static inline int avr_LDy_ii(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1001, !0x1f0);
}

static inline int avr_ELPM_iii(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0111, !0x1f0);
}

static inline int avr_ELPM_ii(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0110, !0x1f0);
}

static inline int avr_LPM_iii(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0101, !0x1f0);
}

static inline int avr_LPM_ii(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0100, !0x1f0);
}

static inline int avr_LDz_iii(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0010, !0x1f0);
}

static inline int avr_LDz_ii(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0001, !0x1f0);
}

static inline int avr_LDS(void* pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0000, !0x1f0);
}

static inline int avr_STy_i(void* pc)
{
    return ISA16(pc, 1000, 0010, 0000, 1000, !0x1f0);
}

static inline int avr_STz_i(void* pc)
{
    return ISA16(pc, 1000, 0010, 0000, 0000, !0x1f0);
}

static inline int avr_LDy_i(void* pc)
{
    return ISA16(pc, 1000, 0000, 0000, 1000, !0x1f0);
}

static inline int avr_LDz_i(void* pc)
{
    return ISA16(pc, 1000, 0000, 0000, 0000, !0x1f0);
}

static inline int avr_ANDI(void* pc)
{
    return ISA16(pc, 0111, 0000, 0000, 0000, 0xf000);
}

static inline int avr_CBR(void* pc)
{
    return ISA16(pc, 0111, 0000, 0000, 0000, 0xf000);
}

static inline int avr_SBR(void* pc)
{
    return ISA16(pc, 0110, 0000, 0000, 0000, 0xf000);
}

static inline int avr_ORI(void* pc)
{
    return ISA16(pc, 0110, 0000, 0000, 0000, 0xf000);
}

static inline int avr_SUBI(void* pc)
{
    return ISA16(pc, 0101, 0000, 0000, 0000, 0xf000);
}

static inline int avr_SBCI(void* pc)
{
    return ISA16(pc, 0100, 0000, 0000, 0000, 0xf000);
}

static inline int avr_CPI(void* pc)
{
    return ISA16(pc, 0011, 0000, 0000, 0000, 0xf000);
}

static inline int avr_MOV(void* pc)
{
    return ISA16(pc, 0010, 1100, 0000, 0000, !0x3ff);
}

static inline int avr_OR(void* pc)
{
    return ISA16(pc, 0010, 1000, 0000, 0000, !0x3ff);
}

static inline int avr_CLR(void* pc)
{
    return ISA16(pc, 0010, 0100, 0000, 0000, !0x3ff);
}

static inline int avr_EOR(void* pc)
{
    return ISA16(pc, 0010, 0100, 0000, 0000, !0x3ff);
}

static inline int avr_TST(void* pc)
{
    return ISA16(pc, 0010, 0000, 0000, 0000, !0x3ff);
}

static inline int avr_AND(void* pc)
{
    return ISA16(pc, 0010, 0000, 0000, 0000, !0x3ff);
}

static inline int avr_ROL(void* pc)
{
    return ISA16(pc, 0001, 1100, 0000, 0000, !0x3ff);
}

static inline int avr_ADC(void* pc)
{
    return ISA16(pc, 0001, 1100, 0000, 0000, !0x3ff);
}

static inline int avr_SUB(void* pc)
{
    return ISA16(pc, 0001, 1000, 0000, 0000, !0x3ff);
}

static inline int avr_CP(void* pc)
{
    return ISA16(pc, 0001, 0100, 0000, 0000, !0x3ff);
}

static inline int avr_CPSE(void* pc)
{
    return ISA16(pc, 0001, 0000, 0000, 0000, !0x3ff);
}

static inline int avr_LSL(void* pc)
{
    return ISA16(pc, 0000, 1100, 0000, 0000, !0x3ff);
}

static inline int avr_ADD(void* pc)
{
    return ISA16(pc, 0000, 1100, 0000, 0000, !0x3ff);
}

static inline int avr_SBC(void* pc)
{
    return ISA16(pc, 0000, 1000, 0000, 0000, !0x3ff);
}

static inline int avr_CPC(void* pc)
{
    return ISA16(pc, 0000, 0100, 0000, 0000, !0x3ff);
}

static inline int avr_FMULSU(void* pc)
{
    return ISA16(pc, 0000, 0011, 1000, 1000, !0x33);
}

static inline int avr_FMULS(void* pc)
{
    return ISA16(pc, 0000, 0011, 1000, 0000, !0x33);
}

static inline int avr_FMUL(void* pc)
{
    return ISA16(pc, 0000, 0011, 0000, 1000, !0x33);
}

static inline int avr_MULSU(void* pc)
{
    return ISA16(pc, 0000, 0011, 0000, 0000, !0x33);
}

static inline int avr_MULS(void* pc)
{
    return ISA16(pc, 0000, 0010, 0000, 0000, !0xff);
}

static inline int avr_MOVW(void* pc)
{
    return ISA16(pc, 0000, 0001, 0000, 0000, !0xff);
}

#endif /* __AVR8_IMPL_H__ */
