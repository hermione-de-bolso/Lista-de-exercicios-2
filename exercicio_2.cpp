// Programa para controle de combustivel em um carro

//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    float combustivel;

    while (1) { 
        printf("Digite o nível de combustível atual (em %%): ");
        scanf("%f", &combustivel);

        if (combustivel < 15.0) {
            printf("ALERTA: Nível de combustível baixo (%.2f%%). Por favor, recarregue o veículo.\n", combustivel);
        } else if (combustivel == 100.0) {
            printf("Nível de combustível está cheio (%.2f%%). Monitoramento concluído.\n", combustivel);
            break; 
        } else {
            printf("Nível de combustível adequado (%.2f%%).\n", combustivel);
        }

        // Espera de 1 segundo antes de verificar novamente
        sleep(1);
        system("clear"); 

    return 0;
}
