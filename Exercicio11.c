/*11) Implemente uma função que calcula as raízes reais de uma equação do segundo grau, do tipo 
ax
2
+  bx  +  c  =  0.  A  função  deve  retornar  o  número  de  raízes  reais  da  equação,  obedecendo  ao 
seguinte protótipo:
void raizes(float a, float b, float c, float * x1, float * x2);
Onde os inteiros  a,  b  e  c  representam os coeficientes da equação, e  x1  e  x2  são ponteiros para as 
variáveis onde devem ser guardadas as raízes reais da equação. Quando houver apenas uma raiz,  x1
deve guardar esse valor. Quando houver duas raízes,  x1  deve guardar  a raiz de menor valor e  x2  a 
de maior valor. Para o cálculo da raiz quadrada, utilize a função  sqrt  definida na biblioteca  math.h
do C, que tem o protótipo double sqrt (double n);*/
#include <math.h>
#include "Exercicio11.h"
#define NRAIZ -99999.9

int calcDet(int a, int b, int c);

void raizes(float a, float b, float c, float * x1, float * x2) {
    int det = calcDet(a, b, c);
    printf("det..%d\n", det);
    if (det < 0) *x1 = *x2 = NRAIZ;
    else
        if (det == 0) {
 *x1 = (float) ((b*-1) / (2 * a));
    } else {
 *x1 = (float) ((b*-1)-(sqrt(det))) / (2 * a);
 *x2 = (float) ((b*-1)+(sqrt(det))) / (2 * a);
    }
}

int calcDet(int a, int b, int c) {
    return (b * b) - (4 * a * c);
}