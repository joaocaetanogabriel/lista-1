//Exercício 4: Divisor de Tensão
//Problema: Crie um algoritmo que calcule a tensão em um resistor específico dentro de um circuito divisor de tensão composto por dois resistores em série.



#include<stdio.h>

int main(){
	float R1;
	float R2;
    float Req;
	float Vin;
	float Vout;
	float I;
	
	printf("Cálculo de Resistência em Série\n\n");
	printf("por favor informe o valor do primeiro resistor\n");
	scanf("%f", &R1);
	printf("por favor informe o valor do segundo resistor\n");
	scanf("%f", &R2);
	printf("por favor informe o valor da Tencao \n");
	scanf("%f", &Vin);
	
	Req =  R1 + R2;
	I = Vin / Req;
	Vout = Vin * (R2 / (R1 + R2));
	
	printf("o valor totar dos resistores e %f\n", Req);
	printf("\n\n");
	printf("o valor da corrente nominal e %f\n", I);
	printf("\n\n");
	printf("a tencao vout no resistor R2 sera de %f\n", Vout);
	
	
return 0;
}
