#ifndef DINAMICOS_H_INCLUDED
#define DINAMICOS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void** crearMatrizDinamica(size_t,size_t,size_t );
void DestruirMatDinamica(void**,size_t);
void* crearVecDinamico(size_t,size_t );
char* copiaCadena(const char*);
void* copiaCosas(void*,size_t);
void* myMemcpy(void*,const void*,size_t);
void* myMemmove(void*, const void*, size_t);

#endif // DINAMICOS_H_INCLUDED
