#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct bancoD {
    char livro[50];
    char gender[50];
    char descrip[50];
    char autor[50];
    int ano;
}t_bancoD;

void jogo(){
    int menu = 0;
    int i, c, p, qtd = 0, op = 0;
    t_bancoD info[10];
    char nome[20];
    char menu2;

    // Inicio do menu
        printf("~ ~ ~ ~ ~ ~ ~ ~ ~ Biblioteca Raio de Luz ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n");
        printf("Aventure-se em uma biblioteca virtual, sem limites!\n");
        printf("Liberte sua imaginação, crie ou registre livros existentes!\n");
        printf("Veja seus projetos!!\n\n");
        printf("1 - Iniciar Jogo\n");
        printf("2 - Sair\n");
        printf("\n-----------------------------------------------------------\n\n");
        scanf("%d",&menu);
        switch (menu){
            case 1:
                //começo do jogo
                for(c = 1; c <= 100; c+=4){
                    printf("Carregando ... %d %%",c);
                    system("cls");
                }
                system("cls");
                printf("Deseja CRIAR ou REGISTRAR livros?\n\n");
                printf("1 - Criar\n2 - Registrar\n\n");
                printf("---------------------------------\n\n");
                scanf("%d",&op);
                system("cls");
                // Criar livro
                if(op == 1){
                    fflush(stdin);
                    printf("> Digite seu primeiro nome <\n\n");
                    gets(nome);
                    printf("\n> Digite quantos livros deseja criar < \n\n");
                    scanf("%d",&qtd);
                    system("cls");

                    for(i = 1; i <= qtd; i++){
                        printf("Livro %d\n\n",i);
                        fflush(stdin);
                        printf("Nome do livro: ");
                        gets(info[i].livro);
                        printf("Gênero: ");
                        gets(info[i].gender);
                        fflush(stdin);
                        printf("Breve Descrição: ");
                        gets(info[i].descrip);
                        system("cls");
                    }
                        printf("Os %d livros já foram criados\n\n",qtd);
                        printf("Mostrar livros criados?\n\n");
                        printf("s - SIM\n");
                        printf("n - NÃO\n\n");
                        printf("------------------------------\n\n");
                        scanf("%c",&menu2);
                        if(menu2 == 's'){
                            for(p = 1; p <= 100; p+=5){
                                printf("Carregando ... %d %%",p);
                                system("cls");
                            }
                            printf("Livros criados por %s\n\n",nome);
                            for(i = 1; i <= qtd; i++){
                                printf("Livro %d\n",i);
                                printf("Nome: %s\n",info[i].livro);
                                printf("Autor: %s\n",nome);
                                printf("Ano: 2022\n");
                                printf("Gênero: %s\n",info[i].gender);
                                printf("Descrição: %s\n\n",info[i].descrip);
                            }
                            printf("\n");
                            system("pause");
                            system("cls");
                            printf("Obrigado por jogar!\n\nAperte qualquer tecla pra sair\n\n");
                        }
                        else if(menu2 == 'n'){
                            system("cls");
                            printf("Obrigado por jogar!\n\nAperte qualquer tecla pra sair\n\n");
                        }
                        else{
                            system("cls");
                            printf("Insira uma opção válida na próxima!\n\n");
                        }
                }
                // Registrar livro
                else if(op == 2){
                    fflush(stdin);
                    printf("> Digite seu primeiro nome <\n\n");
                    gets(nome);
                    printf("\n> Digite quantos livros deseja registrar < \n\n");
                    scanf("%d",&qtd);
                    system("cls");

                    for(i = 1; i <= qtd; i++){
                        printf("Livro %d\n\n",i);
                        fflush(stdin);
                        printf("Nome do livro: ");
                        gets(info[i].livro);
                        printf("Autor: ");
                        gets(info[i].autor);
                        fflush(stdin);
                        printf("Ano: ");
                        scanf("%d",&info[i].ano);
                        fflush(stdin);
                        printf("Gênero: ");
                        gets(info[i].gender);
                        printf("Breve Descrição: ");
                        gets(info[i].descrip);
                        system("cls");
                    }
                        printf("Os %d livros já foram registrados\n\n",qtd);
                        printf("Mostrar livros registrados?\n\n");
                        printf("s - SIM\n");
                        printf("n - NÃO\n\n");
                        printf("------------------------------\n\n");
                        scanf("%c",&menu2);
                        if(menu2 == 's'){
                            for(c = 1; c <= 100; c+=5){
                                printf("Carregando ... %d %%",c);
                                system("cls");
                            }
                            printf("Livros registrados por %s\n\n",nome);
                            for(i = 1; i <= qtd; i++){
                                printf("Livro %d\n",i);
                                printf("Nome: %s\n",info[i].livro);
                                printf("Autor: %s\n",info[i].autor);
                                printf("Ano: %d\n",info[i].ano);
                                printf("Gênero: %s\n",info[i].gender);
                                printf("Descrição: %s\n\n",info[i].descrip);
                            }
                            printf("\n");
                            system("pause");
                        }
                        else if(menu2 == 'n'){
                            system("cls");
                            printf("Obrigado por jogar!\n\nAperte qualquer tecla pra sair\n\n");
                        }
                        else{
                            system("cls");
                            printf("Insira uma opção válida na próxima!\n\n");
                        }
                }
            break;

            case 2:
                system("cls");
                printf("\nQue pena ;\n\nDigite qualquer botão para fechar\n\n");
            break;

            default:
                system("cls");
                printf("Opção Inválida, insira uma opção válida!\n\n");
        }
}

int main()
{
    setlocale(0, "PORTUGUESE");

    int opf;

    do {
        jogo();
        system("cls");
        printf("Obrigado por jogar!\n\nDeseja jogar novamente?\n\n");
        printf("1 - SIM\n2 - NÃO\n\n");
        printf("-----------------------------------------------\n\n");
        scanf("%d",&opf);
        system("cls");
    }while(opf == 1);
    return 0;
}
