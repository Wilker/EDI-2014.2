/*18) Escreva uma função em C que receba como parâmetros um vetor (vet) de n  números reais e um 
ponteiro  para  inteiro  (tam)  e  retorne  o  ponteiro  para  um  novo  vetor,  alocado  dinamicament e, 
contendo somente os elementos do vetor original que são maiores que a média de todos os valores. 
Por exemplo, o vetor {5.5, 3.2, 2.5, 9.4, 7.5, 4.1, 5.4, 8.0, 6.9}, daria origem ao vetor {9.4, 7.5, 8.0, 
6.9}, de tamanho 4.  No ponteiro para inteiro deverá ser armazenado o tamanho do novo vetor. Se 
não for possível alocar o novo vetor, a função deve retornar NULL. 
float acima_da_media(int n, float *vet, int *tam);*/

#include "Exercicio18.h"
#include <stdio.h>
float aritimetica(int n, float *v);
float* acima_da_media(int n, float *vet, int *tam);
int main(int argc, char** argv) {
    float v[] = {5.5, 3.2, 2.5, 9.4, 7.5, 4.1, 5.4, 8.0, 6.9};
    int m = 9;
    int tam = 0;
    float *u= acima_da_media(m,v,&tam);

    int i;
    for (i = 0; i < tam; i++) {
        printf("%f\n",u[i]);
    }

    system("pause");
    return (0);
}

float* acima_da_media(int n, float *vet, int *tam) {
    int qnts = 0;
    float m = aritimetica(n, vet);
    printf("A MEDIA E...%f\n",m);
    int i;
    for (i = 0; i < n; i++) {
        if (vet[i] > m)qnts++;
    }
    printf("Temos %d acima da media\n",qnts);
    float *v = (float*)malloc(n * sizeof(float));
    if (!v)return NULL;
    int j = 0;
    for (i = 0; i < n; i++) {
        if (vet[i] > m) {
            v[j] = vet[i];
            j++;
            
        }
    }
 *tam=qnts;
    return v;
}

float aritimetica(int n, float *v) {
    int i;
    float soma = 0.0;
    for (i = 0; i < n; i++) {
        soma += (float)v[i];
    }
    return (float) soma / n;
}