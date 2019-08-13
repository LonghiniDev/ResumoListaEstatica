#include "tipos.h"

void buscarElemento(TListaElemento *pE)
{
	if (pE->tamanhoElemento >0)
	{
		int busca;
		
		printf("\n Informe o valor da Busca");
		scanf("%d", &busca);
		
		for (int contador = 0; contador < pE->tamanhoElemento; contador++)
		{
			if (pE->dadosElemento[contador].codElemento == busca)
			{
				printf("Valor Encontrado!");
			}
		}
	}
}
