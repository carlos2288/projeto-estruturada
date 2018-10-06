#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <time.h>
struct celula
{
	char carta[51];
	int quantidade;
	struct celula *prox;
};
struct info
{
	char carta[51];
	int coeficiente;
};
int compara(const void *item1,const void *item2)
{
	struct info *n1 = (struct info*) item1;
	struct info *n2 = (struct info*) item2;
	if(n1->coeficiente > n2->coeficiente){return -1;}
	if(n1->coeficiente < n2->coeficiente){return 1;}
	if(n1->coeficiente == n2->coeficiente){return 0;}
}
char menulista(void)
{
	printf("Bem vindo(a) ao simulador de mão inicial Yu-Gi-Oh!\n");
	printf("1. Testar novo Deck\n");
	printf("2. Carregar Deck já salvo\n");
	printf("0. Retornar\n");
	return getch();
}
char submenulista(void)
{
	printf("Deseja salvar como um novo Deck?\n");
	printf("1. Sim\n");
	printf("2. Não\n");
	return getch();
}
char submenu2lista(void)
{
	printf("1. Mostrar a próxima carta\n");
	printf("2. Mostrar as 5 próximas cartas\n");
	printf("3. Mostrar todas as outras cartas\n");
	printf("0. Avançar\n");
	return getch();
}
char submenu3lista(void)
{
	printf("Deseja testar o Deck novamente?\n");
	printf("1. Sim\n");
	printf("2. Não\n");
	return getch();
}
void func(void)
{
	char menulis,submenulis,submenulis2;
	int quantidade = 0;int i = 0,j = 0,k,n;
	struct celula *inicio,*fim,*p,*nha;
	inicio = (struct celula*)malloc(sizeof(struct celula));
	inicio->prox = NULL;
	FILE *fp;
	fim = inicio;
	system("cls");
	printf("Digite o nome das cartas separadas por '_' e suas quantidades\n");
	printf("Digite 'fim' para encerrar, após digitar todas as cartas\n");
	while(1)
	{
		fim->prox = (struct celula*)malloc(sizeof(struct celula));
		nha = fim;
		fim = fim->prox;
		scanf("%s",fim->carta);
		if(strcmp(fim->carta,"fim") == 0)
		{
			fim->prox = NULL;
			break;
		}
		scanf("%d",&fim->quantidade);
		if(fim->quantidade < 1)
		{
			free(fim);
			fim = nha->prox;
			printf("nenhuma carta inserida\n");
		}
		else if(fim->quantidade > 3)
		{
			free(fim);
			fim = nha->prox;
			printf("nenhuma carta inserida, o máximo são 3\n");
		}
		else
		{
			printf("carta inserida com sucesso\n");
			quantidade += fim->quantidade;
		}
		fim->prox = NULL;
	}
	struct info dados[quantidade];
	p = inicio->prox;i = 0;
	srand(time(NULL));
	while(strcmp(p->carta,"fim") != 0)
	{
		j = 0;
		while(j < p->quantidade)
		{
			strcpy(dados[i].carta,p->carta);
			dados[i].coeficiente = rand();
			j++;
			i++;
		}
		p = p->prox;
	}
	p = inicio->prox;
	while(p != NULL)
	{
		nha = p->prox;
		free(p);
		p = nha;
	}
	while(1)
	{
		system("cls");
		submenulis = submenulista();
		if(submenulis == '1')
		{
			fp = fopen("deck.arq","wb");
			fwrite(dados,sizeof(struct info),quantidade,fp);
			fclose(fp);
			fp = fopen("quantidade.arq","wb");
			fwrite(&quantidade,sizeof(int),1,fp);
			fclose(fp);
			printf("Deck salvo com sucesso! \n");
			system("pause");
			break;
		}
		else if(submenulis == '2')
		{
			break;
		}
		else
		{
			printf("Digite um número válido. ");
			system("pause");
		}
	}
	qsort(dados,quantidade,sizeof(struct info),compara);
	i = 0;
	system("cls");
	printf("As primeiras 5 cartas são:\n");
	while(i < 5)
	{
		printf("%d. %s\n",i+1,dados[i].carta);
		i++;
	}
	printf("\n");
	k = i;
	while(1)
	{
		submenulis = submenu2lista();
		printf("\n");
		if(submenulis == '0')
		{
			break;
		}
		else if(submenulis == '1' && i < quantidade)
		{
			printf("A próxima carta é:\n");
			printf("%s\n",dados[i].carta);
			printf("\n");
			i++;
			k = i+5;
		}
		else if(submenulis == '2' && i < quantidade)
		{
			printf("As próximas 5 carta são:\n");
			while(i < k && i < quantidade)
			{
				printf("%s\n",dados[i].carta);
				i++;
			}
			if(i < quantidade)
			{
				printf("Erro: Existem menos de 5 cartas restantes\n");
			}
			printf("\n");
		}
		else if(submenulis == '3' && i < quantidade)
		{
			printf("As cartas restantes são:\n");
			while(i < quantidade)
			{
				printf("%s\n",dados[i].carta);
				i++;
			}
			printf("\n");
		//	break;
		}
		else if(i == quantidade)
		{
			printf("Número máximo de cartas atingido. ");
			system("pause");
			break;
		}
	}
	while(1)
	{
		srand(time(NULL));
		system("cls");
		submenulis2 = submenu3lista();
		if(submenulis2 == '1')
		{
			system("cls");
			i = 0;
			while(i < quantidade)
			{
				dados[i].coeficiente = rand();
				i++;
			}
			qsort(dados,quantidade,sizeof(struct info),compara);
			i = 0;
			printf("As primeiras 5 cartas são:\n");
			while(i < 5)
			{
				printf("%d. %s\n",i+1,dados[i].carta);
				i++;
			}
			printf("\n");
			k = i;
			while(1)
			{
				submenulis = submenu2lista();
				printf("\n");
				if(submenulis == '0')
				{
					break;
				}
				else if(submenulis == '1' && i < quantidade)
				{
					printf("A próxima carta é:\n");
					printf("%s\n",dados[i].carta);
					printf("\n");
					i++;
					k = i+5;
				}
				else if(submenulis == '2' && i < quantidade)
				{
					printf("As próximas 5 carta são:\n");
					while(i < k && i < quantidade)
					{
						printf("%s\n",dados[i].carta);
						i++;
					}
					if(i < quantidade)
					{
						printf("Erro: Existem menos de 5 cartas restantes\n");
					}
					printf("\n");
				}
				else if(submenulis == '3' && i < quantidade)
				{
					printf("As cartas restantes são:\n");
					while(i < quantidade)
					{
						printf("%s\n",dados[i].carta);
						i++;
					}
					printf("\n");
				//	break;
				}
				else if(i == quantidade)
				{
					printf("Número máximo de cartas atingido. ");
					system("pause");
					break;
				}
			}
		}
		else if(submenulis2 == '2')
		{
			printf("Encerrando aplicação. ");
			break;
		}
		else
		{
			printf("Digite um número válido. ");
			break;
		}
	}
	quantidade = 0;
}
void func2(void)
{
	char menulis,submenulis,submenulis2;
	int quantidade = 0;int i = 0,j = 0,k,n;
	FILE *fp;
	fp = fopen("quantidade.arq","rb");
	fread(&quantidade,sizeof(int),1,fp);
	fclose(fp);
	struct info dados[quantidade];
	printf("%d",quantidade);
	fp = fopen("deck.arq","rb");
	fread(dados,sizeof(struct info),quantidade,fp);
	fclose(fp);
	i = 0;
	while(i < quantidade)
	{
		dados[i].coeficiente = rand();
		i++;
	}
	qsort(dados,quantidade,sizeof(struct info),compara);
	i = 0;
	system("cls");
	printf("As primeiras 5 cartas são:\n");
	while(i < 5)
	{
		printf("%d. %s\n",i+1,dados[i].carta);
		i++;
	}
	printf("\n");
	k = i;
	while(1)
	{
		submenulis = submenu2lista();
		printf("\n");
		if(submenulis == '0')
		{
			break;
		}
		else if(submenulis == '1' && i < quantidade)
		{
			printf("A próxima carta é:\n");
			printf("%s\n",dados[i].carta);
			printf("\n");
			i++;
			k = i+5;
		}
		else if(submenulis == '2' && i < quantidade)
		{
			printf("As próximas 5 carta são:\n");
			while(i < k && i < quantidade)
			{
				printf("%s\n",dados[i].carta);
				i++;
			}
			if(i < quantidade)
			{
				printf("Erro: Existem menos de 5 cartas restantes\n");
			}
			printf("\n");
		}
		else if(submenulis == '3' && i < quantidade)
		{
			printf("As cartas restantes são:\n");
			while(i < quantidade)
			{
				printf("%s\n",dados[i].carta);
				i++;
			}
			printf("\n");
		//	break;
		}
		else if(i == quantidade)
		{
			printf("Número máximo de cartas atingido. ");
			system("pause");
			break;
		}
	}
	while(1)
	{
		srand(time(NULL));
		system("cls");
		submenulis2 = submenu3lista();
		if(submenulis2 == '1')
		{
			system("cls");
			i = 0;
			while(i < quantidade)
			{
				dados[i].coeficiente = rand();
				i++;
			}
			qsort(dados,quantidade,sizeof(struct info),compara);
			i = 0;
			printf("As primeiras 5 cartas são:\n");
			while(i < 5)
			{
				printf("%d. %s\n",i+1,dados[i].carta);
				i++;
			}
			printf("\n");
			k = i;
			while(1)
			{
				submenulis = submenu2lista();
				printf("\n");
				if(submenulis == '0')
				{
					break;
				}
				else if(submenulis == '1' && i < quantidade)
				{
					printf("A próxima carta é:\n");
					printf("%s\n",dados[i].carta);
					printf("\n");
					i++;
					k = i+5;
				}
				else if(submenulis == '2' && i < quantidade)
				{
					printf("As próximas 5 carta são:\n");
					while(i < k && i < quantidade)
					{
						printf("%s\n",dados[i].carta);
						i++;
					}
					if(i < quantidade)
					{
						printf("Erro: Existem menos de 5 cartas restantes\n");
					}
					printf("\n");
				}
				else if(submenulis == '3' && i < quantidade)
				{
					printf("As cartas restantes são:\n");
					while(i < quantidade)
					{
						printf("%s\n",dados[i].carta);
						i++;
					}
					printf("\n");
				//	break;
				}
				else if(i == quantidade)
				{
					printf("Número máximo de cartas atingido. ");
					system("pause");
					break;
				}
			}
		}
		if(submenulis2 == '2')
		{
			printf("Encerrando aplicação. ");
			break;
		}
	}
	quantidade = 0;
}
void lista(void)
{
	char menulis,submenulis,submenulis2;
	int quantidade = 0;int i = 0,j = 0,k,n;
	struct celula *inicio,*fim,*p,*nha;
	inicio = (struct celula*)malloc(sizeof(struct celula));
	inicio->prox = NULL;
	FILE *fp;
	fim = inicio;
	while(1)
	{
		system("cls");
		menulis = menulista();
		if(menulis == '0')
		{
			break;
		}
		switch(menulis)
		{
			case '1':
				func();
				system("pause");
				break;
			case '2':
				func2();
				system("pause");
				break;
			default:
				break;
				
			}
	}
}
