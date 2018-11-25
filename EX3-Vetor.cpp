#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main(){
	int a=0,e=0,i=0,o=0,u=0;
	char nome[10];
	printf("Digite um nome:	");
	gets(nome);
	
	for (int x=0;x<10;x++)
	{
		if (nome[x]=='a')
			a++;
		else if (nome[x]=='e')
			e++;
		else if (nome[x]=='i')
			i++;
		else if (nome[x]=='o')
			o++;
		else if (nome[x]=='u')
			u++;
	}
	printf("\n\nNumero de vogais a: %d.",a);
	printf("\n\nNumero de vogais e: %d.",e);
	printf("\n\nNumero de vogais i: %d.",i);
	printf("\n\nNumero de vogais o: %d.",o);
	printf("\n\nNumero de vogais u: %d.",u);
		
}
