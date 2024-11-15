// Programa para Análise de Desempenho de Ações

//Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void calcular_analise(int dias, float precos[]) {
    float soma = 0.0, media, variancia = 0.0, desvio_padrao;

    // Calcula a soma dos preços para obter a média
    for (int i = 0; i < dias; i++) {
        soma += precos[i];
    }
    media = soma / dias;

    // Calcula a variância
    for (int i = 0; i < dias; i++) {
        variancia += pow(precos[i] - media, 2);
    }
    variancia /= dias;

    // Calcula o desvio padrão
    desvio_padrao = sqrt(variancia);

    // Exibe os resultados
    printf("\nMédia dos preços das ações: %.2f\n", media);
    printf("Desvio padrão dos preços das ações: %.2f\n", desvio_padrao);

    // Determina se o desempenho é estável ou volátil
    if (desvio_padrao < 5.0) {
        printf("Desempenho das ações: Estável\n");
    } else {
        printf("Desempenho das ações: Volátil\n");
    }
}

//Codigo principal
int main() {
    int dias;
    char opcao;

    do {
        printf("Informe o número de dias para analisar: ");
        scanf("%d", &dias);

        float precos[dias];

        // Coleta os preços das ações para cada dia
        for (int i = 0; i < dias; i++) {
            printf("Digite o preço da ação para o dia %d: ", i + 1);
            scanf("%f", &precos[i]);
        }

        // Chama a função para calcular e exibir a análise
        calcular_analise(dias, precos);

        // Pergunta se o usuário deseja analisar novos dados ou sair
        printf("\nDeseja analisar novos dados? (s/n): ");
        scanf(" %c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    printf("Programa encerrado.\n");
    return 0;
}
