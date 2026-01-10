// Entrada de Usuário (INPUT) usando scanf (vuln)

#include <stdio.h>

int main(void){

    int porta = 80;
    char ip[16];
    float versao = 1.2;

    printf("\tOV3H Cprogramming, version %.1f\n",versao);

    printf("Digite o IP:\n");
    scanf("%s",&ip); // entrada de usuario = vulneravel

    printf("Digite a Porta:\n");
    scanf("%i", &porta);

    printf("Varrendo Host: %s na porta: %i",ip,porta);

    return 0;
}