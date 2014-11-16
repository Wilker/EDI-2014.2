/* 
 * File:   main.c
 * Author: Wilker
 *
 * Created on 15 de Novembro de 2014, 23:20
 */

#include <stdio.h>
#include <stdlib.h>
#include "AB.h"
#include "ABB.h"
/*
 * 
 */
int main(int argc, char** argv) {
    //Exercício 1
    AB* raiz = arv_cria(2,
                         arv_cria(7,
                                   arv_cria(2,NULL,NULL),
                                   arv_cria(6,
                                             arv_cria(5,NULL,NULL),
                                             arv_cria(11,NULL,NULL))),
                         arv_cria(5,
                                   NULL,
                                   arv_cria(9,
                                             arv_cria(4,NULL,NULL),
                                             NULL)));
    arv_imprime(raiz);
    printf("\n");
    
    //Exercício 2
    AB* maior = maior_valor(raiz);
    printf("%d\n", maior->info);
    
    //Exercício 3
    int folhas = conta_folhas(raiz);
    printf("%d\n", folhas);
    
    //Exercício 5
    int alt = altura(raiz);
    printf("%d\n", alt);
    
    //Exercício 7
    ABB *r = NULL;
     r = abb_insere(r,8);
     r = abb_insere(r,3);
     r = abb_insere(r,10);
     r = abb_insere(r,1);
     r = abb_insere(r,6);
     r = abb_insere(r,14);
     r = abb_insere(r,4);
     r = abb_insere(r,7);
     r = abb_insere(r,13);
     //arv_imprime(r);
    printf("\n");
    
    //Exercício 8
    int maiorABB = maior_valorABB(r);
    printf("%d\n",maiorABB);
    
    //Exercício 9
    ABB *menor = menor_valorABB(r);
    printf("%d\n",menor->info);
    
    //Exercício 11
    int nBin = verifica_abb(raiz);
    int bin = verifica_abb(r);
    printf("%d  %d\n",nBin,bin);
    
    system("pause");
    return (0);
}

