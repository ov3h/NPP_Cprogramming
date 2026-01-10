// Argumentos e Repetições em C usando Condições
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int i;

    if(argc < 2){
        printf("\t\n\t\t[OV3H] PingSweep 1.1");
        printf("\t\n\tModo de uso: %s <IP>\n", argv[0]);
    } else { 
        char comando[100]; // definindo tamanho da variavel

        for(i=0; i<=254; i++){
            printf("Varrendo Host: %s\n", argv[1]);

            // Montando a string para o system
            snprintf(comando, sizeof(comando), "ping -c 1 %s.%d", argv[1], i);
            system(comando);
        }
    }
    return 0;
}