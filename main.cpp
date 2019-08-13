#include "tipos.h"

int main()
{
	TListaElemento L;
	
	iniciarElemento(&L);
	
	int opcao;
	
	do
	{
		printf("\n 1 Inserir: ");
		printf("\n 2 Apresentar: ");
		printf("\n 3 Buscar: ");
		printf("\n ---------------- ");
		printf("\n 4 FILA: Desenfileirar: ");
		printf("\n -----------------");
		printf("\n 6 PILHA: PUSH: ");
		printf("\n 5 PILHA: POP: ");
		printf("\n OP: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
			case 1: inserirElemento(&L); break;
			case 2: apresentarElemento(&L); break;
			case 3: buscarElemento(&L); break;
			// FILA
			case 4: desenfileirarElemento(&L); break;
			//PILHA
			case 5: PUSH(&L); break;
			case 6: POP(&L); break;
		}
	}while (opcao != 0);
}
