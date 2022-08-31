#include <stdio.h>
#include "vetlib.h"

int main(){
	int vet[100], n,busca, res;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&n);
	geraVet(vet,n);
	printf("vetor gerado:\n");
	printVet(vet,n);
	printf("valor para buscar:");
	scanf("%d",&busca);
	res = existe(busca, vet, n);
	printf("%d encontrado %d vez(es)\n", busca, res);
	return 0;
}
