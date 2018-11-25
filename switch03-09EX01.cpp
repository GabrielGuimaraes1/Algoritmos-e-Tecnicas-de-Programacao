#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
using namespace std;

int main(){
	float sal;
	char prod;
	printf ("	Produtividade \n \n")	;
	printf ("A - Excelente \n");
	printf ("B - Bom \n");
	printf ("C - Medio \n");
	printf ("D - Regular \n");
	printf ("E - Precisa treinar mais \n");
	printf ("F - Se cuida \n");
	printf ("G - tsktsk \n \n");
	printf ("Digite o salario \n");
	scanf ("%f",&sal);
	fflush(stdin);
	printf ("Digite a letra correspondente a produtividade \n");
	scanf("%c",&prod);
	switch(prod){
		case 'a':
			sal= sal*2;
			printf("Produtividade excelente. Salario: R$ %.2f \n",sal);
		break;
		case 'b':
			sal= sal+(sal*0.8);
			printf("Produtividade boa. Salario: R$ %.2f \n",sal);
		break;
		case 'c':
			sal= sal+(sal*0.5);
			printf("Produtividade media. Salario: R$ %.2f \n",sal);
		break;
		case 'd':
			sal= sal+(sal*0.3);
			printf("Produtividade regular. Salario: R$ %.2f \n",sal);
		break;
		case 'e':
			sal= sal+(sal*0.1);
			printf("Precisa treinar mais. Salario: R$ %.2f \n",sal);
		break;
		case 'f':
			sal= sal+(sal*0.05);
			printf("Se cuida... Salario: R$ %.2f \n",sal);
		break;
		case 'g':
			sal= sal;
			printf("tsktsk. Salario: R$ %.2f \n",sal);
		break;
		default:
			printf("Opcao invalida.");
			break;
	}
}
