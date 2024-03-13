#include<stdio.h>
#include<locale.h>

  int main(){
  	    float capacitor, r1, tempo;
  	    
  	    printf("informe a r1:");
  	    scanf("%f", &r1);
  	    printf("informe a capacitancia :");
  	    scanf("%f", &capacitor);
  	    tempo = r1*capacitor;
  	    printf("a tempo de %f",tempo);
  	    return 0;
  }
