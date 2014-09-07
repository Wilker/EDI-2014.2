/*4) O MDC de dois números inteiros é o maior número inteiro que divide ambo s sem deixar resto. 
Este valor pode ser determinado da seguinte forma: calcula-se o resto da divisão do maior número 
pelo menor. Se o resto for igual a zero o MDC é o menor dos números. Se não for, o MDC será o 
mesmo que o MDC do menor número e o resto. Escreva uma função RECURSIVA para o cálculo 
do MDC. A função deve ter o seguinte protótipo:
int mdc(int a, int b);*/

#include "Exercicio4.h"

int mdc(int a, int b){
    if(b>a){
        troca(&a,&b);
    }if(a%b==0){
        return b;
    }else{
     return(mdc(b,a%b));   
    }    
}
void troca(int *a,int *b){
    int temp = *b;
 *b=*a;
 *a= temp;
}