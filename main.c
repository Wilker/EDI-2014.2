/* 
 * File:   main.c
 * Author: Wilker
 *
 * Created on 23 de Agosto de 2014, 20:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    printf("Insira a qnt grana...\n");
    int grana;
    scanf("%d",&grana);
    printf("Qnt nota -> %d\n",total_de_notas(grana));
 
    system("PAUSE");
    return (EXIT_SUCCESS);
}

