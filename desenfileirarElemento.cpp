#include "tipos.h"

void desenfileirarElemento(TListaElemento *pE)
{
	if (pE->tamanhoElemento > 0)
	{
		for (int contador = 0; contador < pE->tamanhoElemento-1; contador++)
		{
			pE->dadosElemento[contador] = pE->dadosElemento[contador+1];
		}
		pE->tamanhoElemento--;
	}
	else
	{
		printf("\n Fila Vazia");
	}
}
