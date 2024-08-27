/*
Uma empresa fez uma pesquisa com 10 de seus funcionarios coletando dados sobre o salario e numero de filhos.
A empresa deseja saber a: Média salarial destes funcionários; a media do numero de filhos; e o percentual de pessoas
com salario de ate R$3000,00 que possuem filhos.
*/
#include <stdio.h>

int main(){

    float salarios=0, salario=0, mediaSalarial=0, mediaFilhos=0,percentual=0;
    int numero_filhos=0, filhos=0, filhos_ate=0, entradas=2;

    for (int i=0;i<entradas;i++){
        printf("Informe seu salario: ");
        scanf("%f", &salario);
        printf("Informe a quantidade de filhos: ");
        scanf("%i", &filhos);
        salarios+=salario;
        numero_filhos+=filhos;
        if (salario<=3000 && filhos>0){
            filhos_ate++;
        }
    }
    mediaSalarial = (float)salarios/entradas;
    printf("Media Salarial %.2f\n",mediaSalarial);
    mediaFilhos = (float)numero_filhos/entradas;
    printf("Media Filhos %.2f\n", mediaFilhos);
    percentual = (float)(filhos_ate)*(100/entradas);
    printf("Percentual eh: %2.f\n", percentual);

    return 0;
}