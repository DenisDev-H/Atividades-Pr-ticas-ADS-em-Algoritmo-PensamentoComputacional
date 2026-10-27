#include <stdio.h>
#include <locale.h>
#include <string.h>

// Função auxiliar recomendada pelo tutor para limpar o buffer de forma segura
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Configura o console para aceitar a acentuação correta em português
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis numéricas e de controle
    int opcao = 0;
    int contContratar = 0;
    int contAusencia = 0;
    int contHorarios = 0;
    int contUrgencia = 0;
    int respostaRetorno = 0;

    // Vetor de caracteres (String) profissional para armazenar as demandas de texto
    char demanda[200];

    // MENSAGEM INICIAL (Aparece apenas uma vez ao abrir o sistema)
    printf("============================================================\n");
    printf("   Bem-vindo ao Chatbot de Atendimento - Tio Denis\n");
    printf("              Transporte Escolar Seguro\n");
    printf("============================================================\n\n");

    // Estrutura do-while (Executa ao menos uma vez, conforme elogiado pelo tutor)
    do {
        // MENU DE SELEÇÃO PRINCIPAL
        printf("Como posso te ajudar hoje? Escolha uma opção:\n");
        printf("1 - Quero Contratar / Solicitar Orçamento\n");
        printf("2 - Avisar que o aluno vai faltar hoje\n");
        printf("3 - Consultar Horários e Itinerários\n");
        printf("4 - Falar com o Motorista (Urgências)\n");
        printf("5 - Encerrar Atendimento\n");
        printf("Digite o número da opção desejada: ");
        scanf("%d", &opcao);
        printf("\n--------------------------------------------------\n");

        // SWITCH CASE COM CHAVES EM CADA BLOCO (Recomendação principal do tutor)
        switch (opcao) {
            case 1: {
                limparBuffer(); // Casamento perfeito antes de ler string
                printf("Digite os dados do Aluno e Escola para o orçamento:\n");
                fgets(demanda, sizeof(demanda), stdin);
                demanda[strcspn(demanda, "\n")] = '\0'; // Remove a quebra de linha automática do fgets
                
                printf("\nSucesso! Seus dados foram encaminhados. Entraremos em contato em breve.\n");
                contContratar++;
                break;
            }
            case 2: {
                limparBuffer();
                printf("Por favor, digite o motivo da falta/ausência:\n");
                fgets(demanda, sizeof(demanda), stdin);
                demanda[strcspn(demanda, "\n")] = '\0';
                
                printf("\nAviso de falta registrado! O itinerário da van já foi atualizado para hoje.\n");
                contAusencia++;
                break;
            }
            case 3: {
                printf("[Horários]: Rota da manhã inicia às 06h30. Rota da tarde às 12h10.\n");
                printf("Mantemos uma tolerância padrão de até 2 minutos por portão.\n");
                printf("Somente Escolas: PMBP EMEI, EMEF e CEU.\n");
                contHorarios++;
                break;
            }
            case 4: {
                limparBuffer();
                printf("Mensagem de Urgência. Digite aqui o seu recado:\n");
                fgets(demanda, sizeof(demanda), stdin);
                demanda[strcspn(demanda, "\n")] = '\0';
                
                printf("\nAviso urgente encaminhado diretamente para o painel do motorista!\n");
                contUrgencia++;
                break;
            }
            case 5: {
                printf("Deseja retornar ao menu principal? (Digite 1 para Sim ou 5 para Não): ");
                scanf("%d", &respostaRetorno);
                
                if (respostaRetorno == 1) {
                    opcao = 0; // Altera para continuar no laço do-while
                    printf("\n[Sistema]: Retornando ao menu...\n");
                } else {
                    opcao = 5; // Mantém 5 para sair
                }
                break;
            }
            default: {
                // Requisito de tratamento de entradas incorretas validado pelo tutor
                printf("[AVISO]: Opção inválida! Por favor, escolha de 1 a 5.\n");
                break;
            }
        }

        printf("--------------------------------------------------\n\n");

    } while (opcao != 5);

    // EXIBIÇÃO DO RELATÓRIO FINAL (Módulo bônus de resumo dos atendimentos)
    printf("============= RELATÓRIO DE ACESSOS DA SESSÃO =============\n");
    printf("Consultas de Orçamento: %d\n", contContratar);
    printf("Avisos de Falta: %d\n", contAusencia);
    printf("Consultas de Horários: %d\n", contHorarios);
    printf("Chamados de Urgência: %d\n", contUrgencia);
    printf("==========================================================\n\n");

    printf("A.L.A Transportes agradece o seu contato! Tenha um ótimo dia.\n");

    return 0;
}
