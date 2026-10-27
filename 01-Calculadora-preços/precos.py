# Início do Programa
print("Olá, Bem vindo!")

# Loop para repetir 3 vezes (conforme o fluxograma: i de 1 até 3)
for i in range(1, 4):
    print("-" * 30)
    
    # Leitura dos dados
    nome = input("Por favor, Digite o nome do produto que deseja consultar: ")
    precoAnterior = float(input("Digite o preço anterior do produto (R$): "))
    precoAtual = float(input("Digite o preço atual do produto (R$): "))
    
    # Cálculo da variação percentual
    variacao = ((precoAtual - precoAnterior) / precoAnterior) * 100
    
    # Lógica condicional para definir a situação do preço
    if variacao > 0:
        if variacao > 10:
            situacao = "AUMENTO ABUSIVO"
        elif variacao == 10:
            situacao = "LIMITE DE AUMENTO"
        else:
            situacao = "AUMENTO"
    elif variacao < 0:
        situacao = "QUEDA"
    else:
        situacao = "ESTÁVEL"
        
    # Exibição do relatório formatado
    print("-" * 30)
    print(f"Produto: {nome}")
    print(f"Preço Anterior: R$ {precoAnterior:.2f}")
    print(f"Preço Atual: R$ {precoAtual:.2f}")
    print(f"Variação: {variacao:.2f}%")
    print(f"Situação: {situacao}")
    print("-" * 30)

print("Fim do programa.")