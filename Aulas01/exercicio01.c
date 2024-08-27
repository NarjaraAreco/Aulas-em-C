#include <stdio.h>

int main(){

    int idade;
    float altura;
    char sexo;

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Digite seu sexo: ");
    scanf("%s", &sexo);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm'){
        printf("Sexo masculino");
    }
    else if(sexo == 'F' || sexo =='f'){
        printf("Sexo feminino");
        printf("\nSua idade eh %i, sua altura eh %.2f", idade,altura);
    }
    else{
        printf("Impossivel determinar");
    }
    
    return 0;
}