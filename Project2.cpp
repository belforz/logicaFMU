#include<stdio.h>
#include<locale.h>

int main(){
//	setlocale(LC_All, "Portuguese");
//	float nota1, nota2, nota3, media1, media2;
//	printf("Digite nota1: ");
//	scanf("%f",&nota1);
//	printf("Digite nota2: ");
//	scanf("%f",&nota2);
//	printf("Digite nota3: ");
//	scanf("%f",&nota3);
//	media1 = (nota1 + nota2 + nota3) / 3;
//	printf("Media1= %.1f", media1);
//	
//	float media;
//	media = (media1 )* 0.5;
//	printf("\nA sua media ponderada no semestre: %.1f", media);
//
//float valor, km;
//char modelo [50];
//printf("Digite o modelo do carro: ");
//
//scanf("%s", modelo);
//
//printf("Digite a quilometragem do carro: ");
//scanf("%f", &km);
//
//printf("Digite o valor do carro: ");
//scanf("%f",&valor);
//
//printf("Os dados do carro sao: Modelo : %s , Quilometragem : %.1f , Valor : %.1f", modelo, km, valor);

	 float nota1, nota2, nota3, nota4, media;

    printf("Digite nota1: ");
    scanf("%f", &nota1);
    if (nota1 <= 0) {
        printf("Numero não real, tente novamente\n");
      
    }

    printf("Digite nota2: ");
    scanf("%f", &nota2);
    if (nota2 <= 0) {
        printf("Numero não real, tente novamente\n");
        
    }

    printf("Digite nota3: ");
    scanf("%f", &nota3);
    if (nota3 <= 0) {
        printf("Numero não real, tente novamente\n");
      
    }

    printf("Digite nota4: ");
    scanf("%f", &nota4);
    if (nota4 <= 0) {
        printf("Numero não real, tente novamente\n");
     
    }

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("Media = %.1f\n", media);


}



