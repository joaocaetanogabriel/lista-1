//Exerc�cio 2: Lei de Ohm
//Problema: Desenvolva um algoritmo que calcule a corrente el�trica que passa por um resistor, dada a tens�o aplicada e a resist�ncia (Uso da Lei de Ohm: I=V/R).


#include<stdio.h>

int main(){
	float R1;
	float R2;
    float Req;
	float V;
	float I;
	
	printf("C�lculo de Resist�ncia em S�rie\n\n");
	printf("por favor informe o valor do primeiro resistor\n");
	scanf("%f", &R1);
	printf("por favor informe o valor do segundo resistor\n");
	scanf("%f", &R2);
	printf("por favor informe o valor da Tencao \n");
	scanf("%f", &V);
	
	Req =  R1 + R2 ;
	
	printf("o valor totar dos resistores e %f\n", Req,"ohms");
	printf("\n\n");
	
	I = V / Req ;
	
	printf("o valor da corrente nominal e %f", I,"A");
	
	
	
return 0;

}
