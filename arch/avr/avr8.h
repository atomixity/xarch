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

/**
 * @brief NOP opcode.
 *
 * This function checks out 16-bit NOP opcode.
 * It's made up of (0000'0000'0000'0000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_NOP(addr_t pc)
{
    return ISA16(pc, 0000, 0000, 0000, 0000, ~0x0);
}

#if defined(AVRxm) || defined(AVRxt)
/**
 * @brief SPM (v-viiii) opcode.
 *
 * This function checks out 16-bit SPM opcode.
 * It's made up of (1001'0101'1111'1000) in binary form.
 *
 * Note: only AVRxm and AVRxt.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_SPM5(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1111, 1000, ~0x0);
}
#endif

/**
 * @brief SPM opcode.
 *
 * This function checks out 16-bit SPM opcode.
 * It's made up of (1001'0101'1110'1000) in binary form.
 *
 * Note: It takes from (i-iv) on AVRxm and AVRxt.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_SPM(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1110, 1000, ~0x0);
}

/**
 * @brief ELPM (i) opcode.
 *
 * This function checks out 16-bit ELPM (i) opcode.
 * It's made up of (1001'0101'1101'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_ELPM1(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1101, 1000, ~0x0);
}

/**
 * @brief LPM (i) opcode.
 *
 * This function checks out 16-bit LPM (i) opcode.
 * It's made up of (1001'0101'1100'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_LPM1(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1100, 1000, ~0x0);
}

/**
 * @brief WDR opcode.
 *
 * This function checks out 16-bit WDR opcode.
 * It's made up of (1001'0101'1010'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_WDR(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1010, 1000, ~0x0);
}

/**
 * @brief BREAK opcode.
 *
 * This function checks out 16-bit BREAK opcode.
 * It's made up of (1001'0101'1001'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_BREAK(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1001, 1000, ~0x0);
}

/**
 * @brief SLEEP opcode.
 *
 * This function checks out 16-bit SLEEP opcode.
 * It's made up of (1001'0101'1000'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_SLEEP(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 1000, 1000, ~0x0);
}

/**
 * @brief EICALL opcode.
 *
 * This function checks out 16-bit EICALL opcode.
 * It's made up of (1001'0101'0001'1001) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_EICALL(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0001, 1001, ~0x0);
}

/**
 * @brief RETI opcode.
 *
 * This function checks out 16-bit RETI opcode.
 * It's made up of (1001'0101'0001'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_RETI(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0001, 1000, ~0x0);
}

/**
 * @brief ICALL opcode.
 *
 * This function checks out 16-bit ICALL opcode.
 * It's made up of (1001'0101'0000'1001) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_ICALL(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0000, 1001, ~0x0);
}

/**
 * @brief RET opcode.
 *
 * This function checks out 16-bit RET opcode.
 * It's made up of (1001'0101'0000'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_RET(addr_t pc)
{
    return ISA16(pc, 1001, 0101, 0000, 1000, ~0x0);
}

/**
 * @brief CLI opcode.
 *
 * This function checks out 16-bit CLI opcode.
 * It's made up of (1001'0100'1111'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_CLI(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1111, 1000, ~0x0);
}

/**
 * @brief CLT opcode.
 *
 * This function checks out 16-bit CLT opcode.
 * It's made up of (1001'0100'1110'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_CLT(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1110, 1000, ~0x0);
}

/**
 * @brief CLH opcode.
 *
 * This function checks out 16-bit CLH opcode.
 * It's made up of (1001'0100'1101'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_CLH(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1101, 1000, ~0x0);
}

/**
 * @brief CLS opcode.
 *
 * This function checks out 16-bit CLS opcode.
 * It's made up of (1001'0100'1100'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_CLS(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1100, 1000, ~0x0);
}

/**
 * @brief CLV opcode.
 *
 * This function checks out 16-bit CLV opcode.
 * It's made up of (1001'0100'1011'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_CLV(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1011, 1000, ~0x0);
}

/**
 * @brief CLN opcode.
 *
 * This function checks out 16-bit CLN opcode.
 * It's made up of (1001'0100'1010'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_CLN(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1010, 1000, ~0x0);
}

/**
 * @brief CLZ opcode.
 *
 * This function checks out 16-bit CLZ opcode.
 * It's made up of (1001'0100'1001'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_CLZ(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1001, 1000, ~0x0);
}

/**
 * @brief CLC opcode.
 *
 * This function checks out 16-bit CLC opcode.
 * It's made up of (1001'0100'1000'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_CLC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1000, 1000, ~0x0);
}

/**
 * @brief SEI opcode.
 *
 * This function checks out 16-bit SEI opcode.
 * It's made up of (1001'0100'0111'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_SEI(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0111, 1000, ~0x0);
}

/**
 * @brief SET opcode.
 *
 * This function checks out 16-bit SET opcode.
 * It's made up of (1001'0100'0110'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_SET(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0110, 1000, ~0x0);
}

/**
 * @brief SEH opcode.
 *
 * This function checks out 16-bit SEH opcode.
 * It's made up of (1001'0100'0101'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_SEH(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0101, 1000, ~0x0);
}

/**
 * @brief SES opcode.
 *
 * This function checks out 16-bit SES opcode.
 * It's made up of (1001'0100'0100'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_SES(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0100, 1000, ~0x0);
}

/**
 * @brief SEV opcode.
 *
 * This function checks out 16-bit SEV opcode.
 * It's made up of (1001'0100'0011'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_SEV(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0011, 1000, ~0x0);
}

/**
 * @brief SEN opcode.
 *
 * This function checks out 16-bit SEN opcode.
 * It's made up of (1001'0100'0010'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_SEN(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0010, 1000, ~0x0);
}

/**
 * @brief EIJMP opcode.
 *
 * This function checks out 16-bit EIJMP opcode.
 * It's made up of (1001'0100'0001'1001) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_EIJMP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0001, 1001, ~0x0);
}

/**
 * @brief SEZ opcode.
 *
 * This function checks out 16-bit SEZ opcode.
 * It's made up of (1001'0100'0001'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_SEZ(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0001, 1000, ~0x0);
}

/**
 * @brief IJMP opcode.
 *
 * This function checks out 16-bit IJMP opcode.
 * It's made up of (1001'0100'0000'1001) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_IJMP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1001, ~0x0);
}

/**
 * @brief SEC opcode.
 *
 * This function checks out 16-bit SEC opcode.
 * It's made up of (1001'0100'0000'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xffff) in u16.
 */
static inline u16 avr8_SEC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1000, ~0x0);
}

/**
 * @brief SBRS opcode.
 *
 * This function checks out 16-bit SBRS opcode.
 * It's made up of (1111'111r'rrrr'0bbb) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f7) in u16.
 */
static inline u16 avr8_SBRS(addr_t pc)
{
    return ISA16(pc, 1111, 1110, 0000, 0000, ~0x1f7);
}

/**
 * @brief SBRC opcode.
 *
 * This function checks out 16-bit SBRC opcode.
 * It's made up of (1111'110r'rrrr'0bbb) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f7) in u16.
 */
static inline u16 avr8_SBRC(addr_t pc)
{
    return ISA16(pc, 1111, 1100, 0000, 0000, ~0x1f7);
}

/**
 * @brief BST opcode.
 *
 * This function checks out 16-bit BST opcode.
 * It's made up of (1111'101d'dddd'0bbb) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f7) in u16.
 */
static inline u16 avr8_BST(addr_t pc)
{
    return ISA16(pc, 1111, 1010, 0000, 0000, ~0x1f7);
}

/**
 * @brief BLD opcode.
 *
 * This function checks out 16-bit BLD opcode.
 * It's made up of (1111'100d'dddd'0bbb) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f7) in u16.
 */
static inline u16 avr8_BLD(addr_t pc)
{
    return ISA16(pc, 1111, 1000, 0000, 0000, ~0x1f7);
}

/**
 * @brief BRID opcode.
 *
 * This function checks out 16-bit BRID opcode.
 * It's made up of (1111'01kk'kkkk'k111) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRID(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0111, ~0x3f8);
}

/**
 * @brief BRTC opcode.
 *
 * This function checks out 16-bit BRTC opcode.
 * It's made up of (1111'01kk'kkkk'k110) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRTC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0110, ~0x3f8);
}

/**
 * @brief BRHC opcode.
 *
 * This function checks out 16-bit BRHC opcode.
 * It's made up of (1111'01kk'kkkk'k101) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRHC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0101, ~0x3f8);
}

/**
 * @brief BRGE opcode.
 *
 * This function checks out 16-bit BRGE opcode.
 * It's made up of (1111'01kk'kkkk'k100) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRGE(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0100, ~0x3f8);
}

/**
 * @brief BRVC opcode.
 *
 * This function checks out 16-bit BRVC opcode.
 * It's made up of (1111'01kk'kkkk'k011) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRVC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0011, ~0x3f8);
}

/**
 * @brief BRPL opcode.
 *
 * This function checks out 16-bit BRPL opcode.
 * It's made up of (1111'01kk'kkkk'k010) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRPL(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0010, ~0x3f8);
}

/**
 * @brief BRNE opcode.
 *
 * This function checks out 16-bit BRNE opcode.
 * It's made up of (1111'01kk'kkkk'k001) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRNE(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0001, ~0x3f8);
}

/**
 * @brief BRCC opcode.
 *
 * This function checks out 16-bit BRCC opcode.
 * It's made up of (1111'01kk'kkkk'k000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRCC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, ~0x3f8);
}

/**
 * @brief BRSH opcode.
 *
 * This function checks out 16-bit BRSH opcode.
 * It's made up of (1111'01kk'kkkk'k000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRSH(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, ~0x3f8);
}

/**
 * @brief BRBC opcode.
 *
 * This function checks out 16-bit BRBC opcode.
 * It's made up of (1111'01kk'kkkk'ksss) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_BRBC(addr_t pc)
{
    return ISA16(pc, 1111, 0100, 0000, 0000, ~0x3ff);
}

/**
 * @brief BRIE opcode.
 *
 * This function checks out 16-bit BRIE opcode.
 * It's made up of (1111'00kk'kkkk'k111) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRIE(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0111, ~0x3f8);
}

/**
 * @brief BRTS opcode.
 *
 * This function checks out 16-bit BRTS opcode.
 * It's made up of (1111'00kk'kkkk'k110) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRTS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0110, ~0x3f8);
}

/**
 * @brief BRHS opcode.
 *
 * This function checks out 16-bit BRHS opcode.
 * It's made up of (1111'00kk'kkkk'k101) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRHS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0101, ~0x3f8);
}

/**
 * @brief BRLT opcode.
 *
 * This function checks out 16-bit BRLT opcode.
 * It's made up of (1111'00kk'kkkk'k100) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRLT(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0100, ~0x3f8);
}

/**
 * @brief BRVS opcode.
 *
 * This function checks out 16-bit BRVS opcode.
 * It's made up of (1111'00kk'kkkk'k011) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRVS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0011, ~0x3f8);
}

/**
 * @brief BRMI opcode.
 *
 * This function checks out 16-bit BRMI opcode.
 * It's made up of (1111'00kk'kkkk'k010) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRMI(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0010, ~0x3f8);
}

/**
 * @brief BREQ opcode.
 *
 * This function checks out 16-bit BREQ opcode.
 * It's made up of (1111'00kk'kkkk'k001) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BREQ(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0001, ~0x3f8);
}

/**
 * @brief BRCS opcode.
 *
 * This function checks out 16-bit BRCS opcode.
 * It's made up of (1111'00kk'kkkk'k000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRCS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, ~0x3f8);
}

/**
 * @brief BRLO opcode.
 *
 * This function checks out 16-bit BRLO opcode.
 * It's made up of (1111'00kk'kkkk'k000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRLO(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, ~0x3f8);
}

/**
 * @brief BRBS opcode.
 *
 * This function checks out 16-bit BRBS opcode.
 * It's made up of (1111'00kk'kkkk'ksss) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3f8) in u16.
 */
static inline u16 avr8_BRBS(addr_t pc)
{
    return ISA16(pc, 1111, 0000, 0000, 0000, ~0x3f8);
}

/**
 * @brief SER opcode.
 *
 * This function checks out 16-bit SER opcode.
 * It's made up of (1110'1111'dddd'1111) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xf0) in u16.
 */
static inline u16 avr8_SER(addr_t pc)
{
    return ISA16(pc, 1110, 1111, 0000, 1111, ~0xf0);
}

/**
 * @brief LDI opcode.
 *
 * This function checks out 16-bit LDI opcode.
 * It's made up of (1110'KKKK'dddd'KKKK) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xfff) in u16.
 */
static inline u16 avr8_LDI(addr_t pc)
{
    return ISA16(pc, 1110, 0000, 0000, 0000, 0xf000);
}

/**
 * @brief RCALL opcode.
 *
 * This function checks out 16-bit RCALL opcode.
 * It's made up of (1101'kkkk'kkkk'kkkk) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xfff) in u16.
 */
static inline u16 avr8_RCALL(addr_t pc)
{
    return ISA16(pc, 1101, 0000, 0000, 0000, 0xf000);
}

/**
 * @brief RJMP opcode.
 *
 * This function checks out 16-bit RJMP opcode.
 * It's made up of (1100'kkkk'kkkk'kkkk) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xfff) in u16.
 */
static inline u16 avr8_RJMP(addr_t pc)
{
    return ISA16(pc, 1100, 0000, 0000, 0000, 0xf000);
}

/**
 * @brief OUT opcode.
 *
 * This function checks out 16-bit OUT opcode.
 * It's made up of (1011'1AAr'rrrr'AAAA) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x7ff) in u16.
 */
static inline u16 avr8_OUT(addr_t pc)
{
    return ISA16(pc, 1011, 1000, 0000, 0000, 0xf800);
}

/**
 * @brief OUT opcode.
 *
 * This function checks out 16-bit OUT opcode.
 * It's made up of (1011'1AAr'rrrr'AAAA) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x7ff) in u16.
 */
static inline u16 avr8_IN(addr_t pc)
{
    return ISA16(pc, 1011, 0000, 0000, 0000, 0xf800);
}

/**
 * @brief ST(y) (iv) opcode.
 *
 * This function checks out 16-bit ST(y) (iv) opcode.
 * It's made up of (10q0'qq1r'rrrr'1qqq) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x2df7) in u16.
 */
static inline u16 avr8_STy4(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 1000, ~0x2df7);
}

/**
 * @brief ST(z) (iv) opcode.
 *
 * This function checks out 16-bit ST(z) (iv) opcode.
 * It's made up of (10q0'qq1r'rrrr'0qqq) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x2df7) in u16.
 */
static inline u16 avr8_STz4(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 0000, ~0x2df7);
}

/**
 * @brief LD(y) (iv) opcode.
 *
 * This function checks out 16-bit LD(y) (iv) opcode.
 * It's made up of (10q0'qq0d'dddd'1qqq) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x2df7) in u16.
 */
static inline u16 avr8_LDy4(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 1000, ~0x2df7);
}

/**
 * @brief LD(z) (iv) opcode.
 *
 * This function checks out 16-bit LD(z) (iv) opcode.
 * It's made up of (10q0'qq0d'dddd'0qqq) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x2df7) in u16.
 */
static inline u16 avr8_LDz4(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 0000, ~0x2df7);
}

/**
 * @brief MUL opcode.
 *
 * This function checks out 16-bit MUL opcode.
 * It's made up of (1001'11rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_MUL(addr_t pc)
{
    return ISA16(pc, 1001, 1100, 0000, 0000, ~0x3ff);
}

/**
 * @brief SBIS opcode.
 *
 * This function checks out 16-bit SBIS opcode.
 * It's made up of (1001'1011'AAAA'Abbb) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xff) in u16.
 */
static inline u16 avr8_SBIS(addr_t pc)
{
    return ISA16(pc, 1001, 1011, 0000, 0000, 0xff);
}

/**
 * @brief SBI opcode.
 *
 * This function checks out 16-bit SBI opcode.
 * It's made up of (1001'1010'AAAA'Abbb) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xff) in u16.
 */
static inline u16 avr8_SBI(addr_t pc)
{
    return ISA16(pc, 1001, 1010, 0000, 0000, 0xff);
}

/**
 * @brief SBIC opcode.
 *
 * This function checks out 16-bit SBIC opcode.
 * It's made up of (1001'1001'AAAA'Abbb) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xff) in u16.
 */
static inline u16 avr8_SBIC(addr_t pc)
{
    return ISA16(pc, 1001, 1001, 0000, 0000, 0xff);
}

/**
 * @brief CBI opcode.
 *
 * This function checks out 16-bit CBI opcode.
 * It's made up of (1001'1000'AAAA'Abbb) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xff) in u16.
 */
static inline u16 avr8_CBI(addr_t pc)
{
    return ISA16(pc, 1001, 1000, 0000, 0000, 0xff);
}

/**
 * @brief SBIW opcode.
 *
 * This function checks out 16-bit SBIW opcode.
 * It's made up of (1001'0111'KKdd'KKKK) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xff) in u16.
 */
static inline u16 avr8_SBIW(addr_t pc)
{
    return ISA16(pc, 1001, 0111, 0000, 0000, 0xff);
}

/**
 * @brief ADIW opcode.
 *
 * This function checks out 16-bit ADIW opcode.
 * It's made up of (1001'0110'KKdd'KKKK) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xff) in u16.
 */
static inline u16 avr8_ADIW(addr_t pc)
{
    return ISA16(pc, 1001, 0110, 0000, 0000, 0xff);
}

/**
 * @brief CALL (32-bit) opcode.
 *
 * This function checks out 32-bit CALL opcode, and
 * must be fetched twice once CALL recognized.
 * It's made up of (1001'010k'kkkk'111k) in binary form.
 *
 * Note: This is 32-bit opcode built by:
 *       - 1001'010k'kkkk'111k
 *         kkkk'kkkk'kkkk'kkkk
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f1) in u16.
 */
static inline u16 avr8_CALL(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1110, ~0x1f1);
}

/**
 * @brief JMP (32-bit) opcode.
 *
 * This function checks out 32-bit CALL opcode, and
 * must be fetched twice once JMP recognized.
 * It's made up of (1001'010k'kkkk'110k) in binary form.
 *
 * Note: This is 32-bit opcode built by:
 *       - 1001'010k'kkkk'110k
 *         kkkk'kkkk'kkkk'kkkk
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f1) in u16.
 */
static inline u16 avr8_JMP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1100, ~0x1f1);
}

/**
 * @brief DES opcode.
 *
 * This function checks out 16-bit DES opcode.
 * It's made up of (1001'0100'KKKK'1011) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xf0) in u16.
 */
static inline u16 avr8_DES(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1011, ~0xf0);
}

/**
 * @brief DEC opcode.
 *
 * This function checks out 16-bit DEC opcode.
 * It's made up of (1001'010d'dddd'1010) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_DEC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1010, ~0x1f0);
}

/**
 * @brief BCLR opcode.
 *
 * This function checks out 16-bit BCLR opcode.
 * It's made up of (1001'0100'1sss'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x70) in u16.
 */
static inline u16 avr8_BCLR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 1000, 1000, ~0x70);
}

/**
 * @brief BSET (32-bit) opcode.
 *
 * This function checks out 32-bit BSET opcode, and
 * must be fetched twice once BSET recognized.
 * It's made up of (1001'0100'0sss'1000) in binary form.
 *
 * Note: This is 32-bit opcode built by:
 *       - 1001'0100'0sss'1000
 *         kkkk'kkkk'kkkk'kkkk
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x70) in u16.
 */
static inline u16 avr8_BSET(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 1000, ~0x70);
}

/**
 * @brief ROR opcode.
 *
 * This function checks out 16-bit ROR opcode.
 * It's made up of (1001'010d'dddd'0111) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_ROR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0111, ~0x1f0);
}

/**
 * @brief LSR opcode.
 *
 * This function checks out 16-bit LSR opcode.
 * It's made up of (1001'010d'dddd'0110) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LSR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0110, ~0x1f0);
}

/**
 * @brief ASR opcode.
 *
 * This function checks out 16-bit ASR opcode.
 * It's made up of (1001'010d'dddd'0101) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_ASR(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0101, ~0x1f0);
}

/**
 * @brief INC opcode.
 *
 * This function checks out 16-bit INC opcode.
 * It's made up of (1001'010d'dddd'0011) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_INC(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0011, ~0x1f0);
}

/**
 * @brief SWAP opcode.
 *
 * This function checks out 16-bit SWAP opcode.
 * It's made up of (1001'010d'dddd'0010) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_SWAP(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0010, ~0x1f0);
}

/**
 * @brief NEG opcode.
 *
 * This function checks out 16-bit NEG opcode.
 * It's made up of (1001'010d'dddd'0001) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_NEG(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0001, ~0x1f0);
}

/**
 * @brief COM opcode.
 *
 * This function checks out 16-bit COM opcode.
 * It's made up of (1001'010d'dddd'0000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_COM(addr_t pc)
{
    return ISA16(pc, 1001, 0100, 0000, 0000, ~0x1f0);
}

/**
 * @brief PUSH opcode.
 *
 * This function checks out 16-bit PUSH opcode.
 * It's made up of (1001'001d'dddd'1111) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_PUSH(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1111, ~0x1f0);
}

/**
 * @brief ST(x) (iii) opcode.
 *
 * This function checks out 16-bit ST(x) (iii) opcode.
 * It's made up of (1001'001r'rrrr'1110) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_STx3(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1110, ~0x1f0);
}

/**
 * @brief ST(x) (ii) opcode.
 *
 * This function checks out 16-bit ST(x) (ii) opcode.
 * It's made up of (1001'001r'rrrr'1101) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_STx2(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1101, ~0x1f0);
}

/**
 * @brief ST(x) (i) opcode.
 *
 * This function checks out 16-bit ST(x) (i) opcode.
 * It's made up of (1001'001r'rrrr'1100) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_STx1(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1100, ~0x1f0);
}

/**
 * @brief ST(y) (iii) opcode.
 *
 * This function checks out 16-bit ST(y) (iii) opcode.
 * It's made up of (1001'001r'rrrr'1010) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_STy3(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1010, ~0x1f0);
}

/**
 * @brief ST(y) (ii) opcode.
 *
 * This function checks out 16-bit ST(y) (ii) opcode.
 * It's made up of (1001'001r'rrrr'1001) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_STy2(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 1001, ~0x1f0);
}

/**
 * @brief LAT opcode.
 *
 * This function checks out 16-bit LAT opcode.
 * It's made up of (1001'001r'rrrr'0111) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LAT(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0111, ~0x1f0);
}

/**
 * @brief LAC opcode.
 *
 * This function checks out 16-bit LAC opcode.
 * It's made up of (1001'001r'rrrr'0110) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LAC(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0110, ~0x1f0);
}

/**
 * @brief LAS opcode.
 *
 * This function checks out 16-bit LAS opcode.
 * It's made up of (1001'001r'rrrr'0101) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LAS(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0101, ~0x1f0);
}

/**
 * @brief XCH opcode.
 *
 * This function checks out 16-bit XCH opcode.
 * It's made up of (1001'001r'rrrr'0100) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_XCH(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0100, ~0x1f0);
}

/**
 * @brief ST(z) (iii) opcode.
 *
 * This function checks out 16-bit ST(z) (iii) opcode.
 * It's made up of (1001'001r'rrrr'0010) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_STz3(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0010, ~0x1f0);
}

/**
 * @brief ST(z) (ii) opcode.
 *
 * This function checks out 16-bit ST(z) (ii) opcode.
 * It's made up of (1001'001r'rrrr'0001) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_STz2(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0001, ~0x1f0);
}

#if defined(AVRrc)
/**
 * @brief STS (AVRrc only) opcode.
 *
 * This function checks out 16-bit STS opcode.
 * It's made up of (1010'1kkk'dddd'kkkk) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x7ff) in u16.
 */
static inline u16 avr8_STS(addr_t pc)
{
    return ISA16(pc, 1010, 1000, 0000, 0000, 0xf800);
}
#else /* !AVRrc */
/**
 * @brief STS (32-bit) opcode.
 *
 * This function checks out 32-bit STS opcode, and
 * must be fetched twice once STS recognized.
 * It's made up of (1001'001d'dddd'0000) in binary form.
 *
 * Note: This is 32-bit opcode built by:
 *       - 1001'001d'dddd'0000
 *         kkkk'kkkk'kkkk'kkkk
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_STS(addr_t pc)
{
    return ISA16(pc, 1001, 0010, 0000, 0000, ~0x1f0);
}
#endif /* AVRrc */

/**
 * @brief POP opcode.
 *
 * This function checks out 16-bit POP opcode.
 * It's made up of (1001'000d'dddd'1111) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_POP(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1111, ~0x1f0);
}

/**
 * @brief LD(x) (iii) opcode.
 *
 * This function checks out 16-bit LD(x) (iii) opcode.
 * It's made up of (1001'000d'dddd'1110) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LDx3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1110, ~0x1f0);
}

/**
 * @brief LD(x) (ii) opcode.
 *
 * This function checks out 16-bit LD(x) (ii) opcode.
 * It's made up of (1001'000d'dddd'1101) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LDx2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1101, ~0x1f0);
}

/**
 * @brief LD(x) (i) opcode.
 *
 * This function checks out 16-bit LD(x) (i) opcode.
 * It's made up of (1001'000d'dddd'1100) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LDx1(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1100, ~0x1f0);
}

/**
 * @brief LD(y) (iii) opcode.
 *
 * This function checks out 16-bit LD(y) (iii) opcode.
 * It's made up of (1001'000d'dddd'1010) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LDy3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1010, ~0x1f0);
}

/**
 * @brief LD(y) (ii) opcode.
 *
 * This function checks out 16-bit LD(y) (ii) opcode.
 * It's made up of (1001'000d'dddd'1001) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LDy2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 1001, ~0x1f0);
}

/**
 * @brief ELPM (iii) opcode.
 *
 * This function checks out 16-bit ELPM (iii) opcode.
 * It's made up of (1001'000d'dddd'0111) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_ELPM3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0111, ~0x1f0);
}

/**
 * @brief ELPM (ii) opcode.
 *
 * This function checks out 16-bit ELPM (ii) opcode.
 * It's made up of (1001'000d'dddd'0110) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_ELPM2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0110, ~0x1f0);
}

/**
 * @brief LPM (iii) opcode.
 *
 * This function checks out 16-bit LPM (iii) opcode.
 * It's made up of (1001'000d'dddd'0101) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LPM3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0101, ~0x1f0);
}

/**
 * @brief LPM (ii) opcode.
 *
 * This function checks out 16-bit LPM (ii) opcode.
 * It's made up of (1001'000d'dddd'0100) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LPM2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0100, ~0x1f0);
}

/**
 * @brief LD(z) (iii) opcode.
 *
 * This function checks out 16-bit LD(z) (iii) opcode.
 * It's made up of (1001'000d'dddd'0010) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LDz3(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0010, ~0x1f0);
}

/**
 * @brief LD(z) (ii) opcode.
 *
 * This function checks out 16-bit LD(z) (ii) opcode.
 * It's made up of (1001'000d'dddd'0001) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LDz2(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0001, ~0x1f0);
}

#if defined(AVRrc)
/**
 * @brief LDS (AVRrc only) opcode.
 *
 * This function checks out 16-bit LDS opcode.
 * It's made up of (1010'0kkk'dddd'kkkk) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x7ff) in u16.
 */
static inline u16 avr8_LDS(addr_t pc)
{
    return ISA16(pc, 1010, 0000, 0000, 0000, 0xf800);
}
#else /* !AVRrc */
/**
 * @brief LDS (32-bit) opcode.
 *
 * This function checks out 32-bit LDS opcode, and
 * must be fetched twice once LDS recognized.
 * It's made up of (1001'000d'dddd'0000) in binary form.
 *
 * Note: This is 32-bit opcode built by:
 *       - 1001'000d'dddd'0000
 *         kkkk'kkkk'kkkk'kkkk
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LDS(addr_t pc)
{
    return ISA16(pc, 1001, 0000, 0000, 0000, ~0x1f0);
}
#endif /* AVRrc */

/**
 * @brief ST(y) (i) opcode.
 *
 * This function checks out 16-bit ST(y) (i) opcode.
 * It's made up of (1000'001r'rrrr'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_STy1(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 1000, ~0x1f0);
}

/**
 * @brief ST(z) (i) opcode.
 *
 * This function checks out 16-bit ST(z) (i) opcode.
 * It's made up of (1000'001r'rrrr'0000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_STz1(addr_t pc)
{
    return ISA16(pc, 1000, 0010, 0000, 0000, ~0x1f0);
}

/**
 * @brief LD(y) (i) opcode.
 *
 * This function checks out 16-bit LD(y) (i) opcode.
 * It's made up of (1000'000d'dddd'1000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LDy1(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 1000, ~0x1f0);
}

/**
 * @brief LD(z) (i) opcode.
 *
 * This function checks out 16-bit LD(z) (i) opcode.
 * It's made up of (1000'000d'dddd'0000) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x1f0) in u16.
 */
static inline u16 avr8_LDz1(addr_t pc)
{
    return ISA16(pc, 1000, 0000, 0000, 0000, ~0x1f0);
}

/**
 * @brief ANDI opcode.
 *
 * This function checks out 16-bit ANDI opcode.
 * It's made up of (0111'KKKK'dddd'KKKK) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xfff) in u16.
 */
static inline u16 avr8_ANDI(addr_t pc)
{
    return ISA16(pc, 0111, 0000, 0000, 0000, 0xf000);
}

/**
 * @brief CBR opcode.
 *
 * This function checks out 16-bit CBR opcode.
 * It's made up of (0111'KKKK'dddd'KKKK) in binary form.
 *
 * Note: ANDI with K complement.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xfff) in u16.
 */
static inline u16 avr8_CBR(addr_t pc)
{
    return ISA16(pc, 0111, 0000, 0000, 0000, 0xf000);
}

/**
 * @brief SBR opcode.
 *
 * This function checks out 16-bit SBR opcode.
 * It's made up of (0110'KKKK'dddd'KKKK) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xfff) in u16.
 */
static inline u16 avr8_SBR(addr_t pc)
{
    return ISA16(pc, 0110, 0000, 0000, 0000, 0xf000);
}

/**
 * @brief ORI opcode.
 *
 * This function checks out 16-bit ORI opcode.
 * It's made up of (0110'KKKK'dddd'KKKK) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xfff) in u16.
 */
static inline u16 avr8_ORI(addr_t pc)
{
    return ISA16(pc, 0110, 0000, 0000, 0000, 0xf000);
}

/**
 * @brief SUBI opcode.
 *
 * This function checks out 16-bit SUBI opcode.
 * It's made up of (0101'KKKK'dddd'KKKK) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xfff) in u16.
 */
static inline u16 avr8_SUBI(addr_t pc)
{
    return ISA16(pc, 0101, 0000, 0000, 0000, 0xf000);
}

/**
 * @brief SBCI opcode.
 *
 * This function checks out 16-bit SBCI opcode.
 * It's made up of (0100'KKKK'dddd'KKKK) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xfff) in u16.
 */
static inline u16 avr8_SBCI(addr_t pc)
{
    return ISA16(pc, 0100, 0000, 0000, 0000, 0xf000);
}

/**
 * @brief CPI opcode.
 *
 * This function checks out 16-bit CPI opcode.
 * It's made up of (0011'KKKK'dddd'KKKK) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xfff) in u16.
 */
static inline u16 avr8_CPI(addr_t pc)
{
    return ISA16(pc, 0011, 0000, 0000, 0000, 0xf000);
}

/**
 * @brief MOV opcode.
 *
 * This function checks out 16-bit MOV opcode.
 * It's made up of (0010'11rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_MOV(addr_t pc)
{
    return ISA16(pc, 0010, 1100, 0000, 0000, ~0x3ff);
}

/**
 * @brief OR opcode.
 *
 * This function checks out 16-bit OR opcode.
 * It's made up of (0010'10rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_OR(addr_t pc)
{
    return ISA16(pc, 0010, 1000, 0000, 0000, ~0x3ff);
}

/**
 * @brief CLR opcode.
 *
 * This function checks out 16-bit CLR opcode.
 * It's made up of (0010'01dd'dddd'dddd) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_CLR(addr_t pc)
{
    return ISA16(pc, 0010, 0100, 0000, 0000, ~0x3ff);
}

/**
 * @brief EOR opcode.
 *
 * This function checks out 16-bit EOR opcode.
 * It's made up of (0010'01rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_EOR(addr_t pc)
{
    return ISA16(pc, 0010, 0100, 0000, 0000, ~0x3ff);
}

/**
 * @brief TST opcode.
 *
 * This function checks out 16-bit TST opcode.
 * It's made up of (0010'00dd'dddd'dddd) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_TST(addr_t pc)
{
    return ISA16(pc, 0010, 0000, 0000, 0000, ~0x3ff);
}

/**
 * @brief AND opcode.
 *
 * This function checks out 16-bit AND opcode.
 * It's made up of (0010'00rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_AND(addr_t pc)
{
    return ISA16(pc, 0010, 0000, 0000, 0000, ~0x3ff);
}

/**
 * @brief ROL opcode.
 *
 * This function checks out 16-bit ROL opcode.
 * It's made up of (0001'11dd'dddd'dddd) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_ROL(addr_t pc)
{
    return ISA16(pc, 0001, 1100, 0000, 0000, ~0x3ff);
}

/**
 * @brief ADC opcode.
 *
 * This function checks out 16-bit ADC opcode.
 * It's made up of (0001'11rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_ADC(addr_t pc)
{
    return ISA16(pc, 0001, 1100, 0000, 0000, ~0x3ff);
}

/**
 * @brief SUB opcode.
 *
 * This function checks out 16-bit SUB opcode.
 * It's made up of (0001'10rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_SUB(addr_t pc)
{
    return ISA16(pc, 0001, 1000, 0000, 0000, ~0x3ff);
}

/**
 * @brief CP opcode.
 *
 * This function checks out 16-bit CP opcode.
 * It's made up of (0001'01rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_CP(addr_t pc)
{
    return ISA16(pc, 0001, 0100, 0000, 0000, ~0x3ff);
}

/**
 * @brief CPSE opcode.
 *
 * This function checks out 16-bit CPSE opcode.
 * It's made up of (0001'00rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_CPSE(addr_t pc)
{
    return ISA16(pc, 0001, 0000, 0000, 0000, ~0x3ff);
}

/**
 * @brief LSL opcode.
 *
 * This function checks out 16-bit LSL opcode.
 * It's made up of (0000'11dd'dddd'dddd) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_LSL(addr_t pc)
{
    return ISA16(pc, 0000, 1100, 0000, 0000, ~0x3ff);
}

/**
 * @brief ADD opcode.
 *
 * This function checks out 16-bit ADD opcode.
 * It's made up of (0000'11rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_ADD(addr_t pc)
{
    return ISA16(pc, 0000, 1100, 0000, 0000, ~0x3ff);
}

/**
 * @brief SBC opcode.
 *
 * This function checks out 16-bit SBC opcode.
 * It's made up of (0000'10rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_SBC(addr_t pc)
{
    return ISA16(pc, 0000, 1000, 0000, 0000, ~0x3ff);
}

/**
 * @brief CPC opcode.
 *
 * This function checks out 16-bit CPC opcode.
 * It's made up of (0000'01rd'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x3ff) in u16.
 */
static inline u16 avr8_CPC(addr_t pc)
{
    return ISA16(pc, 0000, 0100, 0000, 0000, ~0x3ff);
}

/**
 * @brief FMULSU opcode.
 *
 * This function checks out 16-bit FMULSU opcode.
 * It's made up of (0000'0011'1ddd'1rrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x33) in u16.
 */
static inline u16 avr8_FMULSU(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 1000, 1000, ~0x33);
}

/**
 * @brief FMULS opcode.
 *
 * This function checks out 16-bit FMULS opcode.
 * It's made up of (0000'0011'1ddd'0rrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x33) in u16.
 */
static inline u16 avr8_FMULS(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 1000, 0000, ~0x33);
}

/**
 * @brief FMUL opcode.
 *
 * This function checks out 16-bit FMUL opcode.
 * It's made up of (0000'0011'0ddd'1rrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x33) in u16.
 */
static inline u16 avr8_FMUL(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 0000, 1000, ~0x33);
}

/**
 * @brief MULSU opcode.
 *
 * This function checks out 16-bit MULSU opcode.
 * It's made up of (0000'0011'0ddd'0rrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0x33) in u16.
 */
static inline u16 avr8_MULSU(addr_t pc)
{
    return ISA16(pc, 0000, 0011, 0000, 0000, ~0x33);
}

/**
 * @brief MULS opcode.
 *
 * This function checks out 16-bit MULS opcode.
 * It's made up of (0000'0010'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xff) in u16.
 */
static inline u16 avr8_MULS(addr_t pc)
{
    return ISA16(pc, 0000, 0010, 0000, 0000, ~0xff);
}

/**
 * @brief MOVW opcode.
 *
 * This function checks out 16-bit MOVW opcode.
 * It's made up of (0000'0001'dddd'rrrr) in binary form.
 *
 * @param pc an address pointing to current instruction.
 * @return 0 if unmatch, otherwise (@pc & 0xff) in u16.
 */
static inline u16 avr8_MOVW(addr_t pc)
{
    return ISA16(pc, 0000, 0001, 0000, 0000, ~0xff);
}

XAR_END_DECLS

#endif /* __AVR8_IMPL_H__ */
