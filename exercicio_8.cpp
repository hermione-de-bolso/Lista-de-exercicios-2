// Programa para Monitoramento de Bateria do Robô

//Importar bibliotecas
#include <stdio.h>

int main() {
    float nivel_bateria;

    printf("Monitoramento de Bateria do Robô\n");
    printf("O programa só encerra quando o nível da bateria estiver acima de 20%%.\n\n");

    do {
        printf("Digite o nível da bateria (em %%): ");
        scanf("%f", &nivel_bateria);

        if (nivel_bateria < 20.0) {
            printf("Alerta: Nível de bateria baixo (%.2f%%). Recarregue o robô.\n", nivel_bateria);
        }
    } while (nivel_bateria < 20.0);

    printf("Nível de bateria adequado (%.2f%%). Programa encerrado.\n", nivel_bateria);
    return 0;
}
