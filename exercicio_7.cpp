//Programa para Controle de Atuação do Robô

//Importar bibliotecas
#include <stdio.h>

int main() {
    int opcao;

    printf("Controle de Atuação do Robô\n");
    printf("Escolha uma ação:\n");
    printf("1 - Ligar lâmpada\n");
    printf("2 - Tocar som\n");
    printf("3 - Mover braço\n");
    printf("0 - Encerrar programa\n\n");

    do {
        printf("Selecione uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Lâmpada ligada.\n");
                break;
            case 2:
                printf("Som tocado.\n");
                break;
            case 3:
                printf("Braço movido.\n");
                break;
            case 0:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
