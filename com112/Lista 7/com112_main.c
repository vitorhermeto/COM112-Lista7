#include <stdio.h>
#include <stdlib.h>
#include "com112_arvoreAVL.h"



int menu(){
	int op;
	printf("\n----------------------------------------------------------------\n                           Menu:\n1.Criar arvore\n2.Liberar arvore\n3.Inserir elemento\n4.Remover elemento\n5.Consultar elemento\n6.Imprimir percurso pre-ordem\n7.Imprimir percurso em ordem\n8.Imprimir percurso pos-ordem\n9.Altura da arvore\n10.Total de elementos\n0.Sair\n----------------------------------------------------------------\nopcao selecionada:");
	scanf("%d", &op);
	return op;
}

int main(){
	int op, alt, total, valor, x;
	ArvAVL* raiz;
	
	do{
		op=menu();
		switch(op){
			case 1:
				raiz = cria_ArvAVL();
				break;
			case 2:
				libera_ArvAVL(raiz);
				break;
			case 3:
				printf("\nElemento:");
				scanf("%d", &valor);
				insere_ArvAVL(raiz, valor);
				break;
			case 4:
				printf("\nElemento:");
				scanf("%d", &valor);
				remove_ArvAVL(raiz, valor);
				break;
			case 5:
				printf("\nElemento:");
				scanf("%d", &valor);
				x = consulta_ArvAVL(raiz, valor);
				if (x == 1)
				printf("Status: Existente");
				else
				printf("Status: Inexistente");
				break;
			case 6:
				preOrdem_ArvAVL(raiz);
				break;
			case 7:
				emOrdem_ArvAVL(raiz);
				break;
			case 8:
				posOrdem_ArvAVL(raiz);
				break;
			case 9:
				alt = altura_ArvAVL(raiz);
				printf("\nAltura=%d", alt);
				break;
			case 10:
				total = totalNO_ArvAVL(raiz);
				printf("\nTotal de Elementos=%d", total);
				break;
		}
	}while(op!=0);
	 
	return 0;
}
