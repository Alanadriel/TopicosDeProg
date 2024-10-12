#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define max1 50

void mostrarMat(int [][max1], unsigned );
void mostrarMatnoN (int [][max1],int , int  );
void sumEncimaDiagPrinci(int [][max1],int , int* );
void sumEncimaSecu(int [][max1],int , int* );
void sumConDiagPrinciEncima(int [][max1],int , int* );
void sumConDiagSecuEncima(int [][max1],int , int* );
void trazaPrincipal(int [][max1],int , int* );
void trazaSecundaria(int [][max1],int , int* );
int esDiagonal(int [][max1],int );
int esIdentidad(int [][max1],int );
int eSimetrica(int [][max1],int);
int mtrTranspuestaInSitu(int [][max1],int);
int mtrTranspuesta(int [][max1],int [][max1], int cf);
int productoMatrices(int [][max1],int,int  ,int [][max1],int , int , int [][max1] );
int triangSupeSD(int [][max1],int,int);



#endif // MATRICES_H_INCLUDED
