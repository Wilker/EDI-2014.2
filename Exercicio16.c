/*16)  Utilizando-se a série de Taylor, o valor da  função  sen(x)  pode ser aproximado por uma função 
polinomial definida pela seguinte soma infinita de n termos. 
sen x = ∑
n = 0
∞
− 1
n
2 n 1 !
x
2 n 1
Ou seja, tomando os 4 primeiros termos da série (para n  variando de 0 até 3), um valor aproximado 
da função sen(x) poderia ser calculado pela expressão:
sen x ≈ x−
x
3
3!
x
5
5!
−
x
7
7!
Por exemplo, calculando o valor da expressão, podemos obter o valor estimado para o seno de um 
ângulo de 60
o
(x = 0,5236 radianos) como:
sen 0,5236 ≈ 0,5236 −
0,5236
3
3!
0,5236
5
5!
−
0,5236
7
7!
≈ 0,49999999
Escreva  uma  função  em  C  que  calcule  o  valor  dos  n  primeiros  termos  da  série  de  Taylor  que 
aproxima o valor da função  seno  para um dado valor de  x. Esta função recebe como parâmet ros o 
inteiro  n, correspondente ao número de termos, e um número real correspondente ao valor de  x  (em 
radianos),  e  deve  alocar  dinamicamente  um  vetor  de  tamanho  n  para,  em  cada  elemento  i, 
armazenar  o  valor  referente  ao  i-ésimo  termo  da  série.  A  função  deve  retornar  o  ponteiro  para o 
novo vetor, conforme o protótipo:
float* taylor_sen(int n, float x);*/

// OBS: A Série de taylor para o seno está errada! Faltam o símbolo de + e
// no divisor o correto é (2n+1)! 
//Falta corrigir ainda!

#include "Exercicio16.h"
float fat(float n);
float exp(float x, int n);
float* taylor_sen(int n, float x);

float* taylor_sen(int n, float x) {
    float *v = (float*) malloc(sizeof (float) *n);
    int i;
    for (i = 0; i < n; i++) {
        v[i] = (exp(-1, i) / fat(2 * i + 1)) * exp(x, 2 * i + 1);
    }
    return v;
}

float exp(float x, int n) {
    int i;
    if (!n) {
        return 1.0;
    } else {
        float exp = x;
        for (i = 1; i < n; i++) {
            exp *= x;
            return exp;
        }
    }
}

float fat(float n) {
    if ((n == 0) || (n == 1))return 1.0;
    else return n * fat(n - 1);
}