#include <stdlib.h>
#include <stdio.h>

typedef struct noPilha_ noPilha; 

struct noPilha_ {
	int valor;
	noPilha *prox;
};

void inserir(noPilha** cabeca, int newValue){
	noPilha *newNo = malloc(sizeof(noPilha));
	(*newNo).valor = newValue;
	(*newNo).prox = *cabeca;
	*cabeca = newNo;
}

noPilha* remover(noPilha **cabeca){
	noPilha *removedNo = *cabeca;
	*cabeca = (*(*cabeca)).prox;
	return removedNo;
}

void main(){
	noPilha *cabeca;

	inserir(&cabeca, 2);

	printf("%d", (*cabeca).valor);

	noPilha *removedNo = remover(&cabeca);
	printf("\n %d", (*removedNo).valor);
}