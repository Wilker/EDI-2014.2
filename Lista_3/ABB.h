/* 
 * File:   ABB.h
 * Author: Wilker
 *
 * Created on 16 de Novembro de 2014, 14:49
 */

#ifndef ABB_H
#define	ABB_H

typedef struct ABB {
 int info;
 struct ABB* esq;
 struct ABB* dir;
 }ABB;
 
 ABB* abb_insere(ABB* a, int v);
 int maior_valorABB(ABB* a);
 ABB* menor_valorABB(ABB* a);
 int verifica_abb(ABB* a);


#endif	/* ABB_H */

