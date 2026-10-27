# Inicialização de variáveis e contadores
opcao = 0
demanda = ""
contContratar = 0
contAusencia = 0
contHorarios = 0
contUrgencia = 0

# Exibição do Menu Principal em loop enquanto a opção for diferente de 5
while opcao != 5:
    print("=== Chatbot de Atendimento Transporte Escolar - Tio Denis ===")
    print("1 - Quero Contratar / Orçamento")
    print("2 - Avisar que o aluno vai faltar")
    print("3 - Horários e Itinerários")
    print("4 - Falar com o Motorista (Urgência)")
    print("5 - Encerrar Atendimento")
    
    # Leitura da opção escolhida
    opcao = int(input("Digite uma opção desejada: "))
    
    if opcao == 1:
        demanda = input("Digite as seguintes informações: Nome do Aluno, horário de estudos, nome da Escola e se é atendimento particular ou gratuito: ")
        print("Sucesso! Seus dados foram encaminhados. Entraremos em contato com o orçamento em breve.")
        contContratar += 1
        
    elif opcao == 2:
        demanda = input("Por favor, digite o motivo da falta/ausência: ")
        print("Aviso de falta registrado! O itinerário da van já foi atualizado para hoje.")
        contAusencia += 1
        
    elif opcao == 3:
        print("Horários atendidos nas Escolas: Manhã, Tarde e Integral.")
        print("Somente Escolas PMSP, EMEI, EMEF e CEU.")
        contHorarios += 1
        
    elif opcao == 4:
        demanda = input("Mensagem de Urgência. Digite aqui o seu recado: ")
        print("Aviso urgente encaminhado diretamente para o painel do motorista!")
        contUrgencia += 1
        
    elif opcao == 5:
        print("A.L.A Transportes agradece o seu contato.")
        
    else:
        print("Opção Inválida! Digite de 1 a 5.")

print("Fim do atendimento.")