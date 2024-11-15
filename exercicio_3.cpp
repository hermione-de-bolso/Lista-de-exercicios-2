// Programa para a contagem de passos de Meta Diaria

//Importando bibliotecas
#include <stdio.h>

//Codigo principal
int main() {
    int passos, total_passos = 0;
    const int META = 10000;

    while (total_passos < META) { 
        printf("Digite a quantidade de passos dados: ");
        scanf("%d", &passos);

        total_passos += passos;
        printf("Passos totais até o momento: %d\n", total_passos);

        if (total_passos >= META) {
            printf("Parabéns! Você atingiu a meta diária de 10.000 passos.\n");
            break; 
        }
    }

    return 0;
}
