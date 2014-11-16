/* 
 * File:   AB.h
 * Author: Wilker
 *
 * Created on 15 de Novembro de 2014, 23:22
 */

#ifndef AB_H
#define	AB_H

typedef struct Arv {
    int info;
    struct Arv* esq;
    struct Arv* dir;
}Arv;



Arv* arv_cria(int x, Arv* sae, Arv* sad);
void arv_libera (Arv* a);
int arv_contem (Arv* a, int x);
void arv_imprime (Arv* a);
Arv* maior_valor(Arv* a);
int conta_folhas(Arv* a);
#endif	/* AB_H */

