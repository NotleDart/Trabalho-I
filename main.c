#include <stdio.h>
#include <string.h>
#include "lista.h"

int main()
{
    No *tarefas = NULL;
    No *supermercado = NULL;
    No *contatos = NULL;

    int menu;
    int op;
    int posicao;
    char texto[100];

    do
    {
        printf("\n=== ORGANIZADOR PESSOAL ===\n");
        printf("1 - Tarefas\n");
        printf("2 - Supermercado\n");
        printf("3 - Contatos\n");
        printf("0 - Sair\n");

        scanf("%d", &menu);
        getchar();

        if(menu == 1)
        {
            do
            {
                printf("\n--- TAREFAS ---\n");
                printf("1 - Inserir inicio\n");
                printf("2 - Inserir fim\n");
                printf("3 - Inserir na posicao\n"); 
                printf("4 - Remover\n");            
                printf("5 - Mostrar\n");            
                printf("0 - Voltar\n");

                scanf("%d", &op);
                getchar();

                switch(op)
                {
                    case 1:
                        printf("Digite a tarefa: "); 
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        inserirInicio(&tarefas, texto);
                        break;
                    case 2:
                        printf("Digite a tarefa: ");
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        inserirFim(&tarefas, texto);
                        break;
                    case 3: 
                        printf("Digite a posicao: ");
                        scanf("%d", &posicao);
                        getchar();
                        printf("Digite a tarefa: ");
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        inserirPosicao(&tarefas, texto, posicao);
                        break;
                    case 4:
                        printf("Digite a tarefa para remover: ");
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        removerItem(&tarefas, texto);
                        break;
                    case 5:
                        mostrarLista(tarefas);
                        break;
                }
            }while(op != 0);
        }

        if(menu == 2)
        {
            do
            {
                printf("\n--- SUPERMERCADO ---\n");
                printf("1 - Inserir inicio\n");
                printf("2 - Inserir fim\n");
                printf("3 - Inserir na posicao\n");
                printf("4 - Remover\n");
                printf("5 - Mostrar\n");
                printf("0 - Voltar\n");

                scanf("%d", &op);
                getchar();

                switch(op)
                {
                    case 1:
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        inserirInicio(&supermercado, texto);
                        break;
                    case 2:
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        inserirFim(&supermercado, texto);
                        break;
                    case 3:
                        printf("Digite a posicao: ");
                        scanf("%d", &posicao);
                        getchar();
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        inserirPosicao(&supermercado, texto, posicao);
                        break;
                    case 4:
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        removerItem(&supermercado, texto);
                        break;
                    case 5:
                        mostrarLista(supermercado);
                        break;
                }
            }while(op != 0);
        }

        if(menu == 3)
        {
            do
            {
                printf("\n--- CONTATOS ---\n");
                printf("1 - Inserir inicio\n");
                printf("2 - Inserir fim\n");
                printf("3 - Inserir na posicao\n");
                printf("4 - Remover\n");
                printf("5 - Mostrar\n");
                printf("0 - Voltar\n");

                scanf("%d", &op);
                getchar();

                switch(op)
                {
                    case 1:
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        inserirInicio(&contatos, texto);
                        break;
                    case 2:
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        inserirFim(&contatos, texto);
                        break;
                    case 3:
                        printf("Digite a posicao: ");
                        scanf("%d", &posicao);
                        getchar();
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        inserirPosicao(&contatos, texto, posicao);
                        break;
                    case 4:
                        fgets(texto, 100, stdin);
                        texto[strlen(texto)-1] = '\0';
                        removerItem(&contatos, texto);
                        break;
                    case 5:
                        mostrarLista(contatos);
                        break;
                }
            }while(op != 0);
        }

    }while(menu != 0);

    liberarLista(&tarefas);
    liberarLista(&supermercado);
    liberarLista(&contatos);

    return 0;
}
