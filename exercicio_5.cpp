// Programa para Controle de Movimento de um Robô

#include <stdio.h>
#include <string.h>

int main() {
    int x = 5, y = 5; // Posição inicial do robô (centro do espaço 10x10)
    char comando[10];

    printf("Controle de Movimento do Robô\n");
    printf("Espaço de 10x10 metros com coordenadas (0,0) a (10,10).\n");
    printf("Comandos disponíveis: 'frente', 'trás', 'esquerda', 'direita'.\n");
    printf("Digite 'sair' para encerrar o programa.\n\n");

    do {
        printf("Posição atual do robô: (%d, %d)\n", x, y);
        printf("Digite um comando: ");
        scanf("%s", comando);

        if (strcmp(comando, "frente") == 0) {
            if (y < 10) {
                y++;
            } else {
                printf("Movimento inválido! O robô está no limite superior.\n");
            }
        } else if (strcmp(comando, "trás") == 0) {
            if (y > 0) {
                y--;
            } else {
                printf("Movimento inválido! O robô está no limite inferior.\n");
            }
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 0) {
                x--;
            } else {
                printf("Movimento inválido! O robô está no limite esquerdo.\n");
            }
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 10) {
                x++;
            } else {
                printf("Movimento inválido! O robô está no limite direito.\n");
            }
        } else if (strcmp(comando, "sair") != 0) {
            printf("Comando inválido! Tente 'frente', 'trás', 'esquerda' ou 'direita'.\n");
        }

    } while (strcmp(comando, "sair") != 0);

    printf("Programa encerrado.\n");
    return 0;
}

