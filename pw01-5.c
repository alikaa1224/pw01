//5. Вектор состояния ядра
//nano pw01-5.c
//внутри nano:
#include <stdio.h>
int main() {
    int reactor_core = 12;
    printf("[");
    printf("%d", reactor_core);
    printf(", ");
    printf("%d", reactor_core * 2);
    printf(", ");
    printf("%d", reactor_core * reactor_core);
    printf("]");
    printf("\n");
    return 0;
}
//компиляция - gcc pw01-5.c -o pw01-5
//запуск - ./pw01-5