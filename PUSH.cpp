#include "tipos.h"

void PUSH(TListaElemento *pE)
{
	TElemento valor;
	printf("\n Informe o Valor: ");
	scanf("%d", &valor.codElemento);
	
	pE->tamanhoElemento++;
	pE->dadosElemento[pE->tamanhoElemento] = valor;
}
