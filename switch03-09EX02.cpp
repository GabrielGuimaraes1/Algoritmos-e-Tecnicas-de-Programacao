#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
using namespace std;

int main(){
	int cor;
	printf("Escolha as cores para fonte e fundo, respectivamente \n \n");
	printf("1 Azul e preto \n");//10
	printf("2 Verde e vermelho \n");//24
	printf("3 Vermelho e branco \n");//47
	printf("4 Amarelo e preto \n");//60
	printf("5 Branco e verde\n");//72
	printf("Escolha a cor da fonte \n");
	scanf("%i",&cor);
	switch(cor){
		case 1:
			system("COLOR 10");
			printf("1 Azul e preto \n");
			break;
		case 2:
			system("COLOR 24");
			printf("2 Verde e vermelho \n");
			break;
		case 3:
			system("COLOR 47");
			printf("3 Vermelho e branco \n");
			break;
		case 4:
			system("COLOR 60");
			printf("4 Amarelo e preto \n");
			break;
		case 5:
			system("COLOR 72");
			printf("5 Branco e verde \n");
			break;
		default:
			printf("Opcao invalida");
	}
	
}
