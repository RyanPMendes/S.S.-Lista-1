#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"
int main(){
	int vet[100], n;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&n);
	geraVet(vet,n);
	//printf("Entre com os dados para o vetor:");
	//leiaVetor(vet,n);
	printf("Vetor\n");
	printVet(vet,n);
	printf("Soma do vetor:%d\n",somaVet(vet,n));
	printf("Maior elemento:%d\n",maiorVet(vet,n));
	return 0;
}
