// Trabalhando com variaveis em C

// Delimitar o número de casas decimais `%.2f, variavel_float`

#include <stdio.h>

int main(void){

    int porta = 80;
    char ip[] = "192.168.0.1";
    float versao = 1.1;

    printf("\tOV3H\n");
    printf("Scan versao: %.1f \n", versao); 
    printf("Varrendo Host: %s na porta %i \n", ip, porta);
    return 0;
}