#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct bancoD {
    char livro[50];
    int lanc[50];
    char autor[50];
    char edit[50];
}t_bancoD;

int main()
{
    setlocale(0, "PORTUGUESE");
    int menu = 0;
    int i, qtd = 0;
    t_bancoD info[10];
    char nome[20];
    char menu2;

    printf("~ ~ ~ ~ Biblioteca Raio de Luz ~ ~ ~ ~\n\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Sair\n\n");
    scanf("%d",&menu);
    switch (menu){
        case 1:
            system("cls");
            fflush(stdin);
            printf("Digite seu primeiro nome\n\n");
            gets(nome);
            printf("\nDigite quantos livros deseja registrar \n\n");
            scanf("%d",&qtd);
            system("cls");

            for(i = 1; i <= qtd; i++){
                printf("Livro %d\n\n",i);
                fflush(stdin);
                printf("Digite o nome do livro: ");
                gets(info[i].livro);
                printf("Ano de lançamento: ");
                scanf("%d",&info[i].lanc);
                fflush(stdin);
                printf("Autor: ");
                gets(info[i].autor);
                printf("Editora: ");
                gets(info[i].edit);
                system("cls");
            }
            printf("Os %d livros já foram registrados\n\n",qtd);
            printf("Mostrar livros registrados?\n");
            printf("s - SIM\n");
            printf("n - NÃO\n\n");
            scanf("%c",&menu2);
            switch (menu2){
                case 's':
                    system("cls");
                    printf("Livros registrados por %s\n\n",nome);
                    for(i = 1; i <= qtd; i++){
                        printf("Livro %d",i)
                        printf("Nome: %s\n",info[i].livro);
                        printf("Ano de lançamento: %s\n",info[i].lanc);
                        printf("Autor: %s\n",info[i].autor);
                        printf("Editora: %s\n\n",info[i].edit);
                    }
                break;

                case 'n':
                    printf("\nObrigado por jogar!\nAperte qualquer botão pra sair\n\n");
                break;

                default:
                    printf("\nInsira uma opção válida!\n\n");
        break;

        case 2:
            printf("\nVolte sempre!\nDigite qualquer botão para fechar\n\n");
        break;


    }
}
}
