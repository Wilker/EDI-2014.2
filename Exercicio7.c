/*7)  Implemente  uma  função  que  receba  como  parâmetros  um  vetor  de  números  inteiros  v  e  seu 
comprimento  n,  e  verifique  se  os  elementos  do  vetor  correspondem  aos  termos  de  uma  PA 
(progressão aritmética), isto é, se existe um número inteiro k  tal que vi seja igual a v0 + i * k. Caso 
os  elementos  do  vetor  correspondam  aos  termos  de  uma  PA,  a  função  deve  retornar  o  valor 
calculado para k. Por exemplo, se for passado para essa função o vetor {2,10,18,26,34}, ela deve 
retornar o valor 8. Caso o vetor não corresponda a uma PA, a função deve retornar 0. Assuma que o 
vetor sempre terá pelo menos três elementos. O cabeçalho da função é dado por:
int teste_PA(int n, int *v);*/
#include "Exercicio7.h"
int teste_PA(int n, int *v) {
    int i;
    int k;
    k = v[0] - v[1];
    for (i = 0; i < n - 1; i++) {
        if (v[i] - v[i + 1] != k)
            return 0;
    }
    return k*-1;
}
