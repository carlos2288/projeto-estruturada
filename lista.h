#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
typedef struct lista{
	int elemento;
	struct lista *prox;
	struct lista *ant;
}tipoListaInteiro;

void listaStruct(){
	printf("typedef struct lista{\n");
	printf("	tipoItem elemento\n");
	printf("	struct lista *prox\n");
	printf("}tipoLista;\n");
}

void listaStructDupla(){
	printf("typedef struct lista{\n");
	printf("	tipoItem elemento\n");
	printf("	struct lista *prox\n");
	printf("  struct lista *ant\n");
	printf("}tipoLista;\n");
}

void listaEncadeadaDeclara(){
  printf("	tipoLista *inicio\n");
  printf("  tipoLista *percorreLista\n");
  printf("	tipoLista *percorreListaAux\n");
  printf("  tipoLista *aux\n");
  printf("  tipoLista *fim\n");

}

void listaEncadeadaInicia(){
  printf("  inicio = (tipoLista *)malloc(sizeof(tipoLista));\n");
  printf("  inicio->prox = NULL;\n");
  printf("  fim = inicio;\n");
}

void listaEncadeadaIncereElementos(){
  printf("  while(condi��o de parada){\n");
  printf("    fim->prox = (tipoLista *)malloc(sizeof(tipoLista))\n");
  printf("    fim = fim->prox;\n");
  printf("    fim->elemento = (valor lido)\n");
  printf("    fim->prox = NULL\n")/
  printf("  }\n");
}

void listaEncadeadaPercorre()
{
	printf("percorreLista = inicio->prox;\n");
	printf("while(percorreLista != NULL){\n");
	printf("	percorreLista->elemento = percorreLista->elemento + 1;\n");
	printf("	percorreLista = percorreLista->prox;\n");
	printf("}\n");
}

void listaEncadeadaElimina()
{
	printf("percorreLista = inicio->prox;\n");
	printf("percorreListaAux = percorreLista->prox;\n");
	printf("while(percorreListaAux->elemento != elemento_a_ser_retirado){\n");
	printf("	percorreListaAux = percorreListaAux->prox;\n");
	printf("	percorreLista = percorreLista->prox;\n");
	printf("}\n");
	printf("percorreLista->prox = percorreListaAux->prox;\n");
	printf("free(percorreListaAux)");
}

void listaEncadeadaInsere()
{
	printf("percorreLista = inicio->prox;\n");
	printf("percorreListaAux = percorreLista->prox;\n");
	printf("tipoLista *novoElemento = (tipoLista *)malloc(sizeof(tipoLista));\n");
	printf("while(percorreLista->elemento != elemento){\n");
	printf("	percorreListaAux = percorreListaAux->prox;\n");
	printf("	percorreLista = percorreLista->prox;");
	printf("}\n");
	printf("percorreLista->prox = novoElemento;\n");
	printf("novoElemento->prox = percorreListaAux;\n");
}


//********************************************************

void listaTeoria(){
	system("cls");
	printf("Lista � uma forma de estrutura de dados abstrata\n");
	getch();
	printf("que visa armazenar varios dados de um mesmo 'tipo'\n");
	getch();
	printf("pode ser tanto por celulas continuas como por apontadoes\n");
	getch();
	printf("Sua principal caracteristica � permitir reorganiza��o\n");
	getch();
	printf("bem como a incers��o e a remo��o de elementos em qualquer ponto\n");
	getch();
	system("cls");
	system("pause");
}
// ***********************************************************************************************************************************************************
void declaraListaEncadeadaStruct(){
	system("cls");
	printf("Para declara��o da celula devemos criar antes a struc que conter� os elementos da lista\n");
	getch();
	printf("essa struct ter� como campos os elementos dos tipos necess�rios e um campo *prox do tipo da struct\n");
	getch();
	printf("*prox - um ponteiro do tipo da struct que guardar� o enderesso de mem�ria do pr�ximo elemento da struct\n");
	getch();
	printf("e deve ser declarada da seguinte forma:\n");
	getch();
	listaStruct();
	getch();
	system("CLS");
	system("PAUSE");
}

void declaracaoListaDuplamenteEncadeada(){
	system("cls");
	printf("Para declarar uma lista duplamente encadeada\n");
	getch();
	printf("usa-se uma estrtura com os elementos a serem armazenados\n");
	getch();
	printf("e dois ponteiros:prox e ant\n");
	getch();
	printf("prox - armazena o enderesso de mem�ria do proximo elemento da lista\n");
	getch();
	printf("ant - armazena o enderesso de mem�ria do elemento anterior da lista\n");
	getch();
	printf("Ex�mplo: \n");
	printf("\n");
	getch();
	printf("typedef struct lista{\n");
	getch();
	printf("  tipoItem item1;\n");
	getch();
	printf("  tipoItem item2;\n");
	getch();
	printf("  struct lista *prox;\n");
	getch();
	printf("  struc lista *ant;\n");
	getch();
	printf("}tipoLista;\n");
	system("PAUSE");
	system("CLS");
}

void declaracaoListaEncadeadaCelulacabeca()
{
	system("cls");
	printf("Depois da struct ja declarada precisamos declarar os ponteiros que usaremos na grande maioria dos porcessos\n");
	getch();
	printf("esses ponteiros teriam todos o tipo da struct que determina a lista e seriam, *inicio, *fim, *percorreLista, *percorreListaAux, *aux\n");
	getch();
	printf("*inicio -  ter� fun��o de sempre armazenar o enderesso de mem�ria do inicio da lista\n");
	getch();
	printf("*fim - ter� fun��o de sempre armazenar o ederesso de mem�ria do ultimo elemento da lista\n");
	getch();
	printf("*percorreLista - ter� seu endere�o de memoria alterado contantemente a fim de 'ser' o elemento da lista a qual o temos acesso\n");
	getch();
	printf("*percorreListaAux - auxiliar� o percorreLista em processos como incer��o e remo��o de elementos e se comportar� de maneira semelhante\n");
	getch();
	printf("*aux - tem fun��o de armazenar os endere�os de mem�ria a serem eliminados ou acrecentados a lista\n");
	getch();
	printf("e sua declara��o no main pode ser feita da seguinte forma:\n");
	getch();
	printf("void main(){\n");
	getch();
	listaEncadeadaDeclara();
	getch();
	printf("}\n");
	getch();
	system("cls");
	system("pause");
	system("cls");
	printf("Em seguida precisamos 'iniciar' a celula cabe�a(lista) atribuindo os valores iniciais dos ponteiros declarados anteriormente(em espec�fico o *inicio e o *fim)\n");
	getch();
	printf("os procedimento realizados no main ser�o os seguintes:\n");
	getch();
	printf("inicio = (tipoLista *)malloc(sizeof(tipoLista)) - Nessa linha atribui-se ao ponteiro inicio um enderesso aleat�rio com capacidade para um tipoLista\n");
	getch();
	printf("inicio->prox = NULL - Nessa linha atribui-se ao campo prox da struct inicio um enderesso nulo(j� que o campo prox � um ponteiro ele guarda um enderesso)\n");
	getch();
	printf("fim = inicio - com essa nota��o eu fa�o o enderesso do fim ser o mesmo do inicio, com isso eu fa�o com que eles sejao iguais\n");
	getch();
	printf("a declara��o no main seria da seguinte forma:\n ");
	getch();
	printf("void main(){\n");
	getch();
	listaEncadeadaInicia();
	printf("}\n");
	getch();
	system("cls");
	system("pause");

}

  void iniciaListaEncadeada(){
	system("cls");
	printf("com a seguinte lista devidamente iniciada:\n");
	getch();
	listaStruct();
	printf("void main(){\n");
	listaEncadeadaDeclara();
	getch();
	printf("  // fa�a:\n");
	getch();
	printf("  inicio = (tipoLista *)malloc(sizeof(tipoLista)); // inicio recebe o um enderesso com capacidade para um elemento tipoLista\n");
	getch();
	printf("  inicio->prox = NULL; // O endere�o de memoria contido no campo prox da celula est� vazio\n");
	getch();
	printf("  fim = inicio // O endere�o de fim se torna o mesmo do inicio logo inicio e fim sao o mesmo indicando que a lista est� fazia\n");
	getch();
	
    printf("}\n");
	getch();
	system("cls");
	system("pause");

}

void preenchimentoListaEncadeada(){
	system("cls");
	printf("Prencher uma lista equivale a adicionar elementos no seu final de forma concecutiva\n");
	getch();
	printf("para tanto � nessess�rio que o todo o procedimento at� a inicializa��o dos ponteiro (inicio,fim,percorreLista e etc...) j� tenha sido feito\n");
	getch();
	printf("para adicionar um elemento ao final da lista realizaremos o seguinte processo: \n");
	getch();
	printf("	-criaremos um novo enderesso de mom�ria para um tipo lista e o guardaremos no campo *prox do ponteiro fim\n");
	getch();
	printf("	-fazemos o ponteiro fim receber o endere�o guardado em seu campo *prox(enderesso que teremos acado de criar)\n");
	getch();
	printf("	-fazemos as atribui��es nos campos do ponteiro *fim relacionados aos elementos guardados(seja essa atribui��o feita por leitura de dados ou por calculos efetuados no programa)\n");
	getch();
	printf("	-por fim fazemos o compo *prox do novo enderesso de fim receber NULL essa nota��o nos faz termos como saber que a lista chegou ao fim pois o campo prox do ponteiro que guarda o enderesso final da lista sempre deve apontar para um enderesso vazio\n");
	getch();
	printf("	-pode-se colocar essa serie de comandos dentro de um la�o de repeti��o para inserir varios elemento em sequancia\n");
	getch();
	printf("a serguir um ex�mplo de como realizar as sguintes opera��es:\n");
	getch();
	listaEncadeadaIncereElementos();
	getch();
	system("cls");
	system("pause");

}

void percorrerListaEncadeada()
{
	system("cls");
	printf("Percorrer uma lista � um procedimento muito importante e muito �til, pois permite ao programador ter acesso aos elementos ou celulas de maneira individual e realizar procedimentos com os mesmos\n");
	getch();
	printf("Para se percorrer uma lista � preciso primeirio que ela exista e n�o esteja vazia ou seja os procedimentos dos t�picos 1,2,3 e 4 j� devem estar implementados no seu c�digo\n");
	getch();
	printf("	-primeirio fazemos o enderesso do ponteiro *percorreLista ser igual ao enderesso guardado no campo *prox do ponteiro inicio, ou seja faremos os enderesso do percorreLista ser o mesmo do primeiro elmento da lista\n");
	getch();
	printf("	-colocaremos os pr�ximos comando dentro de um while  que ter� como condi��o de parada que o ponteiro PercorreLista seja igual ao NULL ou seja a lista tenha chegado ao fim\n");
	getch();
	printf("	 (essa � a condi��o de parada usada na maioria dos casos mas pode ser alterada de acordo com a nessecidade, inclusive o la�o de repeti��o tamb�m pode ser alterado dependendo do objetivo)\n");
	getch();
	printf("	-faremos todo o procedimento desejado com a celula(somar, capturar valor, modoficar string...)\n");
	getch();
	printf("	-como ultima a��o no while faremos o percorreLista receber o valor contido em seu campo *prox, assim iremos para a proxima celula da lista e realizaremos as mesmas opera��es\n");
	getch();
	printf("	-a seguir um exemplo de como fazer a implementa��o dentro do main:\n");
	getch();
	listaEncadeadaPercorre();
	getch();
	system("cls");
	system("pause");
}

void retirarElementosListaEncadeada()
{
	
	system("cls");
	printf("Retirar elementos da lista � um procedimento muito usado principalmente com listas de dados mut�veis, como por ex�mplo bancos de dados\n");
	getch();
	printf("o procedimento de retirada de um elemento (celula) de uma lista consiste em ligar o endere�o do elemento anterior ao elemento a ser retirado ao proximo elemetento(ap�s a celula eliminada)\n");
	getch();
	printf("por fim devemos apagar o endere�o de mem�ria da celula eliminada pois esta estar� inacessivel e nao ter� fun��o alguma al�m de ocupar a mem�ria da m�quina\n");
	getch();
	system("cls");
	printf("A fim de realizar esse processo usaremos as seguintes estruturas:\n");
	getch();
	printf("	-um ponteiro percorreLista -> este ter� fun��o de gardar o endere�o anterior ao do elemento a ser eliminado\n");
	getch();
	printf("	-um ponteiro percorreListaAux -> ter� fun��o de gardar o anderesso do elemento a ser eliminado\n");
	getch();
	printf("	-usaremos um while para achar o termo a ser retirado\n");
	getch();
	printf("	-faremos o enderesso do compo prox de percorreLista que antes gardava o enderesso de percorreListaAux receber o enderesso do campo prox de percorreListaAux\n");
	getch();
	printf("	ou seja faremos o campo prox do percorreLista 'atualizar' seu valor para o endere�o do proximo do proximo\n");
	getch();
	printf("	-por fim usaremos o comando free() para apagar da memoria o termo que ja foi desligado da lista\n");
	getch();
	printf("	observe o ex�mplo a seguir:\n");
	listaEncadeadaElimina();
	getch();
	system("cls");
	system("pause");
}
void teste()
{
	printf("� assim mesmo que t� dando");
}

void introducaoLisaEncadeada()
{
	system("cls");
	printf("%4s","Iniciaremos com uma breve revisao dos conceitos de ponteiros e estrturas pois estes ser�o muito importantes\n");
	getch();
	printf("ponteiro - uma variavel que no lugar de guardar um valor guarda um endere�o de mem�ria. identificada pelo '*' antes do nome em sua declara��o\n");
	getch();
	printf("struct (estrutura) - Uma forma de atravez dos tipos primititos criar 'novos tipos'(estruturas) tendo como base os tipos primitivos e ou estrutras ja declaradas\n");
	getch();
	printf("obs - uma struct pode ter um campo da struct que est� sendo declarada\n");
	getch();
	printf("obs2 - o operador -> � usado para acessar um campo da struct ex: teste->elemento - estou acessando o campo elemento de uma variavel do tipo struct chamada teste\n");
	getch();
	printf("obs3 - declara��o de struct\n");
	getch();
	printf("typedef struct nome{\n");
	printf("	tipo_da_variavel variavel // isso seria um campo das struct, pode-se declarar tantos quanto necess�rio\n");
	printf("	tipo_da_variavel variavel\n");
	printf("}novo_nome;\n");
	getch();
	printf("obs4 - o opedrador typedef muda o 'nome' da struct para 'novo_nome'\n");
	getch();
	system("cls");
	printf("Uma lista encadeada por ponteiros tem como base uma struct que cont�m os elementos de uma c�lula\n" );
	getch();
	printf("e um campo *prox que armazenar� o endere�o do pr�ximo elemento da lista\n");
	getch();
	printf("� importante salientar que nesse tipo de lista os endere�os des mem�ria nao sao continuos ou seja podem estar espalhados pelo sistema\n");
	getch();
	printf("Al�m disso � crucial deixar claro que nesse tipo de lista as celulas nao sao variaveis mas sim enderessos de mem�ria o qual usamos os ponteiros para acessar(logo um ponteiro ao decorrer do codigo pode assumir o enderesso de memoria de v�ria celulas diferentes)\n");
	getch();
	printf("obs5 -Fazendo um ponteiro receber um enderesso eu posso manipular os valores guaradados nesse enderesso livremente\n");
	getch();
	system("cls");

	system("pause");
}

void incerssaoElmentosListaEncadeada()
{
	// *-*-**-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
	system("cls");
	printf("Uma das principais caracteristicas da lista � que ela permite a incer��o de elementos em qualquer ponto dessa forma ela permite outras a��o como r�-organiza��o j� que reordenar � retirar uma celula de uma posi��o e adiciona-la em outra\n");
	getch();
	printf("� importante ressaltar que para essa opera��o � preciso que que a lista exista e esteja j� com alguns elementos ou seja, os procedimentos dos t�picos 1 at� 4 j� devem estar implementados\n");
	getch();
	printf("Para inserir uma nova celula em uma lista normalmente precisamos primeiro escolher a possi��o em que a nova c�lula ser� incerinda\n");
	getch();
	printf("Ou seja informar ap�s qual c�lula o novo elemento da lista ser� inserido\n");
	getch();
	printf("Na pr�tica faremos o campo prox do elemento que informamaosreceber o endere�o do novo elemento e o campo prox do novo elemento receber o endere�o da c�lula que ficaria ap�s a c�lula informada originalmente\n");
	getch();
	printf("para isso vamos usar/definir as seguintes variaveis:\n");
	getch();
	printf("	-Um novo elemento do tipoLista que se chamar� novoElemento(para esse precisaremos criar um novo espa�o)\n");
	getch();
	printf("	-Um elemento que representar� o elemento anterior ao inserido\n");
	getch();
	printf("	-Um perorreLista e um percorreListaAux que guardar�o respectivamente o enderesso do elemento anterior e o proximo em rela��o ao novo elemento\n");
	getch();
	printf("	-Por fim faremos os compo prox do percorreLista receber o endere�o do novo elemento e o campo prox do novo elemento recebero percorreListaAux");
	getch();
	printf("como ex�mplo temos o algoritimo a baixo\n");
	getch();
	listaEncadeadaInsere();
	getch();
	system("cls");
	system("pause");
}
