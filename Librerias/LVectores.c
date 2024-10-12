#include "C:\Unlam\2C2024TOPICOS\Librerias\LVectores.h"
void MostrarVec(int *vec, int *ce ){
    int i;
    printf("[ ");
    for( i = 0 ; i < *(ce) ; i++){
        printf("%d, ",*(vec+i) );
    }
    printf(" ]\n");
}
void insertarElemento(int *Vec ,int ele, int TAM, int *CE, int pos ){
    int *Plec = Vec;

    if(*CE == TAM){
        Vec += *CE-1;
        Plec = Vec-1;}
    else{
        Vec += *(CE)-1;
        Plec = Vec-1;}

    while(pos < *(CE) ){
        *Vec = *Plec ;
        Vec--;
        Plec--;
        pos++;  }
        *Vec = ele;
        /* (*CE)++;*/  }
int insertarOrdAsc(int *Vec ,int ele, int TAM, int *CE){
    int*pIni= Vec;
    Vec += (*(CE) == TAM )? *(CE)-1 : *(CE) ;
    if(Vec == (TAM-1) && ele > *(Vec) ){
        return -1;}
    while(pIni< Vec && *(Vec-1 )> ele){
         *(Vec)=  *(Vec-1 );
        Vec--;
    }
    *Vec = ele;
    (*CE != TAM)? (*CE)++ : *CE ;

    return 1;
}
int EliminarEleXpos(int* vec,int pos ,int TAM, int *ce){
    vec += pos;
    for(int i = pos; i < *ce ;i++){
        *(vec-1) = *vec;
        vec++;
    }
    (*ce)--;

    return 1;
}
/*int eliminar_1erAParicion(int* vec, int ele, int*Ce  ){
    int i=0, *plec=vec+1,*pEscri=vec ;

    for(i; i<*Ce; i++){
        if(*plec== ele){
            plec++;

        }
    }
}*/
