#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char opcao;
	double resultado, num1, num2;
	printf("************************\n");
	printf("\tCalculadora Simples\n");
	printf("************************\n");
	printf("Escolha: \n");
	printf("A - Adi��o\n");
	printf("S - Subtra��o\n");
	printf("M - Multiplica��o\n");
	printf("D - Dvis�o\n");
	printf("************************\n");
	printf("\nDigite uma op��o: ");
	scanf("%c",&opcao);
	printf("Digite o primeiro n�mero: \n");
	scanf("%lf",&num1);
	printf("Digite o segundo n�mero: \n");
	scanf("%lf",&num2);	
	switch(opcao){
		case 'A':
		case 'a':
			resultado = num1 + num2;
			printf("Resultado: %.2lf",resultado);
			break;
		case 'S':
		case 's':	
			resultado = num1 - num2;
			printf("Resultado: %.2lf",resultado);
			break;
		case 'M':
		case 'm':	
			resultado = num1 * num2;
			printf("Resultado: %.2lf",resultado);
			break;
		case 'D':
		case 'd':	
			resultado = num1 / num2;
			printf("Resultado: %.2lf",resultado);
			break;
	}
	
	
	return 0;
}

