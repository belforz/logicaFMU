#include<stdio.h>
#include<stdio.h>

int main(){
//	setlocale(LC_All, "Portuguese");
// Primeiro exercicio

//	char medicamento1[20];
//	char medicamento2[20];
//	float venda1, venda2 ;
//	
//	printf("Joao, digite o medicamento numero 1: ");
//	scanf("%s",medicamento1);
//	
//	printf("Digite o valor do medicamento 1: ");
//	scanf("%f",&venda1);
//	
//	 printf("Seu Jo�o, o medicamento: %s esta no valor de %.1f\n", medicamento1, venda1);
//    
//		
//	printf("Digite o medicamento numero 2: ");
//	scanf("%s",medicamento2);
//	
//	printf("Digite o valor do medicamento 2: ");
//	scanf("%f",&venda2);
//	
// printf("Seu Jo�o, o medicamento: %s esta no valor de %.1f\n", medicamento2, venda2);
//
//Segundo exercicio
    
//    char nome[20];
//    int dependentes;
//    char cargo [10];
//    
//    printf("Ol�, qual � seu nome? ");
//    scanf("%s", nome);
//    
//    printf("%s, quantos dependentes voc� tem?", nome);
//    scanf("%d", dependentes);
//    
//    printf ("%s, qual � seu cargo?", nome);
//    scanf("%s", cargo);
//    
//        printf("Prezado %s, do cargo %s, tem %d dependentes.\n", nome, cargo, dependentes);
//	
	
//

//Terceiro Exercicio
//	#include <stdio.h>
//
//int main() {
//    float a, b, d, areaA, areaB, areaTotal;
//
//    // Solicitar os dados do primeiro ret�ngulo
//    printf("Digite o valor da base do retangulo A: ");
//    scanf("%f", &a);
//
//    printf("Digite o valor da altura do retangulo A: ");
//    scanf("%f", &b);
//
//    // Solicitar os dados do segundo ret�ngulo
//    printf("Digite o valor da base do retangulo B: ");
//    scanf("%f", &d);
//
//    printf("Digite o valor da altura do retangulo B: ");
//    scanf("%f", &b); // Estou supondo que a altura do segundo ret�ngulo seja igual � do primeiro
//
//    // Calcular as �reas dos ret�ngulos A e B
//    areaA = a * b;
//    areaB = d * b;
//
//    // Calcular a �rea total
//    areaTotal = areaA + areaB;
//
//    // Exibir os resultados
//    printf("Area do retangulo A: %.2f\n", areaA);
//    printf("Area do retangulo B: %.2f\n", areaB);
//    printf("Area total dos retangulos A e B: %.2f\n", areaTotal);
//
//    return 0;
//}
//
//// Quarto Exercicio
//
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    float raio, altura, areaBase, volume;
//    printf("Digite o raio do cilindro: ");
//    scanf("%f", &raio);
//
//    printf("Digite a altura do cilindro: ");
//    scanf("%f", &altura);
//
//    
//    areaBase = M_PI * pow(raio, 2);
//
//   
//    volume = areaBase * altura;
//
//    
//    printf("Area da base do cilindro: %.2f\n", areaBase);
//    printf("Volume do cilindro: %.2f\n", volume);
//
//    return 0;
//}
//
//// Quinto Exercicio
//
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    float a, b, c, delta, raiz1, raiz2;
//
//    
//    printf("Digite o coeficiente a: ");
//    scanf("%f", &a);
//
//    printf("Digite o coeficiente b: ");
//    scanf("%f", &b);
//
//    printf("Digite o coeficiente c: ");
//    scanf("%f", &c);
//
//    
//    delta = (b * b) - (4 * a * c);
//
//    
//    if (delta >= 0) {
//    
//        raiz1 = (-b + sqrt(delta)) / (2 * a);
//        raiz2 = (-b - sqrt(delta)) / (2 * a);
//
//        printf("Raiz 1: %.2f\n", raiz1);
//        printf("Raiz 2: %.2f\n", raiz2);
//    } else {
//        printf("As raizes nao sao reais.\n");
//    }
//
//    return 0;
//}
//
//// Sexto Exercicio
//
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    double a, b, c;
//
//    
//    printf("Digite o valor do lado a: ");
//    scanf("%lf", &a);
//
//    printf("Digite o valor do lado b: ");
//    scanf("%lf", &b);
//
//    
//    c = sqrt(pow(a, 2) + pow(b, 2));
//
//    
//    printf("O comprimento do terceiro lado (hipotenusa) �: %.2lf metros\n", c);
//
//    return 0;
//}
//
//// Setimo Exercicio
//#include <iostream>
//using namespace std;
//
//int main() {
//    double cotacaoDolar, valorDolar, valorReais;
//
//    
//    printf("Digite a cota��o do d�lar (em Reais): ");
//    scanf("%lf", &cotacaoDolar);
//
//    printf("Digite o valor em d�lares: ");
//    scanf("%lf", &valorDolar);
//
//    
//    valorReais = valorDolar * cotacaoDolar;
//
//        printf("O valor em Reais �: %.2lf Reais\n", valorReais);
//
//    return 0;
//}
//
//// Oitavo Exercicio
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int hora, minutos, minutosTotais;
//
//    
//    printf("Digite o valor da hora: ");
//    scanf("%d", &hora);
//
//    printf("Digite o valor dos minutos: ");
//    scanf("%d", &minutos);
//
//    
//    minutosTotais = hora * 60 + minutos;
//
//        printf("Desde o in�cio do dia se passaram %d minutos\n", minutosTotais);
//
//    return 0;
//}
//
//// Nono Exercicio
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num1, num2, resto;
//
//    // Solicitar os dois n�meros inteiros
//    printf("Digite o primeiro n�mero inteiro: ");
//    scanf("%d", &num1);
//
//    printf("Digite o segundo n�mero inteiro: ");
//    scanf("%d", &num2);
//
//    
//    resto = num1 % num2;
//
//    
//    printf("O resto da divis�o inteira de %d por %d �: %d\n", num1, num2, resto);
//
//    return 0;
//}
//
//// D�cimo exercicio
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    double valorGasto, valorTotal;
//
//    // Solicitar o valor gasto pelo cliente
//    printf("Digite o valor gasto pelo cliente: ");
//    scanf("%lf", &valorGasto);
//
//    
//    valorTotal = valorGasto * 1.1;
//
//    
//    printf("O valor total a ser pago �: %.2lf\n", valorTotal);
//
//    return 0;
//}
//
//// D�cimo Primeiro Exercicio
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num1, num2, soma, subtracao, multiplicacao, divisao, resto;
//
//    
//    printf("Digite o primeiro n�mero inteiro: ");
//    scanf("%d", &num1);
//
//    printf("Digite o segundo n�mero inteiro: ");
//    scanf("%d", &num2);
//
//        soma = num1 + num2;
//    subtracao = num1 - num2;
//    multiplicacao = num1 * num2;
//    divisao = num1 / num2;
//    resto = num1 % num2;
//
//    printf("Soma: %d\n", soma);
//    printf("Subtra��o: %d\n", subtracao);
//    printf("Multiplica��o: %d\n", multiplicacao);
//    printf("Divis�o: %d\n", divisao);
//    printf("Resto da Divis�o: %d\n", resto);
//
//    return 0;
//}
//
//// D�cimo Segundo Exercicio
//#include <iostream>
//using namespace std;
//
//int main() {
//    double numeroReal, triplo;
//
//    
//    printf("Digite um n�mero real: ");
//    scanf("%lf", &numeroReal);
//
//    
//    triplo = 3 * numeroReal;
//
//    
//    printf("O triplo do n�mero %.2lf �: %.2lf\n", numeroReal, triplo);
//
//    return 0;
//}
//
//// D�cimo Terceiro Exercicio
//#include <iostream>
//
//
//int main() {
//    double base, altura, area;
//
//    
//    printf("Digite o valor da base do tri�ngulo: ");
//    scanf("%lf", &base);
//
//    printf("Digite o valor da altura do tri�ngulo: ");
//    scanf("%lf", &altura);
//
//    
//    area = (base * altura) / 2;
//
//    
//    printf("A �rea do tri�ngulo �: %.2lf\n", area);
//
//    return 0;
//}
//




	
	
	
	
	


}
 
 

