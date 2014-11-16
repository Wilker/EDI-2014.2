/* 
 * File:   main.c
 * Author: Wilker
 *
 * Created on 15 de Novembro de 2014, 23:20
 */

#include <stdio.h>
#include <stdlib.h>
#include "AB.h"
/*
 * 
 */
int main(int argc, char** argv) {
    //Exercício 1
    Arv* raiz = arv_cria(2,
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
    Arv* maior = maior_valor(raiz);
    printf("%d\n", maior->info);
    
    //Exercício 3
    int folhas = conta_folhas(raiz);
    printf("%d\n", folhas);
    
    //Exercício 5
    int alt = altura(raiz);
    printf("%d\n", alt);
    
    system("pause");
    return (0);
}

