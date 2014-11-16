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
 

#endif	/* ABB_H */

