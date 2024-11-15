//Programa para Leitura de Sensores de Distância

//Importar bibliotecas
#include <stdio.h>

int main() {
    float distancia;
    char opcao;

    printf("Leitura do Sensor de Distância\n");
    printf("O programa encerra quando a distância for menor que 10 cm ou o usuário decidir parar.\n\n");

    do {
        printf("Iniciar leitura do sensor? (s/n): ");
        scanf(" %c", &opcao);

        if (opcao == 'n' || opcao == 'N') {
            printf("Programa encerrado.\n");
            break;
        }

        printf("Digite a distância medida (em cm): ");
        scanf("%f", &distancia);

        printf("Distância registrada: %.2f cm\n", distancia);

        if (distancia < 10.0) {
            printf("Alerta: Distância menor que 10 cm. Programa encerrado.\n");
            break;
        }
    } while (1);

    return 0;
}
