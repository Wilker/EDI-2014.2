/* 
 * File:   AB.h
 * Author: Wilker
 *
 * Created on 15 de Novembro de 2014, 23:22
 */

#ifndef AB_H
#define	AB_H

typedef struct AB {
    int info;
    struct AB* esq;
    struct AB* dir;
}AB;



AB* arv_cria(int x, AB* sae, AB* sad);
void arv_libera (AB* a);
int arv_contem (AB* a, int x);
void arv_imprime (AB* a);
AB* maior_valor(AB* a);
int conta_folhas(AB* a);
int conta_internos(AB* a);
int altura(AB* a);
int nivel(AB* a, int x);

#endif	/* AB_H */

