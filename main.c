#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "lista.h"
#include "menu.h"
#include "filaAplicacao.h"
#include "lista2.h"
/**
    Desenvolvedores: Francisco Italo Guedes, Carlos Jorge de Castro
    versao: 24.0
*/
void main()
{
	setlocale(LC_ALL,"Portuguese");
	printf("iai troxas\n")
	char vMenuPrincipal;
	char vSubMenu1;
	char vSubmenu2;
	char vSubmenu3;
	// menu principal
	while(1)
    {
		printf("pão\n");
        vMenuPrincipal = menuPrincipal();
        if(vMenuPrincipal == '0')
        {
            break;
        }
        switch(vMenuPrincipal)
        {
        case '1':
            // submenu das 1listas
            while(1)
            {
                vSubMenu1 =subMenu1Lista();
                if(vSubMenu1 == '0')
                {
                    break;
                }
                switch(vSubMenu1)
                {
                case '1':
                    //submenu das11 listas simples
                    while(1)
                    {
                          vSubmenu2 = subMenu11Lista();
                        if(vSubmenu2 == '0')
                        {
                            break;
                        }
                        switch(vSubmenu2)
                        {
                        case '1':
                            break;
                        case '2':
                            system("cls");
                            printf("Em desenvolvimento\n");
                            system("PAUSE");
                            break;
                        case '3':
                            // SUBMENU 113 LISTA SIMPLES ENCADEADA POR PONTEIROS
                            while(1)
                            {
                                vSubmenu3 = subMenu113Lista();
                                if(vSubmenu3 == '0')
                                {
                                    break;
                                }
                                switch(vSubmenu3)
                                {
                                case '1':
                                    introducaoLisaEncadeada();
                                    break;
                                case '2':
                                    declaraListaEncadeadaStruct();
                                    break;
                                case '3':
                                    declaracaoListaEncadeadaCelulacabeca();
                                    break;
                                case '4':
                                   preenchimentoListaEncadeada();
                                    break;
                                case '5':
                                    percorrerListaEncadeada();
                                    break;
                                case '6':
                                    retirarElementosListaEncadeada();
                                    break;
                                case '7':
                                    incerssaoElmentosListaEncadeada();
                                    break;
                                case '8':
                                     /*introducaoLisaEncadeada();
                                     declaraListaEncadeadaStruct();
                                     declaracaoListaEncadeadaCelulacabeca();
                                     iniciaListaEncadeada();
                                     preenchimentoListaEncadeada();
                                     percorrerListaEncadeada();
                                     retirarElementosListaEncadeada();
                                     incerssaoElmentosListaEncadeada();*/
                                    break;
                               /* case '9':
                                    break;*/
                                default:
                                    system("cls");
                                    printf("digite um lavor válido\n");
                                    system("pause");
                                    break;

                                }
                            }
                            break;
                        default:
                            system("cls");
                            printf("digite um lavor válido\n");
                            system("pause");
                        }
                        }

                    break;
                    //Submenu das listas duplamente encadeadas
                case '2':
                    while (1)
                    {
                        vSubMenu1 = subMenu12Lista();
                        if(vSubMenu1 == '0')
                        {
                            break;
                        }
                        switch(vSubMenu1)
                        {
                        case '1':
                            system("cls");
                            printf("Em desenvolvimento\n");
                            system("PAUSE");
                            break;
                        case '2':
                            system("cls");
                            printf("Em desenvolvimento\n");
                            system("PAUSE");
                            break;
                        case '3':
                            while(1)
                            {
                                vSubmenu2 = subMenu123Lista();
                                if(vSubmenu2 == '0')
                                {
                                    break;
                                }
                                switch(vSubmenu2)
                                {
                                case '1':
                                    break;
                                case '2':
                                    break;
                                case '3':
                                    break;
                                case '4':
                                    break;
                                case '5':
                                    break;
                                case '6':
                                    break;
                                case '7':
                                    break;
                                case '8':
                                    break;
                                case '9':
                                    break;
                                default:
                                    system("cls");
                                    printf("digite um valor válido\n");
                                    getch();
                                }
                            }
                            break;
                        default:
                            system("cls");
                            printf("Digite um valor válido\n");
                            system("pause");
                        }
                    }
                    break;
                case '3':
                    while(1)
                    {
                        vSubmenu2 = subMenu13Lista();
                        if(vSubmenu2 == '0')
                        {
                            break;
                        }
                        switch(vSubmenu2)
                        {
                            case '1':
                                break;
                            case '2':
                                break;
                            case '3':
                                while(1)
                                {
                                    vSubmenu3 = subMenu133Lista();
                                    if(vSubmenu3 ==  '0')
                                    {
                                        break;
                                    }
                                    switch(vSubmenu3)
                                    {
                                    case '1':
                                        break;
                                    case '2':
                                        break;
                                    case '3':
                                        break;
                                    case  '4':
                                        break;
                                    case '5':
                                        break;
                                    case '6':
                                        break;
                                    case '7':
                                        break;
                                    case '8':
                                        break;
                                    case '9':
                                        break;
                                    default:
                                        system("cls");
                                        printf("digite um valor válido\n");
                                        getch();

                                    }
                                }
                                break;
                            default:
                                system("cls");
                                printf("digite um valor válido\n");
                                getch();
                        }
                    }
                    break;
                case '4':
                    listaTeoria();
                    break;
                case '5':
                	lista();
                	break;
                default:
                    system("cls");
                    printf("digite um valor válido\n");
                    system("pause");
                }
            }
            break;
        case '2':
           while(1)
           {
               vSubMenu1 = subMenu2Pilha();
               if(vSubMenu1 == '0')
               {
                   break;
               }
               switch(vSubMenu1)
               {
               case '1':
               		system("cls");
               		printf("Projeto implementado no proteus\n");
               		getch();
                   break;
               case '2':
                   break;
               case '3':
                   break;
               case '4':
                   break;
               default:
                    system("cls");
                    printf("digite um valor válido\n");
                    system("pause");

               }
           }

            break;
        case '3':
           while(1)
           {
               vSubMenu1 = subMenu3Fila();
               if(vSubMenu1 == '0')
               {
                   break;
               }
               switch(vSubMenu1)
               {
               case '1':
                   aplicativoPrincipal();
                    system("pause");
                    break;
               case '2':
                   system("cls");
                    printf("Em desenvolvimento\n");
                    system("pause");
                    break;
               case '3':
                   system("cls");
                    printf("Em desenvolvimento\n");
                    system("pause");
                    break;
               case '4':
                    system("cls");
                    printf("Em desenvolvimento\n");
                    system("pause");
                    break;
               default:
                   system("cls");
                    printf("digite um valor válido\n");
                    system("pause");

               }
           }
            break;
        default:
            system("cls");
            printf("digite um valor válido\n");
            getch();
        }
    }

}
