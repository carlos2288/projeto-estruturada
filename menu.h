#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
char menuPrincipal(void)
{
	system("CLS");
  printf("1. Listas\n");
  printf("2. Pilhas\n");
  printf("3. Filas\n");
  //printf("4. hist�rico\n");
  //printf("5. Deslogar\n");
  printf("0. Sair");
  return getch();
}
char subMenu1Lista(void)
{
	system("CLS");
  printf("1. Listas simples\n");
  printf("2. Listas duplamente encadeadas\n");
  printf("3. Listas circulares\n");
  printf("4. Explica��o geral de lista\n");
  printf("5. Aplica��o de listas\n");
  printf("0. Retornar");
  return getch();
}
char subMenu11Lista(void)
{
	system("CLS");
    printf("2. Listas simples com vetores\n");
    printf("3. Listas simples com ponteiros\n");
	printf("0. Retornar");
    return getch();
}
char subMenu12Lista(void)
{
	system("CLS");
    printf("2. Listas duplamente encadeadas com vetores\n");
    printf("3. Listas duplamente encadeadas com ponteiros\n");
	printf("0. Retornar");
    return getch();
}
char subMenu13Lista(void)
{

	system("CLS");
    printf("2. Listas circulares com vetores\n");
    printf("3. Listas circulares com ponteiros\n");
	printf("0. Retornar");
    return getch();
}
char subMenu113Lista(void)
{
	system("cls");
	printf("1. Introdu��o\n");
	printf("2. Declara��o da celula\n");
	// declarar��o da struct
	printf("3. Inicializa��o da c�lula cabe�a\n");
	// declara��o da celula cabe�a e dos ponteiros no main
	printf("4. Preenchimento da lista/Alocando mem�ria\n");
	printf("5. Percorrendo a lista\n");
	printf("6. Retirando elementos\n");
	printf("7. Inserindo elementos\n");
	//printf("8. Liberando mem�ria\n");
	printf("8. Ver tutorial completo\n");
	printf("0. Retornar\n");
	return getch();
}
char subMenu123Lista(void)
{
	system("cls");
	printf("1. Introdu��o\n");
	printf("2. Declara��o da celula\n");
	// declarar��o da strict
	printf("3. Inicializa��o da c�lula cabe�a\n");
	// declara��o da celula cabe�a e dos ponteiros no main
	printf("4. Preenchimento da lista/Alocando mem�ria\n");
	printf("5. Percorrendo a lista\n");
	printf("6. Retirando elementos\n");
	printf("7. Inserindo elementos\n");
	printf("8. Liberando mem�ria\n");
	printf("9. Ver tutorial completo\n");
	printf("0. Retornar\n");
	return getch();
}
char subMenu133Lista(void)
{
	system("cls");
	printf("1. Introdu��o\n");
	printf("2. Declara��o da celula\n");
	// declarar��o da strict
	printf("3. Inicializa��o da c�lula cabe�a\n");
	// declara��o da celula cabe�a e dos ponteiros no main
	printf("4. Preenchimento da lista/Alocando mem�ria\n");
	printf("5. Percorrendo a lista\n");
	printf("6. Retirando elementos\n");
	printf("7. Inserindo elementos\n");
	printf("8. Liberando mem�ria\n");
	printf("9. Ver tutorial completo\n");
	printf("0. Retornar\n");
	return getch();
}


char subMenu2Pilha(void)
{

	system("cls");
	printf("1. Aplica��es\n");
	printf("2. Pilhas com vetores\n");
	printf("3. Pilhas com ponteiros\n");
	printf("4. Explica��o geral de pilha\n");
	printf("0. Retornar\n");
	return getch();
}
char subMenu3Fila(void)
{
	system("cls");
	printf("1. Aplica��es\n");
	printf("2. Filas com vetores\n");
	printf("3. Filas com ponteiros\n");
	printf("4. Explica��o geral de fila\n");
	printf("0. Retornar\n");
	return getch();
}
