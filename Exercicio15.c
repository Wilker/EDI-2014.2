/*15)  A média aritmética, A, a média  harmônica, H, e a média desarmônica D, de um conjunto de  n
valores são dadas pelas seguintes fórmulas:

Implemente  uma  função  que  calcule  a  média  aritmética  e  a  média  harmônica  de  um  conjunto  de 
valores armazenados em um vetor. Esta função deve obedecer ao protótipo abaixo, recebendo como 
parâmetros  o  número  de  elementos  do  vetor,  o  endereço  inicial  do  vetor  e  os  endereços  das 
variáveis onde os valores das médias , isto é, os valores de A, H e D, devem ser armazenados.
void medias(int n, float* v, float* pA, float* pH, float* pD);*/

#include "Exercicio15.h"
//Falta implementar a média desarmonica e testar!
float aritimetica(int n, float *v);
float harmonica(int n, float *v);
float desamonica(int n, float *v);

void medias(int n, float* v, float* pA, float* pH, float* pD) {
 *pA = aritimetica(n, v);
 *pH = harmonica(n, v);
 *pD = desamonica(n, v);
}

float aritimetica(int n, float *v) {
    int i;
    float soma = 0;
    for (i = 0; i < n; i++) {
        soma += (float)v[i];
    }
    return (float) soma / n;
}

float harmonica(int n, float*v) {
    int i;
    float h = 0;
    for (i = 0; i < n; i++) {
        h = (float) h + (1 / v[i]);
    }
    return h;

}
float desamonica(int n, float *v){
    
}