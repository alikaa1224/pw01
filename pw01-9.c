//9. Каскад инициализаций модулей
//nano pw01-9.c
//внутри nano:
#include <stdio.h>
void phase_2() {
    printf("BETA ");
}
void phase_1() {
    printf("ALPHA ");
    phase_2();
    printf("GAMMA ");
}
int main() {
    printf("START ");
    phase_1();
    printf("END\n");
    return 0;
}
//компиляция - gcc pw01-9.c -o pw01-9
//запуск - ./pw01-9

