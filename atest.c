#include <stdio.h>

int main() {
    int a = 5, b = 10, result;
    __asm__ __volatile__ (
        "movl %1, %%eax;"
        "addl %2, %%eax;"
        "movl %%eax, %0;"
        : "=r" (result)      // output
        : "r" (a), "r" (b)   // inputs
        : "%eax"
    );

    printf("Resultado: %d\n", result);
    return 0;
}
