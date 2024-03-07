//Exercício 1: Cálculo de Resistência em Série
//Problema: Dado um circuito com três resistores em série, escreva um algoritmo para calcular a resistência total. O usuário deve fornecer os valores dos três resistores.

#include<stdio.h>

int main(){
	float R1;
	float R2;
	float R3;
	float Req;

	printf("Cálculo de Resistência em Série\n\n");
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
