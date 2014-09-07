/*2) Considere a função que calcula o n-ésimo número harmônico H(n) conforme definida a seguir:
H(n) = 1 + 1/2 + 1/3 + 1/4 + . . . + 1/n (n >= 1)
Apresente uma definição recursiva para H(n)  e implemente o cálculo desse valor como uma função 
RECURSIVA em C. A função deve ter o seguinte protótipo:
double harmonico(int n);*/
#include "Exercicio2.h"
double harmonico(int n){
    if(n==1) return 1;
    else return (1/n)+ harmonico(n-1);         
}
