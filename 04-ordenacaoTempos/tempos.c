#include <stdio.h>

int main() {
    // Declaração do vetor para 10 tempos e variáveis de controle
    int tempos[10];
    int i, j, aux;

    // Leitura dos tempos de chegada dos 10 ônibus/autocarros
    for (i = 0; i < 10; i++) {
        printf("Digite o tempo de chegada do ônibus %d (em minutos): ", i + 1);
        scanf("%d", &tempos[i]);
    }

    // Algoritmo de ordenação (Bubble Sort)
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (tempos[i] > tempos[j]) {
                // Troca de posições usando variável auxiliar
                aux = tempos[i];
                tempos[i] = tempos[j];
                tempos[j] = aux;
            }
        }
    }

    // Exibição dos tempos ordenados
    printf("\n--- Tempos de Chegada Ordenados ---\n");
    for (i = 0; i < 10; i++) {
        printf("%d minutos\n", tempos[i]);
    }

    printf("Fim\n");
    return 0;
}