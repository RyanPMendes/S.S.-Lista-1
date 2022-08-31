#include<stdio.h>
#include<stdlib.h>
#include "vetlib.h"

int main(){
	int vet[5], i, res=0;
	printf("Entre com as Notas:");
	leiaVetor(vet, 5);
	maiorVet(vet, 5);
	menorVet(vet, 5);
}
