# SIMD Array Operations with NEON and SSE

This repository contains two implementations of SIMD (Single Instruction, Multiple Data) operations on arrays using NEON (ARM) and SSE (Intel) instruction sets. Both implementations perform four basic operations on two float arrays: addition, subtraction, multiplication, and division.
Files

## 1. NEON SIMD (ARM) Operations (neon_operations.c)

    Platform: ARM with NEON support
    Operations: Addition, Subtraction, Multiplication, Division
    Dependencies: Requires an ARM architecture with NEON support (e.g., ARMv7 or ARMv8).
    How to Run:
        Compile using a toolchain with NEON support.
        Run on an ARM-based platform or simulator with NEON enabled.

## 2. SSE SIMD (Intel) Operations (sse_operations.c)

    Platform: Intel/AMD processors with SSE support
    Operations: Addition, Subtraction, Multiplication, Division
    Dependencies: Requires an x86/x86-64 processor with SSE support (e.g., SSE2 or newer).
    How to Run:
        Compile using a compiler that supports SSE (e.g., GCC, Clang).
        Run on an Intel or AMD processor with SSE enabled.

Compilation Instructions
For NEON (ARM):

Use an ARM toolchain (e.g., GCC for ARM) to compile:

arm-linux-gnueabihf-gcc -o neon_operations neon_operations.c -mfpu=neon

For SSE (Intel):

Use GCC or Clang to compile:

gcc -o sse_operations sse_operations.c -msse

Usage

    For NEON: Run the compiled program on an ARM-based device with NEON enabled.
    For SSE: Run the compiled program on an Intel or AMD processor with SSE support.

Each program performs the following operations on two arrays of floats:

    Addition: Adds corresponding elements.
    Subtraction: Subtracts corresponding elements.
    Multiplication: Multiplies corresponding elements.
    Division: Divides corresponding elements.

The results of these operations are printed for inspection.
