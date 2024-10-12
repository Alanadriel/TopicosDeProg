#ifndef GENERICOS_H_INCLUDED
#define GENERICOS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

//int genInsertElemVec(void* , )
void gIntercambio(void*,void*,size_t);
void* gMenorElemtVec(const void*, size_t,size_t,float accion(void*,void*));
int comparar_int(const void*, const void*);
float comparar_float(const void*,const void*);
void gInsertarElemVecOrdenado(const void*, size_t*,size_t,size_t,void*,int accion(void*,void*));
void* buscarMenorVec(const void*, size_t,size_t, float cmp(const void*,const void*));
#endif // GENERICOS_H_INCLUDED
