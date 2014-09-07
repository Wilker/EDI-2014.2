/*14) No estudo da física, o  deslocamento instantâneo s  e a velocidade instantânea  v  de corpo  podem 
ser  calculados  a  partir  do  deslocamento  inicial  s0,  da  velocidade  inicial  v0,  da  aceleração  a  e  do 
intervalo de tempo t utilizando-se as seguintes fórmulas:
Escreva uma função em C para o cálculo do movimento de um corpo que recebe como parâmetros 
os  ponteiro  para  as  variáveis  reais  s  (que  já  contém  o  valor  do  deslocamento  inicial)  e  v  (que  já 
contém o valor da velocidade inicial), e os valores reais  a, representando a aceleração do corpo, e  t, 
representando  o  intervalo  de  tempo.  Essa  função  deve  atualizar  as  variáveis  apontadas  por  s  e  v, 
respectivamente,  com  o  valor  do  deslocamento  instantâneo  e  o  valor  da  velocidade  instantânea 
calculados ao final do intervalo de tempo fornecido em  t, de acordo com as fórmulas apresentadas.
void movimento(float *s, float *v, float a, float t);*/
#include "Exercicio14.h"
void movimento(float *s, float *v, float a, float t) {
    *s = (*s)+(*v) * t + ((a * (t * t)) / 2);
    *v = (*v) + a*t;
}