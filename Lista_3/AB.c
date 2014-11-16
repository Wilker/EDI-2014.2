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

Arv* maior_valor(Arv* r) {
    if (!r) return NULL;
    Arv *maiorEsq = r;
    Arv *maiorDir = r;
    Arv *maior = r;
    if (r->esq){
        maiorEsq = maior_valor(r->esq);
    }
    if (r->dir){
        maiorDir = maior_valor(r->dir);
    }
    if(maiorEsq->info>r->info) maior= maiorEsq;
    if(maiorDir->info>maior->info) maior= maiorDir;
    return maior;
}

int conta_folhas(Arv* a){
    if(!a)return 0;
    if((!a->esq) && (!a->dir)) return 1;
    return conta_folhas(a->esq) + conta_folhas(a->dir);
}