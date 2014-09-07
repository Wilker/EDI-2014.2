/*9)  Escreva  uma  função  em  C  que  identifique  se  um  vetor  é  um  subconjunto  ordenado  de  outro 
vetor, isto é, se todos os elementos deste vetor são também elementos do outro vetor e aparecem na 
mesma  ordem  relativa  em  ambos.  Por  exemplo,  o  vetor  {34,  12,  7,  41,  52,  45}  é  subconjunto 
ordenado do vetor {9, 34, 12, 7, 41, 52, 9, 27, 45, 13}. Essa função deve receber como parâmetros o 
vetor  sub  e  seu  tamanho  n,  e  o  vetor  vet  e  seu  tamanho  m  e  retornar  1,  se  sub  for  subconjunt o 
ordenado de vet, ou 0 caso contrário.
int subconjunto_ordenado(int *sub, int n, int *vet, int m);*/
#include "Exercicio9.h"
int verifica(int *sub, int n, int *v, int m);


int subconjunto_ordenado(int *sub, int n, int *vet, int m) {
    int i;
    for (i = 0; i < m - n; i++) {
        if (sub[0] == vet[i])
            if (verifica(sub, n, &vet[i], m - i))
                return 1;
    }
    return 0;
}

int verifica(int *sub, int n, int *v, int m) {
    int i;
    for (i = 0; i < n; i++) {
        if (sub[i] != v[i])
            return 0;
    }
    return 1;
}