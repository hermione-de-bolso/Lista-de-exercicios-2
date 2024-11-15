// Codigo para controle de temperatura

//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    float temperatura;
    
    while (1) { // Loop infinito para monitorar continuamente
        printf("Digite a temperatura atual (em °C): ");
        scanf("%f", &temperatura);

        if (temperatura < 20.0 || temperatura > 25.0) {
            printf("ALERTA: Temperatura fora do intervalo seguro! (%.2f°C)\n", temperatura);
        } else {
            printf("Temperatura dentro do intervalo seguro. (%.2f°C)\n", temperatura);
        }

        // Espera de 1 segundo antes de verificar novamente
        sleep(1);
        system("clear"); // Limpa a tela para simular monitoramento em tempo real
    }

    return 0;
}
