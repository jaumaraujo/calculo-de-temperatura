#include <stdio.h>
//calculadora temperatura
float temperatura,resultado;
int opcao;
int main(){
	//perguntando qual temperatura dejesa converter
	printf("digite  1- celsius para fahrenheit 2- fahrenheit para celsius: ");
	scanf("%d",&opcao);
	if(opcao== 1){
		//celsius para faahrenheit
		puts("\ndigite a temperatura em celsius: ");
		scanf("%f",&temperatura);
		resultado=((temperatura*9)/5)+32;
		printf("a temperatura em fahrenheit e: %.2f", resultado);
	}else if(opcao== 2){
		//fahrenheit para celsius
		puts("\ndigite a temperatura em fahrenheit: ");
		scanf("%f",&temperatura);
		resultado=((temperatura-32)*5)/9;
		printf(" a temperatura em celsius e: %.2f",resultado);
	}
}
