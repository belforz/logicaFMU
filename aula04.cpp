#include<stdio.h>
#include<locale.h>

float somaDoisValores(float a, float b){
	float resultado;
	resultado = a+ b;
	return(resultado);
	
}

int main (){
	setlocale(LC_ALL,"PORTUGUESE");
//	printf("Soma 3 e 4 = %f", somaDoisValores(3,4));
//	return 0;
	float valor1, valor2;
	printf("Digite o valor de 1: ");
	scanf("%f",&valor1);
	
	printf("Digite o valor de 2: ");
	scanf("%f",&valor2);
	
	printf("Soma %f e %f = %f", valor1, valor2,somaDoisValores(valor1,valor2));
}

float calcularAreaTriangulo(float base, float altura){
	float area;
	area = a * b / 2;
	return(area);
	
}

int main (){
	setlocale(LC_ALL,"PORTUGUESE");
//	printf("Soma 3 e 4 = %f", somaDoisValores(3,4));
//	return 0;
	float base, altura;
	printf("Base: ");
	scanf("%f",&base);
	
	printf("Altura: ");
	scanf("%f",&altura);
	
	printf("Area" + calcularAreaTriangulo(base,altura));
	printf("Area" + calcularAreaTriangulo(27.65,44.5));
}
