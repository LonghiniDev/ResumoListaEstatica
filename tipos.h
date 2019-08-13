#ifndef _tipos_
#define _tipos_

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tipoElemento
{
	int codElemento;
	char nomeElemento[45];
}TElemento;

typedef struct tipoListaElemento
{
	TElemento dadosElemento[10];
	int tamanhoElemento;
}TListaElemento;

void iniciarElemento(TListaElemento *pE);
void inserirElemento(TListaElemento *pE);
void apresentarElemento(TListaElemento *pE);
void buscarElemento(TListaElemento *pE);

//Fila
void desenfileirarElemento(TListaElemento *pE);

//Pilha
void PUSH(TListaElemento *pE);
void POP(TListaElemento *pE);

#endif

