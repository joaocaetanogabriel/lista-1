//Exerc�cio 1: C�lculo de Resist�ncia em S�rie
//Problema: Dado um circuito com tr�s resistores em s�rie, escreva um algoritmo para calcular a resist�ncia total. O usu�rio deve fornecer os valores dos tr�s resistores.

#include<stdio.h>

int main(){
	float R1;
	float R2;
	float R3;
	float Req;

	printf("C�lculo de Resist�ncia em S�rie\n\n");
	printf("por favor informe o valor da primeiro resistor\n");
	scanf("%f", &R1);
	printf("por favor informe o valor da segundo resistor\n");
	scanf("%f", &R2);
	printf("por favor informe o valor da terceiro resistor\n");
	scanf("%f", &R3);
	
	Req =  R1 + R2 + R3 ;
	
	printf("o valor totar de resistores e %f\n", Req);
	
return 0;

}
