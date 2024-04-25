#include<stdio.h>
#include<locale.h>
#include<string>

int main() {
 setlocale(LC_ALL, "Portuguese");
 int num, i;
 int total = 0;
 int maior = 0;
 for (i=1;i<=3; i ++){
 
 	printf("Digite o %dº numero: ", i);
 	scanf("%d",&num);
 	total += num;
	 
	 if(num > maior){
	 	maior = num;	
	 }
	 printf ("a some é %d", total);
	 printf ("\n O maior é %d", maior);
	 
};
 }
 
//int main() {
//  setlocale(LC_ALL, "Portuguese");
//
//  // Declare variables
//  int numero;
//  int resultado, total = 1;
//
//  // Prompt for input and store the number
//  printf("Digite um número: ");
//  scanf("%d", &numero);
//
//  // Display the multiplication table
//  printf("\nTabela de multiplicação de %d:\n", numero);
//  for (int i = 1; i <= 10; ++i) {
//    resultado = numero * i;
//    printf("%d x %d = %d\n", numero, i, resultado);
//    total *= resultado; // Calculate the total product
//  }
//
//  // Display the total product
//  printf("\nTotal: %d\n", total);
//
//  return 0;
//}
//	
//	
//		
		
		
//
//int main(){
//	setlocale(LC_ALL, "Portuguese");
//	float vlAtual, percent;
//	int codigo;
//	std::string cargo;
//
//	
//	printf("Digite o valor do salário atual ");
//	scanf("%f",&vlAtual);
//	
//	printf("Digite o codigo ");
//	scanf("%d",&codigo);
//	
//	
//	
//	switch(codigo){
//		
//		case 1:
//			cargo =  "Escrituário";
//			percent = 0.5;
//			
//			break; 
//		case 2:
//			cargo =  "Secretário";
//			percent = 0.35;
//			break; 
//		case 3:
//			cargo =  "Caixa";
//			percent = 0.2;
//			break; 
//		case 4:
//			cargo =  "Gerente";
//			percent = 0.1;
//			break; 
//			
//		case 5:
//			cargo =  "Diretor";
//			percent = 1;
//			break; 
//		 default:
//      cargo = "Cargo inválido";
//      percent = 1;
//		     	
//	}
//	
//	float bonus = vlAtual + (vlAtual * percent);
//	 printf("Cargo: %s\n", cargo.c_str()); // Convert std::string to char* for printf
//  printf("Conta: R$%.2f\n", bonus);
//
//return 0;
//}




