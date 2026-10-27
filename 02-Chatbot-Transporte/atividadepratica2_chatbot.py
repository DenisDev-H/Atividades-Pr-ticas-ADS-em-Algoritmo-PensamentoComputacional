# === Chatbot de Atendimento Transporte Escolar - Tio Denis ===

contContratar = 0
contAusencia = 0
contHorarios = 0
contUrgencia = 0

print("=== Chatbot de Atendimento Transporte Escolar - Tio Denis ===")
print("1 - Quero Contratar / Orçamento")
print("2 - Avisar que o aluno vai faltar")
print("3 - Horários e Itinerários")
print("4 - Falar com o Motorista (Urgência)")
print("5 - Encerrar Atendimento")
print("Digite uma opção desejada:")

opcao = 0

# O loop continua enquanto a opcao não for 5
while opcao != 5:
    opcao = int(input())
    
    if opcao == 1:
        print("Digite as seguintes informações: Nome do Aluno, horário de estudos, nome da Escola e se é atendimento particular ou gratuito:")
        demanda = input()
        print("Sucesso! Seus dados foram encaminhados. Entraremos em contato com o orçamento em breve.")
        contContratar = contContratar + 1
    elif opcao == 2:
        print("Por favor, digite o motivo da falta/ausência: ")
        demanda = input()
        print("Aviso de falta registrado! O itinerário da van já foi atualizado para hoje.")
        contAusencia = contAusencia + 1
    elif opcao == 3:
        print("Horários atendidos nas Escolas: Manhã, Tarde e Integral")
        print("Somente Escolas PMSP EMEI, EMEF e CEU")
        contHorarios = contHorarios + 1
    elif opcao == 4:
        print("Mensagem de Urgência, Digite aqui o seu recado: ")
        demanda = input()
        print("Aviso urgente encaminhado diretamente para o painel do motorista!")
        contUrgencia = contUrgencia + 1
    elif opcao == 5:
        pass # Apenas sai do loop
    else:
        print("Opção inválida! Digite de 1 a 5")

print("A.L.A Transportes agradece o seu contato")
