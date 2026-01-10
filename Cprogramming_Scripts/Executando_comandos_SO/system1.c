// Executando comandos no sistema operacional (1)
#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("Portas TCP Abertas: \n");
    system("netstat -nlpt");

    return 0;
}