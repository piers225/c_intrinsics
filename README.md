# SIMD Array Operations with NEON and SSE

This repository contains two implementations of SIMD (Single Instruction, Multiple Data) operations on arrays using NEON (ARM) and SSE (Intel) instruction sets. Both implementations perform four basic operations on two float arrays: addition, subtraction, multiplication, and division.

## Files

### 1. **NEON SIMD (ARM) Operations (`main-arm64.c`)**
   - **Platform:** ARM with NEON support
   - **Operations:** Addition, Subtraction, Multiplication, Division
   - **Dependencies:** Requires an ARM architecture with NEON support (e.g., ARMv7 or ARMv8).
   - **How to Run:**
     1. Compile using a toolchain with NEON support.
     2. Run on an ARM-based platform or simulator with NEON enabled.
   
### 2. **SSE SIMD (Intel) Operations (`main-x86.c`)**
   - **Platform:** Intel/AMD processors with SSE support
   - **Operations:** Addition, Subtraction, Multiplication, Division
   - **Dependencies:** Requires an x86/x86-64 processor with SSE support (e.g., SSE2 or newer).
   - **How to Run:**
     1. Compile using a compiler that supports SSE (e.g., GCC, Clang).
     2. Run on an Intel or AMD processor with SSE enabled.

## Compilation Instructions

### For NEON (ARM):
   Use an ARM toolchain (e.g., GCC for ARM) to compile:
   ```bash
   gcc -o a.out main-arm64.c && ./a.out
   ```

## For SSE (Intel):

Use GCC or Clang to compile:
```bash
gcc -o a.out main-x86.c && ./a.out
```
## Usage

- **For NEON**: Run the compiled program on an ARM-based device with NEON enabled.
- **For SSE**: Run the compiled program on an Intel or AMD processor with SSE support.

## Operations

Each program performs the following operations on two arrays of floats:

- **Addition**: Adds corresponding elements.
- **Subtraction**: Subtracts corresponding elements.
- **Multiplication**: Multiplies corresponding elements.
- **Division**: Divides corresponding elements.


