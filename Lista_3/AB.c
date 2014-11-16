#include "AB.h"
#include <stdio.h>

Arv* arv_cria(int x, Arv* sae, Arv* sad) {
    Arv* p = (Arv*) malloc(sizeof (Arv));
    p->info = x;
    p->esq = sae;
    p->dir = sad;
    return p;
}

void arv_libera(Arv* a) {
    if (a != NULL) {
        arv_libera(a->esq); /* libera sae */
        arv_libera(a->dir); /* libera sad */
        free(a); /* libera raiz */
    }
}

int arv_contem(Arv* a, int x) {
    if (a == NULL)
        return 0; /* árvore vazia: não encontrou */
    if (a->info == x)
        return 1;
    else
        return (arv_contem(a->esq, x) ||
            arv_contem(a->dir, x));
}

void arv_imprime(Arv* a) {
    if (a != NULL) {
        printf("%d ", a->info); /* mostra raiz */
        arv_imprime(a->esq); /* mostra sae */
        arv_imprime(a->dir); /* mostra sad */
    }
}