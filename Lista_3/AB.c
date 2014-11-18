#include "AB.h"
#include <stdio.h>

AB* arv_cria(int x, AB* sae, AB* sad) {
    AB* p = (AB*) malloc(sizeof (AB));
    p->info = x;
    p->esq = sae;
    p->dir = sad;
    return p;
}

void arv_libera(AB* a) {
    if (a != NULL) {
        arv_libera(a->esq); /* libera sae */
        arv_libera(a->dir); /* libera sad */
        free(a); /* libera raiz */
    }
}

int arv_contem(AB* a, int x) {
    if (a == NULL)
        return 0; /* árvore vazia: não encontrou */
    if (a->info == x)
        return 1;
    else
        return (arv_contem(a->esq, x) ||
            arv_contem(a->dir, x));
}

void arv_imprime(AB* a) {
    if (a != NULL) {
        printf("%d ", a->info); /* mostra raiz */
        arv_imprime(a->esq); /* mostra sae */
        arv_imprime(a->dir); /* mostra sad */
    }
}

AB* maior_valor(AB* r) {
    if (!r) return NULL;
    AB *maiorEsq = r;
    AB *maiorDir = r;
    AB *maior = r;
    if (r->esq) {
        maiorEsq = maior_valor(r->esq);
    }
    if (r->dir) {
        maiorDir = maior_valor(r->dir);
    }
    if (maiorEsq->info > r->info) maior = maiorEsq;
    if (maiorDir->info > maior->info) maior = maiorDir;
    return maior;
}

int conta_folhas(AB* a) {
    if (!a)return 0;
    if ((!a->esq) && (!a->dir)) return 1;
    return conta_folhas(a->esq) + conta_folhas(a->dir);
}

int conta_internos(AB* a) {
    int qntNos = 0, qntFolhas = 0;
    qntNos = conta_nos(a);
    qntFolhas =conta_folhas(a);
    return qntNos-qntFolhas;
}
int conta_nos(AB* a){
    if(!a)return 0;
    return conta_nos(a->esq)+conta_nos(a->dir)+1;
}

int altura(AB* a) {
    if (!a)return -1;
    return 1 + maximo(altura(a->esq), altura(a->dir));
}

int maximo(int x, int y) {
    if (x > y)return x;
    return y;
}

int nivel(AB* a, int x) {

}