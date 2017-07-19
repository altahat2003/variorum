#include <variorum_cpuid.h>

void cpuid(uint64_t leaf, uint64_t *rax, uint64_t *rbx, uint64_t *rcx, uint64_t *rdx)
{
    asm volatile (
        "\txchg %%rbx, %%rdi\n"
        "\tcpuid\n"
        "\txchg %%rbx, %%rdi"
        : "=a" (*rax), "=D" (*rbx), "=c" (*rcx), "=d" (*rdx)
        : "a" (leaf)
    );
}
