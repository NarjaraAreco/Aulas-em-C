#include <stdio.h>

int main(){

    int idade;
    float altura;
    char sexo;

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu sexo: ");
    scanf("%s", &sexo);

    printf("\nSua idade eh %i, sua altura eh %f e seu sexo eh %c", idade,altura,sexo);



    return 0;
}