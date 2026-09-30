//10. Финальный вызов
//nano pw01-10.c
//внутри nano:
#include <stdio.h>
#define NODE_ID 42
void ping() {
    printf("PING");
}
void pong() {
    printf("PONG");
}
void handshake() {
    ping();
    printf("-");
    pong();
    printf("-");
    ping();
}
int main() {
    int packet_size = NODE_ID * 4;
    int total_transfer = packet_size * 3;
    handshake();
    printf(":");
    printf("%d", packet_size);
    printf("\n");
    handshake();
    printf(":");
    printf("%d", total_transfer);
    printf("\n");
    printf("SESSION"); 
    printf(":");
    printf("CLOSED");
    printf("\n");

    return 0;
}
//компиляция - gcc pw01-10.c -o pw01-10
//запуск - ./pw01-10
