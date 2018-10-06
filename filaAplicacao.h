#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
typedef struct fila{
	char nome[30];
	int posicao;
	struct fila *prox;
}fila;

char menuClinica()
{
	system("cls");
	printf("1. Retirar uma nova senha(normal)\n");
	printf("2. Retirar uma nova senha(preferencial)\n");
	printf("3. Chamar próxima senha\n");
	
	printf("0. sair\n");
	return getch();
}


void aplicativoPrincipal()
{
	
	// variaveis
	char a;
	char nome[30];
	int posicao;
	int posicaoPreferencial;
	int cabine;
	int controlaPref;
	
	fila *inicio;
	fila *percorreFila;
	fila *fim;
	
	fila *inicioPref;
	fila *percorreFilaPref;
	fila *fimPref;
	
	// iniciação das variaveis
	inicio = (fila *)malloc(sizeof(fila));
	inicio->prox = NULL;
	fim = inicio;
	percorreFila = inicio;
	
	
	inicioPref = (fila *)malloc(sizeof(fila));
	inicioPref->prox = NULL;
	fimPref = inicioPref;
	percorreFilaPref = inicioPref;
	
	posicao = 0;
	posicaoPreferencial = 0;	
	controlaPref = 0;
	// codigo
	
	while(1)
	{
		a = menuClinica();
		if (a == '0')
		{
			break;
		}
		switch(a)
		{
			case '1':
				system("cls");
				
				printf("Nome do cliente: ");
				scanf("%s",nome);
				posicao = posicao + 1;
				
				fim->posicao = posicao;
				strcpy(fim->nome,nome);
				
				fim->prox =	(fila *)malloc(sizeof(fila));
				fim = fim->prox;
				fim->prox = NULL;		
				break;
			case '2':
				system("cls");
				
				printf("Nome do cliente: ");
				scanf("%s",nome);
				posicaoPreferencial = posicaoPreferencial + 1;
				
				fimPref->posicao = posicaoPreferencial;
				strcpy(fimPref->nome,nome);
				
				fimPref->prox =	(fila *)malloc(sizeof(fila));
				fimPref = fimPref->prox;
				fimPref->prox = NULL;
						
				break;
			case '3':
				if (controlaPref%3 != 0)
				{
					controlaPref++;
				
					if (percorreFila->prox == NULL)
					{
						if(percorreFilaPref->prox == NULL)
						{
							system("cls");
							printf("Não existem cliente a serem chamdados\n");
							getch();
							break;
						}
						
						else
						{
							
							srand(time(NULL));
							system("cls");
							cabine = rand();
							if(cabine > 10)
							{
								srand(time(NULL));
								cabine = cabine % 10 ;
							}
							if(cabine == 0)
							{
								cabine = 1;
							}
							printf("     PREFERENCIAL    \n\n");
							printf("cliente: %s \n",percorreFilaPref->nome);
							printf("senha:   %d\n",percorreFilaPref->posicao);
							printf("cabine:  %d\n",cabine);
							percorreFilaPref = percorreFilaPref->prox;
							
							getch();
							break;
						}
						break;
					}
					else
					{
						srand(time(NULL));
						system("cls");
						cabine = rand();
						if(cabine > 10)
						{
							srand(time(NULL));
							cabine = cabine % 10 ;
						}
						if(cabine == 1)
						{
							cabine = 1;
						}
						printf("     NORMAL    \n\n");
						printf("cliente: %s\n",percorreFila->nome);
						printf("senha:   %d\n",percorreFila->posicao);
						printf("cabine:  %d\n",cabine);
						percorreFila = percorreFila->prox;
						
						getch();
						break;
					}
				}
				else
				{
					controlaPref++;
					if(percorreFilaPref->prox == NULL)
					{
						if(percorreFila->prox == NULL)
						{
							system("cls");
							printf("Não existem clientes a serem chamados\n");
							getch();
							break;
						}
						else
						{
							srand(time(NULL));
							system("cls");
							cabine = rand();
							if(cabine > 10)
							{
								srand(time(NULL));
								cabine = cabine % 10 ;
							}
							if(cabine == 1)
							{
								cabine = 1;
							}
							printf("     NORMAL    \n\n");
							printf("cliente: %s\n",percorreFila->nome);
							printf("senha:   %d\n",percorreFila->posicao);
							printf("cabine:  %d\n",cabine);
							percorreFila = percorreFila->prox;
							
							getch();
							break;	
						}
					}
					else
					{
						
						srand(time(NULL));
						system("cls");
						cabine = rand();
						if(cabine > 10)
						{
							srand(time(NULL));
							cabine = cabine % 10 ;
						}
						if(cabine == 0)
						{
							cabine = 1;
						}
						printf("     PREFERENCIAL    \n\n");
						printf("cliente: %s\n",percorreFilaPref->nome);
						printf("senha:   %d\n",percorreFilaPref->posicao);
						printf("cabine:  %d\n",cabine);
						percorreFilaPref = percorreFilaPref->prox;
						
						getch();
						break;
				}
			}
			
			default:
				system("cls");
				printf("digite um valor válido\n");
				system("pause");
					
		}
	}
}

