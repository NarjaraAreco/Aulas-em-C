/* Escreva um programa em C com um procedimento para ler um vetor de inteiros, a partir 
de dados do teclado. Crie uma função que recbe 2 parametros: o primeiro é o vetor 
de inteiros lido e o segundo parametro é um numero. A função deve retornar como resultado
a quantidade de vezes que o número aparece dentro do vetor*/

#include <stdio.h>

void ler(int vet[]){
    for (int i=0;i<5;i++){
        printf("Teste\n");
    }
}

int main(){
    int vet[5];
    ler(vet);

    return 0;
}