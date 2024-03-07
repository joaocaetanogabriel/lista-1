#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	char conceito;
	printf("conceito\n\n");
	scanf("%c", &conceito);
	switch(conceito){
		case 'A':
			printf("aprendisagem plena");
			break;
			case 'B':
				printf("parcialmente pleno");
				break;
				case 'C':
					printf("suficiente");
					break;
					case 'D':
						printf("insuficiente");
						break;
	}
	
}
