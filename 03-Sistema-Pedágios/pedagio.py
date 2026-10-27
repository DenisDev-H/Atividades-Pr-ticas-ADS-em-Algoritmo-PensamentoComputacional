# Inicialização do vetor (matriz de 7 posições para os dias da semana de 0 a 6)
# 0-Seg, 1-Ter, 2-Qua, 3-Qui, 4-Sex, 5-Sáb, 6-Dom
fluxoVeiculos = [0] * 7

opcao = 0

# Loop do sistema principal enquanto a opção for diferente de 3 (Encerrar Sistema)
while opcao != 3:
    print("\n=== SISTEMA DE PEDÁGIOS ===")
    print("1 - Registrar Fluxo de Veículos")
    print("2 - Exibir relatório Semanal")
    print("3 - Encerrar Sistema")
    
    opcao = int(input("Escolha uma opção: "))
    
    if opcao == 1:
        dia = int(input("Digite o dia (0-Seg, 1-Ter, 2-Qua, 3-Qui, 4-Sex, 5-Sáb, 6-Dom): "))
        
        # Validação do dia da semana
        if dia >= 0 and dia <= 6:
            quantidade = int(input("Digite a quantidade de veículos que passaram: "))
            
            # Validação para impedir quantidade negativa
            if quantidade < 0:
                print("[ERRO] A quantidade não pode ser negativa!")
            else:
                fluxoVeiculos[dia] += quantidade
                print("Registro efetuado com sucesso!")
        else:
            print("Dia inválido! Escolha de 0 a 6.")
            
    elif opcao == 2:
        print("\n=== RELATÓRIO DE FLUXO SEMANAL ===")
        totalSemana = 0
        
        for dia in range(7):
            print(f"Dia {dia} & {fluxoVeiculos[dia]} veículos.")
            totalSemana += fluxoVeiculos[dia]
            
        print(f"Total de veículos na semana: {totalSemana}")
        print("---------------------------------")
        
    elif opcao == 3:
        print("Encerrando o sistema...")
        
    else:
        print("Opção inválida! Escolha 1, 2 ou 3.")

print("Fim do sistema.")