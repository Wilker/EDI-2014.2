/*20)  Todo  ano  um  concurso  de  programação  premia  os  participantes  que  obtêm  a  maior  média 
ponderada em uma bateria de dois testes. Escreva uma função que recebe sete parâmetros: o inteiro 
n  indicando a quantidade de participantes do concurso, o ponteiro  inscr  para o vetor de inteiros que 
contém as inscrições desses participantes, o ponteiro   t1  para o vetor de reais que contém a nota de 
cada participante no primeiro teste, o inteiro p1 que indica o peso dessa nota na média ponderada, o 
ponteiro  t2  para o vetor de reais que contém a nota de cada participante no segundo teste, o inteiro 
p2  que  indica o peso dessa nota na média ponderada, e um ponteiro para a variável inteira  tam. A 
função deve:
(a) calcular a média ponderada de cada participante; 
(b) criar  um  novo  vetor  de  inteiros  alocado  dinamicamente  com  o  tamanho  exato  para  conter 
apenas as inscrições dos participantes que obtiveram a maior média (pode haver empate); 
(c) armazenar no novo vetor as inscrições correspondentes (em qualquer ordem); 
(d) armazenar o tamanho do novo vetor na variável tam; e 
(e) retornar o ponteiro para o novo vetor. 
Considere  que para uma mesma posição do vetor (mesmo índice), a inscrição e as notas se referem 
a um mesmo participante. O protótipo da função é:
int *premiados(int n, int *inscr, float *t1, int p1,
float *t2, int p2, int *tam);*/

#include "Exercicio20.h"

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam){
    int qntMaiores = 0;
    float maiorMedia = 0.0;
    int i;
    for (i = 0; i < n; i++) {
        float p = ponderada(t1[i], p1, t2[i], p2);
        if (p > maiorMedia)
            maiorMedia = p;
    }
    for (i = 0; i < n; i++) {
        float p = ponderada(t1[i], p1, t2[i], p2);
        if (p >= maiorMedia)
            qntMaiores++;
    }
    int *insc = (int*) malloc(qntMaiores * (sizeof (int)));
    int j=0;
    for (i = 0; i < n; i++) {
        float p = ponderada(t1[i], p1, t2[i], p2);
        if(p>=maiorMedia);
        insc[j++]=inscr[i];
        }
    *tam = qntMaiores;
    return insc;     
}

float ponderada(float t1, int p1, float t2, int p2) {
    return (float) (t1 + t2) / (p1 + p2);
}