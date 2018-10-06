#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct celula
{
	char carta[51];
	int quantidade;
	struct celula *prox;
};
void pilha(void)
{
	int i = 0,j = 0;
	struct celula *inicio,*fim,*p,*nha;
	inicio = (struct celula*)malloc(sizeof(struct celula));
	inicio->prox = NULL;
	fim = inicio;
	printf("Digite o nome das cartas e suas quantidades\n");
	printf("Digite * para encerrar, após digitar todas as cartas");
	while(strcmp(fim->carta,"*") != 0)
	{
		fim->prox = (struct celula*)malloc(sizeof(struct celula));
		fim = fim->prox;
		fgets(fim->carta,51,stdin);
		scanf("%d",&fim->quantidade);
		if(fim->quantidade == 0)
		{
			strcpy(fim->carta,"0");
			printf("Nenhuma carta inserida\n");
		}
		if(fim->quantidade > 3)
		{
			strcpy(fim->carta,"0");
			printf("Nenhuma carta inserida pois o máximo são 3\n");
		}
		if(fim->quantidade > 0 && fim->quantidade < 4)
		{
			i+=fim->quantidade;
		}
		fim->prox = NULL;
	}
	char cartas[i][51];
	p = inicio->prox;
	while(p != NULL)
	{
		if(strcmp(p->carta,"0") != 0)
		{
			strcpy(cartas[j],p->carta);
		}
		j++;
		p = p->prox;
	}
	p = inicio->prox;
	while(p != NULL)
	{
		nha = p->prox;
		free(p);
		p = nha;
	}
}
