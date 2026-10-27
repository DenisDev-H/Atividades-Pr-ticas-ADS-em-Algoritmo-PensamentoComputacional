# Inicialização do vetor com 10 posições para os tempos
tempos = [0] * 10

# Leitura dos tempos de chegada dos 10 ônibus/autocarros
for i in range(10):
    tempos[i] = int(input(f"Digite o tempo de chegada do ônibus {i + 1} (em minutos): "))

# Algoritmo de ordenação (Bubble Sort)
for i in range(9):
    for j in range(i + 1, 10):
        if tempos[i] > tempos[j]:
            # Troca de posições (swap) utilizando variável auxiliar
            aux = tempos[i]
            tempos[i] = tempos[j]
            tempos[j] = aux

# Exibição dos tempos ordenados
print("\n--- Tempos de Chegada Ordenados ---")
for i in range(10):
    print(f"{tempos[i]} minutos")

print("Fim")