/*19)  Considere  que  você  armazenou  os  valores  observados  em  um  experimento  de  física  em  um 
vetor de números reais (do tipo float). Para melhorar a precisão dos seus dados, você pode eliminar 
o maior e o menor valor dentre todas as medições. Por exemplo, para o vetor (1.2, 1.2, 0.9, 1.5, 1.4, 
1,5), o terceiro elemento deveria ser retirado por ser o de menor valor, e também o quarto ou o sexto 
elementos  (a  escolha  é  indiferente)  por  serem  o  de  maior  valor.  Escreva  uma  função  em  C  que 
receba  como  parâmetros  um  vetor  de  n  números  reais,  correspondendo  às  medições  de  um 
experimento, e retorne um novo  vetor (alocado dinamicamente) sem os elementos do vetor original 
que têm o maior e o menor valores (admita que n é sempre maior que 3).
float* vet2(int n, float *vet1);*/

#include "Exercicio19.h"
float* vet2(int n, float *vet1) {
    float *v = (float*) malloc((n - 2) * sizeof (float));
    int maior, menor;
    maior = 0;
    menor = 0;
    int i;
    for (i = 0; i < n; i++) {
        printf("=>%f laco %d \n",vet1[i],i);
        if (vet1[i] < vet1[menor]) {
            menor = i;
            printf("Agora o menor e %f na posicao %d \n", vet1[menor],i);
        }
        if (vet1[i] > vet1[maior]) {
            maior = i;
            printf("Agora o maior e %f na posicao %d \n", vet1[maior],i);
        }
    }
    int j = 0;
    for (i = 0; i < n; i++) {
        if (i != maior && i != menor)
            v[j++] = vet1[i];
    }
    return v;
}