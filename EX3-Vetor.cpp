#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main(){
	int a=0,e=0,i=0,o=0,u=0;
	char nome[10];
	printf("Digite um nome");
	scanf("%c",&nome[10]);
	
	for (int x=0;x<10;x++)
	{
		if (nome[x]=='a')
			a++;
		else if (nome[x]=='e')
			e++;
		else if (nome[x]=='i')
		printf("Nao possui a vogal I");
		else if (nome[x]=='o')
		printf("Nao possui a vogal O");
		else if (nome[x]=='u')
		printf("Nao possui a vogal U");
	}
	if(a==0)
		
}
