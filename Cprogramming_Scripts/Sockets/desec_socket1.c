#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(int argc, char *argv[]){

    int sock;
    int conect_sock;

    struct sockaddr_in alvo;

    /*
    AF_INET -> Tipo IPv4
    SOCK_STREAM -> Conexao orientada (TCP)
    Protocolo (0) -> IP - /etc/protocols
    */
    sock = socket(AF_INET, SOCK_STREAM, 0);

    alvo.sin_family = AF_INET;
    alvo.sin_port = htons(argv[2]); //htons(80) indica a porta 80
    alvo.sin_addr.s_addr = inet_addr(argv[1]);

    conect_sock = connect(sock, (struct sockaddr *) &alvo, sizeof alvo);

    if (conect_sock == 0){
        printf("Porta Aberta\n");
        close(sock);
    } else {
        printf("Porta fechada\n");
    }

    return 0;
}