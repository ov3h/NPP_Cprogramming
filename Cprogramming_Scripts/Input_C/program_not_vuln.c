// Entrada de Usuário (INPUT) usando fgets (mais segura)

#include <stdio.h>

int main(void){

    char ip[5];
    float versao = 1.3;

    printf("\tOV3H Cprogramming, version %.1f not vuln\n",versao);

    printf("Digite o IP:\n");
    fgets(ip,5,stdin); // entrada de usuario = mais segura (fgets)

    printf("Varrendo Host: %s",ip);

    return 0;
}