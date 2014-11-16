#include "ABB.h"
#include "AB.h"
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

int maior_valorABB(ABB* a) {
    if (!a)return -1;
    if (!a->dir)return a->info;
    return maior_valorABB(a->dir);
}

ABB* menor_valorABB(ABB* a) {
    if (!a)return NULL;
    if (!a->esq)return a;
    return menor_valorABB(a->esq);
}

int verifica_abb(ABB* a) {
    int dir = 1;
    int esq = 1;
    if (!a)return 1;
    if (a->esq)
        if (a->esq->info < a->info)
            dir = verifica_abb(a->esq);
        else return 0;
    if (a->dir)
        if (a->dir->info > a->info)
            esq = verifica_abb(a->dir);
        else return 0;
    return dir && esq;

}

int similares(ABB* a1, ABB* a2) {
    if ((!a1) && (!a2))
        return 1;
    if((a1&&!a2)||(!a1&&a2))return 0;
    if ((a1->info) == (a2->info)) {
        if (similares(a1->esq, a2->esq) &&
                similares(a1->dir, a2->dir)) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}