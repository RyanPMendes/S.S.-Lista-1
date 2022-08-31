#include <stdio.h>
#include <string.h>
#include "vetlib.h"
int main(){
	char carac[100];
	int tamanho,i;
	printf("Insire o string:");
	gets(carac);
	tamanho=strien(carac);
	printf("String inserida, ao contrario:");
	for(i=0;i<tamanho;i++){
		printf("%c",carac[tamanho-1-i]);
	}
	return 0;
}
