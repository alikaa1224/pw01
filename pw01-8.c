//8. Сигнал синхронизации
//nano pw01-8.c
//внутри nano:
#include <stdio.h>
void pulse() {
    printf("@");
}
int main() {
    pulse();
    printf("\n");
    pulse();
    pulse();
    printf("\n");
    pulse();
    pulse();
    pulse();
    printf("\n");
    return 0;
}
//компиляция - gcc pw01-8.c -o pw01-8
//запуск - ./pw01-8
