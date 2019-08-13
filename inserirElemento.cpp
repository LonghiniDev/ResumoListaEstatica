#include "tipos.h"

void inserirElemento(TListaElemento *pE)
{
	if (pE->tamanhoElemento < 10)
	{
		printf("\n Informe o COD do Elemento");
		scanf("%d", &pE->dadosElemento[pE->tamanhoElemento].codElemento);
		
		printf("\n Informe o Nome do Elemento");
		scanf("%d", &pE->dadosElemento[pE->tamanhoElemento].nomeElemento);
		pE->tamanhoElemento++; 
	}
	else
	{
		printf("\n Lista Cheia");
	}
}
