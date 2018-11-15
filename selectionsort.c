#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void selectionSort(int seq[],int tamanho){
    int indicemenor,aux;
    double menor;
    for(int i = 0; i < tamanho; i++){
        menor = INFINITY;
        for(int j = 0; j < (tamanho-i); j++){
            if(seq[j] < menor){
                menor = seq[j];
                indicemenor = j;
            }
        }
        aux = seq[tamanho-1-i];
        seq[6-i] = seq[indicemenor];
        seq[indicemenor] = aux;
        printf("%.0f ",menor);
    }
}

int main(void){
    int sequencia[7]={7,4,8,2,5,3,9};
    int tam = sizeof(sequencia)/sizeof(sequencia[0]);
    printf("Sequencia: 7 4 8 2 5 3 9\n");
    printf("Ordenada: ");
    selectionSort(sequencia,tam);
    printf("\n");
    return 0;
}
