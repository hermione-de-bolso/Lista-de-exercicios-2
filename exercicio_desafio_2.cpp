//Programa para Controle Completo de Robô

//Importando bibliotecas
#include <stdio.h>
#include <string.h>

//Definindo variaveis
int x = 5, y = 5;  
int bateria = 100;  

// Função de controle de movimento em 10x10
void controleMovimento() {
    char comando[10];
    printf("Controle de Movimento (10x10)\n");

    do {
        printf("Posição atual do robô: (%d, %d)\n", x, y);
        printf("Digite um comando ('frente', 'trás', 'esquerda', 'direita', 'sair'): ");
        scanf("%s", comando);

        if (strcmp(comando, "frente") == 0) {
            if (y < 10) y++;
            else printf("Limite superior atingido!\n");
        } else if (strcmp(comando, "trás") == 0) {
            if (y > 0) y--;
            else printf("Limite inferior atingido!\n");
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 0) x--;
            else printf("Limite esquerdo atingido!\n");
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 10) x++;
            else printf("Limite direito atingido!\n");
        } else if (strcmp(comando, "sair") != 0) {
            printf("Comando inválido! Tente novamente.\n");
        }

    } while (strcmp(comando, "sair") != 0);
}

// Função para simular a leitura de sensores de distância
void leituraSensores() {
    float distancia;
    char opcao;

    do {
        printf("Iniciar leitura do sensor? (s/n): ");
        scanf(" %c", &opcao);

        if (opcao == 'n' || opcao == 'N') {
            printf("Encerrando leitura do sensor.\n");
            break;
        }

        printf("Digite a distância medida (em cm): ");
        scanf("%f", &distancia);
        printf("Distância registrada: %.2f cm\n", distancia);

        if (distancia < 10.0) {
            printf("Alerta: Distância menor que 10 cm.\n");
            break;
        }

    } while (1);
}

// Função para controlar as ações do robô
void controleAtuacao() {
    int opcao;

    do {
        printf("\nSelecione uma ação do robô:\n");
        printf("1 - Ligar lâmpada\n");
        printf("2 - Tocar som\n");
        printf("3 - Mover braço\n");
        printf("0 - Voltar ao menu principal\n");
        printf("Escolha uma opção: ");
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
                printf("Voltando ao menu principal.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

// Função de monitoramento de bateria
void monitoramentoBateria() {
    do {
        printf("\nNível atual da bateria: %d%%\n", bateria);
        if (bateria < 20) {
            printf("Alerta: Bateria abaixo de 20%%! Recarregue o robô.\n");
        }
        bateria -= 10; 
        if (bateria < 0) bateria = 0;
    } while (bateria > 0);
    printf("Bateria esgotada! Recarregue o robô.\n");
}

// Função para navegação autônoma no grid 5x5
void navegacaoAutonoma() {
    char comando[10];

    do {
        printf("Posição atual do robô no grid 5x5: (%d, %d)\n", x, y);
        printf("Digite um comando ('cima', 'baixo', 'esquerda', 'direita', 'parar'): ");
        scanf("%s", comando);

        if (strcmp(comando, "cima") == 0) {
            if (y < 4) y++;
            else printf("Limite superior atingido!\n");
        } else if (strcmp(comando, "baixo") == 0) {
            if (y > 0) y--;
            else printf("Limite inferior atingido!\n");
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 0) x--;
            else printf("Limite esquerdo atingido!\n");
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 4) x++;
            else printf("Limite direito atingido!\n");
        } else if (strcmp(comando, "parar") != 0) {
            printf("Comando inválido! Tente novamente.\n");
        }

    } while (strcmp(comando, "parar") != 0);
}

int main() {
    int opcao;

    do {
        printf("\nMenu Principal:\n");
        printf("1 - Controle de Movimento\n");
        printf("2 - Leitura de Sensores de Distância\n");
        printf("3 - Controle de Atuação\n");
        printf("4 - Monitoramento de Bateria\n");
        printf("5 - Navegação Autônoma\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                controleMovimento();
                break;
            case 2:
                leituraSensores();
                break;
            case 3:
                controleAtuacao();
                break;
            case 4:
                monitoramentoBateria();
                break;
            case 5:
                navegacaoAutonoma();
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
