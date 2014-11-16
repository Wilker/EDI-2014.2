#include "ABB.h"
#include <stdlib.h>
#include <stdio.h>

ABB* abb_insere(ABB* a, int v) {
    if (!a) {
        ABB*novo = (ABB*) malloc(sizeof (ABB));
        novo->info = v;
        novo->esq = novo->dir = NULL;
        return novo;
    }
    if (a->info == v)return a;
    if (v < a->info)
        a->esq = abb_insere(a->esq, v);
    else
        a->dir = abb_insere(a->dir, v);
    return a;
}


