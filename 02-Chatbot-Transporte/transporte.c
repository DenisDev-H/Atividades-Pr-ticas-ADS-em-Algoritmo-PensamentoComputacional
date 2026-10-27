#include <stdio.h>

int main() {
    // Declaração de variáveis e contadores
    int opcao = 0;
    char demanda[200];
    int contContratar = 0;
    int contAusencia = 0;
    int contHorarios = 0;
    int contUrgencia = 0;

    // Loop enquanto a opção for diferente de 5
    while (opcao != 5) {
        printf("\n=== Chatbot de Atendimento Transporte Escolar - Tio Denis ===\n");
        printf("1 - Quero Contratar / Orçamento\n");
        printf("2 - Avisar que o aluno vai faltar\n");
        printf("3 - Horários e Itinerários\n");
        printf("4 - Falar com o Motorista (Urgência)\n");
        printf("5 - Encerrar Atendimento\n");
        printf("Digite uma opção desejada: ");
        
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite as seguintes informações: Nome do Aluno, horário de estudos, nome da Escola e se é atendimento particular ou gratuito: ");
            scanf(" %[^\n]s", demanda);
            printf("Sucesso! Seus dados foram encaminhados. Entraremos em contato com o orçamento em breve.\n");
            contContratar++;
        } 
        else if (opcao == 2) {
            printf("Por favor, digite o motivo da falta/ausência: ");
            scanf(" %[^\n]s", demanda);
            printf("Aviso de falta registrado! O itinerário da van já foi atualizado para hoje.\n");
            contAusencia++;
        } 
        else if (opcao == 3) {
            printf("Horários atendidos nas Escolas: Manhã, Tarde e Integral.\n");
            printf("Somente Escolas PMSP, EMEI, EMEF e CEU.\n");
            contHorarios++;
        } 
        else if (opcao == 4) {
            printf("Mensagem de Urgência. Digite aqui o seu recado: ");
            scanf(" %[^\n]s", demanda);
            printf("Aviso urgente encaminhado diretamente para o painel do motorista!\n");
            contUrgencia++;
        } 
        else if (opcao == 5) {
            printf("A.L.A Transportes agradece o seu contato.\n");
        } 
        else {
            printf("Opção Inválida! Digite de 1 a 5.\n");
        }
    }

    printf("Fim do atendimento.\n");
    return 0;
}