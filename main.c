/* 
 * File:   main.c
 * Author: Wilker
 *
 * Created on 23 de Agosto de 2014, 20:33
 */

#include <stdio.h>
#include <stdlib.h>

#include "Exercicio12.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    //Teste do Exercício 1
  /*printf("Insira a qnt grana...\n");
    int grana;
    scanf("%d",&grana);
    printf("Qnt nota -> %d\n",total_de_notas(grana));
 
    //Teste do Exercício 3
    printf("Insira um inteiro");
    int n;
    scanf("%d",&n);
    imprime_binario(n);
 
    //Teste do Exercício 6
    float vet[]={5.3 , 999.9 , 0.1 , 99396.55 , 23.5};
    printf("%d\n",max_vet(5,vet));
    
    //Teste do Exercício 10
    int v[]={1,2,3,4,5,6,7,8,9,10};
    int u[]={10,9,8,7,6,5,4,3,2,1};
    int x[]={1,2,3,4,11,6,7,8,9,10};
    printf("A ordem e -> %d\n", ordenado(v,10));
    printf("A ordem e -> %d\n", ordenado(u,10));
    printf("A ordem e -> %d\n", ordenado(x,10));*/
    
    //Teste do Exercício 12
    float a1, a2, a3;
    int aul,fal;
    float media = 0 ;
 
    printf("Insira a nota da p1: \n");
    scanf("%f", &a1);
    printf("Insira a nota da p2: \n");
    scanf("%f", &a2);
    printf("Insira a nota da p3: \n");
    scanf("%f", &a3);
    printf("Insira qnt de aulas \n");
    scanf("%d", &aul);
    printf("Insira a qnt de faltas\n");
    scanf("%d", &fal);
    char c = situacao(a1,a2,a3,fal,aul,&media);
    printf("A situacao deste aluno e -> %c e a media dele e  -> %f",c,media);
    system("PAUSE");
    return (EXIT_SUCCESS);
}