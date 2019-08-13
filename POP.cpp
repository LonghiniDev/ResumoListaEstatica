#include "tipos.h"

void POP(TListaElemento *pE)
{
	int valor;
	valor = pE->dadosElemento[pE->tamanhoElemento].codElemento;
	pE->tamanhoElemento--;
}
