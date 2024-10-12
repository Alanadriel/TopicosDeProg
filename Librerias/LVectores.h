#ifndef LVECTORES_H_INCLUDED
#define LVECTORES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void insertarElemento(int*, int, int, int*, int);
void MostrarVec(int *vec, int *ce );
int insertarOrdAsc(int *Vec ,int ele, int TAM, int *CE);
int EliminarEleXpos(int*,int,int, int*);
int eliminar_1erAParicion(int*, int , int  );
#endif // LVECTORES_H_INCLUDED
