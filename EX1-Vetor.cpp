#include <stdlib.h>
#include <stdio.h>

main(){
	int vet[8]={1,2,3,4,5,6,7,8}, n, teste=0;
	printf("Digite um numero \n");
	scanf("%d",& n);
	for(int x=0; x<8; x++){
		
		if(vet[x]==n){
			teste=1;
			printf("Esse numero existe e esta na posicao %d ", x);
		}
	}
	if(teste==0){
		printf("Esse numero nao existe no vetor");
	}
}
