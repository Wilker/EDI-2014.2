/*1) Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 
2 e R$ 1, escreva um programa que capture um  valor  inteiro em reais (R$) e determine o  menor 
número de notas para se obter o montante fornecido. A função deve ter o seguinte protótipo:
int total_de_notas(int valor);*/
#include "Exercicio1.h"

int total_de_notas(int valor) {
    int cont = 0;
    int nota[] = {100, 50, 20, 10, 5, 2, 1};


    int i;
    for (i = 0; i < 7; i++) {
        if (valor >= nota[i]) {
            valor%=nota[i];
            cont++;
        }
    }
    return cont;
}