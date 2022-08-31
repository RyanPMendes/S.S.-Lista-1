#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"

void main(){
	int num,adv;
	printf("Insira a quantidade de numeros para serem sorteados:");
	scanf("%d",&num);
	int vet[num];
	geravet(vet,num);
	printf("\n\n Agora digite um numero:");
	scanf("%d",&adv);
	if(advinha(vet,num,adv)==1){
		printf("O numero %d foi sorteado!Parabens!\n\n",adv);
		printvet(vet,num);
	}
	else{
		printf("O numero %d nao foi sorteado!\n\n",adv);
		printvet(vet,num);
	}
    return 0;
}
