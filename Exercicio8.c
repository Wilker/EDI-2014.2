/*8) Escreva uma função em C que determine a posição em um vetor do elemento que corresponde ao 
“menor  valor  único”.  Essa  função  deve  receber  como  parâmetros  um  vetor  de  números  reais 
(double) e o inteiro n que indica o tamanho do vetor, e deve retornar o índice do elemento que tem o 
menor valor que não se repete no vetor.
int menor_valor_unico(float *valores, int n);*/
#include "Exercicio8.h"

int unico(float *v, int n, float valor, int pos);

int menor_valor_unico(float *valores, int n) {
    int i = 0;
    int m = 0;
    for (i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if ((valores[i] <= valores[j]) && (valores[j] < valores[m]))
                if (unico(valores, n, valores[j],j))
                    m = j;
        }
    }
    return m;
}

int unico(float *v, int n, float valor, int pos) {
    int i;
    for (i = 0; i < n; i++) {
        if(i!=pos)
            if(v[i]==valor) 
                return 0;
    }
    return 1;
}