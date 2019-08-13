#include "tipos.h"

void apresentarElemento(TListaElemento *pE)
{
	if (pE->tamanhoElemento > 0)
	{
		printf("\n Elementos:");
		for (int contador = 0; contador < pE->tamanhoElemento; contador++)
		{
			printf("\n COD: ", pE->dadosElemento[contador].codElemento);
			printf("\n NOME: ", pE->dadosElemento[contador].nomeElemento);
		}
	}
	else
	{
		printf("\n Lista Vazia");
	}
}
