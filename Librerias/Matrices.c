#include "C:\Unlam\2C2024TOPICOS\Librerias\Matrices.h"
void mostrarMat(int mat[][max1], unsigned cf ){
        for(int i=0 ; i < cf ; i++){
            for(int j=0; j< cf; j++ ){
                printf(" %d |", mat[i][j]);
            }
            printf(" \n");
        }
}
void mostrarMatnoN (int m[][max1],int cf , int cc  ){
    //int i,j;
    for(int i=0 ; i < cf ; i++){
            for(int j=0; j< cc; j++ ){
                printf(" %d |", m[i][j]);
            }
            printf(" \n");
        }
}
void sumEncimaDiagPrinci(int mat[][max1],int cf , int *sum ){
    int i , j;
    for( i=0 ; i < cf-1 ; i++){
        for(j=i+1 ; j < cf ; j++ ){
            *(sum) += mat[i][j];
        }

    }
}
void sumEncimaSecu(int matr[][max1],int cf, int*acum ){
    int i , j;
    for( i=0 ; i < cf ; i++){
        for(j=0 ; j < cf-1-i ; j++ ){
            *(acum) += matr[i][j];
        }

    }

}
void sumConDiagPrinciEncima(int m[][max1],int cf , int* acum ){
     int i , j;
    for( i=0 ; i < cf ; i++){
        for(j=i ; j < cf ; j++ ){
            *(acum) += m[i][j];
        }

    }
}
void sumConDiagSecuEncima(int m[][max1],int cf , int* acum ){
     int i , j;
    for( i=0 ; i < cf ; i++){
        for(j=0 ; j < cf-i ; j++ ){
            *(acum) += m[i][j];
        }

    }
}
void trazaPrincipal(int m[][max1],int cf , int*acum ){
    int i;
    for(i=0 ; i<cf ; i++){
        *acum += m[i][i];
    }
}
void trazaSecundaria(int m[][max1],int cf , int*acum ){
    int i;
    for(i=0 ; i<cf ; i++){
        *acum += m[i][cf-1-i];
    }
}
int esDiagonal(int m[][max1],int cf ){
    int i,j;

    for(i=0; i< cf ; i++){
        for(j=i+1; j< cf; j++){
            if(m[i][j] != 0  || m[j][i] !=0){
                return 0;
            }
        }
    }
    return 1;
}
int esIdentidad(int m[][max1],int cf ){
    int i,j;

    for(i=0; i< cf ; i++){
        if(m[i][i] !=1 ){
                return 0;
            }
        for(j=i+1; j< cf; j++){
            if(m[i][j] !=0 || m[j][i] !=0 ){
                return 0;
            }
        }
    }
    return 1;
}
int eSimetrica(int m[][max1],int cf ){
    int i,j;

    for(i=0; i< cf ; i++){
        for(j=i+1; j< cf; j++){
            if(m[i][j] != m[j][i] ){
                return 0;
            }
        }
    }
    return 1;
}
int mtrTranspuestaInSitu(int m[][max1],int cf){
    int i,j,aux;

    for(i=0; i< cf ; i++){
        for(j=i+1; j< cf; j++){
           aux = m[i][j];
           m[i][j] = m[j][i];
           m[j][i]= aux;
        }
    }
    return 1;
}
int mtrTranspuesta(int mOrig[][max1],int mResul[][max1], int cf){
    int i,j;

    for(i=0; i< cf ; i++){
            mResul[i][i]= mOrig[i][i];
        for(j=i+1; j< cf; j++){
           mResul[i][j]= mOrig[j][i];
           mResul[j][i]= mOrig[i][j];
        }
    }
    return 1;
}
int productoMatrices(int m1[][max1],int cfM1,int ccM1 ,int m2[][max1],int cfM2 , int ccM2, int mResul[max1][max1] ){
    int i,j,k,sum;
    for(i=0; i<cfM1;i++){
        for(j=0; j < ccM2 ; j++ ){
            sum=0;
            for(k=0; k < ccM1; k++ ){
              sum += m1[i][k]*m2[k][j];
              mResul[i][j]= sum;
            }
        }
    }
    return 1;
}
int triangSupeSD(int m[][max1],int cf,int cc){
   int i,j;

   cf = (cf % 2 == 0)? (cf/2)-1 : (cf/2) ;
   for(i=0 ; i < cf ; i++){

        for(j= i+1 ; j <= cc ; j++){
            printf("%d \n",m[i][j]);
            cc--;
        }

   }
    return 1;
}
