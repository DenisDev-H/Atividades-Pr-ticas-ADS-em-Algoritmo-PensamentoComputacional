#include <stdio.h>

int main() {
    // Declaração de variáveis
    char nome[50];
    char situacao[30];
    float precoAnterior, precoAtual, variacao;
    int i;

    printf("Olá, Bem vindo!\n");

    // Loop de 1 até 3
    for (i = 1; i <= 3; i++) {
        printf("------------------------------------\n");

        // Leitura do nome do produto
        printf("Por favor, Digite o nome do produto que deseja consultar: ");
        scanf(" %[^\n]s", nome); // Lê string com espaços

        // Leitura dos preços
        printf("Digite o preço anterior do produto (R$): ");
        scanf("%f", &precoAnterior);

        printf("Digite o preço atual do produto (R$): ");
        scanf("%f", &precoAtual);

        // Cálculo da variação
        variacao = ((precoAtual - precoAnterior) / precoAnterior) * 100;

        // Lógica condicional
        if (variacao > 0) {
            if (variacao > 10) {
                // Atribuindo texto para a string 'situacao' usando snprintf
                snprintf(situacao, sizeof(situacao), "AUMENTO ABUSIVO");
            } else if (variacao == 10) {
                snprintf(situacao, sizeof(situacao), "LIMITE DE AUMENTO");
            } else {
                snprintf(situacao, sizeof(situacao), "AUMENTO");
            }
        } else if (variacao < 0) {
            snprintf(situacao, sizeof(situacao), "QUEDA");
        } else {
            snprintf(situacao, sizeof(situacao), "ESTÁVEL");
        }

        // Exibição do relatório
        printf("------------------------------------\n");
        printf("Produto: %s\n", nome);
        printf("Preço Anterior: R$ %.2f\n", precoAnterior);
        printf("Preço Atual: R$ %.2f\n", precoAtual);
        printf("Variação: %.2f%%\n", variacao);
        printf("Situação: %s\n", situacao);
        printf("------------------------------------\n");
    }

    printf("Fim\n");
    return 0;
}