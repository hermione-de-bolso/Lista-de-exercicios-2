// Programa para Verificação de Depósito Mínimo

//Importando bibliotecas
#include <stdio.h>

//Codigo principak
int main() {
    float deposito;
    const float DEPOSITO_MINIMO = 500.0;

    while (1) { 
        printf("Digite o valor do depósito inicial (mínimo de R$500,00): ");
        scanf("%f", &deposito);

        if (deposito >= DEPOSITO_MINIMO) {
            printf("Depósito válido! Conta aberta com sucesso.\n");
            break; 
        } else {
            printf("Erro: o valor do depósito inicial deve ser no mínimo R$500,00.\n");
        }
    }

    return 0;
}
