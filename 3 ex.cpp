#include<stdio.h>
#include<locale.h>

  int main(){
  	    float corrente, resistencia, potencia;
  	    
  	    printf("informe a resistencia 1:");
  	    scanf("%f", &resistencia);
  	    printf("informe a corrente :");
  	    scanf("%f", &corrente);
  	    potencia = corrente*corrente*resistencia;
  	    printf("a potencia de %f",potencia);
  	    return 0;
  }
