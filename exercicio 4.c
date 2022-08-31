#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"

 int main(){
 	int vet[100],n;
 	printf("Qtde de elementos no vetor:");
 	scanf("%d",&n);
 	//geraVet(vet,n);
 	printf("Entre com os dados para o vetor:");
 	leiavetor(vet,n);
 	printf("Qtde de numeros impares:%d\n",qtdImpar(vet,n));
 	return 0;
 	
 }
