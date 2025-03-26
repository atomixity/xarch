# xarch
**xarch** is a lightweight, header-only C library for decoding the Instruction Set Architecture (ISA) of Microcontrollers (MCUs). It provides a minimal and dependency-free infrastructure for parsing raw binary opcodes and APIs for corresponding assembly-level mnemonics based on the target ISA.

## Introduction
Modern electronic devices (from washing machines to smartwatches) often use tiny computers called *microcontrollers (MCUs)*. These chips run simple programs written in low-level instructions specific to each chip, known as the *Instruction Set Architecture (ISA)*. However, these instructions are usually stored in binary form, which is difficult for humans to read.

This allows you to see what kind of operations the chip is performing, like moving data, adding numbers, or jumping to another part of the program.

## Project Goals
It was born to:
- decode raw binary firmware of an MCU
- provide a base for simulation, disassembly, or even emulation
- understand low-level embedded architectures deeply

This is primarily a research and learning project, but you could bring this to the real one.

## Implementations
- 8-bit AVR Instructions

## License
This project is licensed under the Apache 2.0 License. See the [LICENSE](./LICENSE) file for details.
