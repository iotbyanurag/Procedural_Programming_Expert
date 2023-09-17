/*
    The RDTSC instruction stands for "Read Time Stamp Counter." It's an x86 assembly instruction that reads the CPU's time-stamp counter, a 64-bit register that counts the number of cycles since reset. The RDTSC instruction is often used for performance monitoring, benchmarking, and creating high-resolution timers.

How It Works:
When executed, RDTSC returns the time-stamp counter value in the EDX:EAX registers on 32-bit systems, or in the RDX:RAX registers on 64-bit systems. The upper 32 bits are placed in EDX/RDX, and the lower 32 bits are placed in EAX/RAX.

Usage in C/C++:
In C and C++, you can use the __rdtsc() intrinsic function to access the RDTSC instruction. This function is available in GCC, Clang, and MSVC compilers.
*/

#include <stdio.h>
#include <x86intrin.h>

int main() {
    unsigned long long start, end;
    double cpu_speed_in_hz = 1895997000.0;  // 1.895997 GHz in Hz

    start = __rdtsc();
    // Code to be measured
    for (volatile int i = 0; i < 100000; ++i);
    end = __rdtsc();

    unsigned long long cycles = end - start;
    double time_in_seconds = (double)cycles / cpu_speed_in_hz;

    printf("Elapsed cycles: %llu\n", cycles);
    printf("Elapsed time: %f seconds\n", time_in_seconds);

    return 0;
}
