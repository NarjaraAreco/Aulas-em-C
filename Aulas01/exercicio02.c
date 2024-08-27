#include <stdio.h>

/*Escreva um programa em C que calcula a idade média de um grupo de pessoas. 
O usuario deverá informar o numero de pessoas e, emseguida as idades de cada uma delas.
*/
int main(){

    float idadeMedia = 0; 
    int quant = 0, idades = 0;

    printf("Informe o numero de pessoas: ");
    scanf("%i", &quant);
    for (int i = 0; i < quant; i++){
        printf("Informe sua idade: ");
        scanf("%i", &idades);
        idadeMedia += idades;
    }
    idadeMedia = idadeMedia / quant;
    printf("Idade Media eh %.2f", idadeMedia);

    return 0;
}
