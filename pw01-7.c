//7. Последовательность POST-диагностики
//nano pw01-7.c
//внутри nano:
#include <stdio.h>
void load_mem() {
    printf("MEM_OK");
}
void load_cpu() {
    printf("CPU_OK");
}
int main() {
    printf("BOOT:");
    load_mem();
    printf("|");
    load_cpu();
    printf(":END");
    printf("\n");
    return 0;
}
//компиляция - gcc pw01-7.c -o pw01-7
//запуск - ./pw01-7
