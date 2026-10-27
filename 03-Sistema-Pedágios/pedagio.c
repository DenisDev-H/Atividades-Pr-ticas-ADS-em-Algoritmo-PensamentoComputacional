#include <stdio.h>

int main() {
    // Inicialização do vetor de 7 posições (0 a 6) zerado
    int fluxoVeiculos[7] = {0, 0, 0, 0, 0, 0, 0};
    int opcao = 0;
    int dia, quantidade;
    int totalSemana;

    // Loop do sistema principal
    while (opcao != 3) {
        printf("\n=== SISTEMA DE PEDÁGIOS ===\n");
        printf("1 - Registrar Fluxo de Veículos\n");
        printf("2 - Exibir relatório Semanal\n");
        printf("3 - Encerrar Sistema\n");
        printf("Escolha uma opção: ");
        
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o dia (0-Seg, 1-Ter, 2-Qua, 3-Qui, 4-Sex, 5-Sáb, 6-Dom): ");
            scanf("%d", &dia);

            // Validação do dia
            if (dia >= 0 && dia <= 6) {
                printf("Digite a quantidade de veículos que passaram: ");
                scanf("%d", &quantidade);

                // Validação de quantidade negativa
                if (quantidade < 0) {
                    printf("[ERRO] A quantidade não pode ser negativa!\n");
                } else {
                    fluxoVeiculos[dia] += quantidade;
                    printf("Registro efetuado com sucesso!\n");
                }
            } else {
                printf("Dia inválido! Escolha de 0 a 6.\n");
            }
        } 
        else if (opcao == 2) {
            printf("\n=== RELATÓRIO DE FLUXO SEMANAL ===\n");
            totalSemana = 0;

            for (dia = 0; dia <= 6; dia++) {
                printf("Dia %d: %d veículos.\n", dia, fluxoVeiculos[dia]);
                totalSemana += fluxoVeiculos[dia];
            }

            printf("Total de veículos na semana: %d\n", totalSemana);
            printf("---------------------------------\n");
        } 
        else if (opcao == 3) {
            printf("Encerrando o sistema...\n");
        } 
        else {
            printf("Opção inválida! Escolha 1, 2 ou 3.\n");
        }
    }

    printf("Fim do sistema.\n");
    return 0;
}
