//Programa para Simulação de Navegação Autônoma

//Importar bibliotecas
#include <stdio.h>
#include <string.h>

int main() {
    int x = 2, y = 2; // Posição inicial do robô (centro do grid 5x5)
    char comando[10];

    printf("Simulação de Navegação Autônoma\n");
    printf("Grid de 5x5 com coordenadas (0,0) a (4,4).\n");
    printf("Comandos disponíveis: 'cima', 'baixo', 'esquerda', 'direita'.\n");
    printf("Digite 'parar' para encerrar o programa.\n\n");

    do {
        printf("Posição atual do robô: (%d, %d)\n", x, y);
        printf("Digite um comando: ");
        scanf("%s", comando);

        if (strcmp(comando, "cima") == 0) {
            if (y < 4) {
                y++;
            } else {
                printf("Movimento inválido! O robô está no limite superior.\n");
            }
        } else if (strcmp(comando, "baixo") == 0) {
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
            if (x < 4) {
                x++;
            } else {
                printf("Movimento inválido! O robô está no limite direito.\n");
            }
        } else if (strcmp(comando, "parar") != 0) {
            printf("Comando inválido! Tente 'cima', 'baixo', 'esquerda' ou 'direita'.\n");
        }

    } while (strcmp(comando, "parar") != 0);

    printf("Programa encerrado.\n");
    return 0;
}
