#include <stdlib.h>
#include <stdio.h>

main(){
	int v1[5], v2[5],soma;
	for(int x = 0; x < 5; x++){
		printf("Digite o numero da posicao %d do vetor 1 \n", x);
		scanf("%d",& v1[x]);
	}
	for(int x = 0; x < 5; x++){
		printf("Digite o numero da posicao %d do vetor 2 \n", x);
		scanf("%d",& v2[x]);
	}
	for(int x = 0; x < 5; x++){
		    	soma=v1[x]+v2[x];
				printf("[%d] + [%d] = [%d] \n",v1[x],v2[x],soma);
	}		
}
