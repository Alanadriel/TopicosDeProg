#include "..\Librerias\Dinamicos.h"
void* crearVecDinamico(size_t tamVec,size_t tipo_tam ){
    void* vec = malloc(tamVec * tipo_tam);
    if(!vec){
        printf("Error al asignar memoria");
        return NULL;
    }
    return vec;
}
void** crearMatrizDinamica(size_t f,size_t c, size_t tipo_tam){
    void **matr, **ini;

    matr = malloc( f * sizeof(void*) );
        if(!matr){
            printf("Error al asignar memoria");
            return NULL;
        }

    ini = matr;
    for(int i=0; i < f ; i++){
        *(matr) = malloc( c * tipo_tam );
            if(!*(matr) ){
                printf("Error al asignar memoria");
                DestruirMatDinamica(ini,i);
                return NULL;
            }
        matr++;
    }

    return ini;
}
void DestruirMatDinamica(void** mat,size_t filas){
    int i;
    for(i=0 ; i<filas; i++ ){
        free(*(mat+i) );
    }
    free(mat);
}
char* copiaCadena(const char* origen){
    char* dest, *ini;
    dest = malloc( strlen(origen+1)*sizeof(char) );
    if(!dest){
        printf("Error al asignar memoria copiaCadena");
        return NULL;
    }
    ini = dest;
    while(*origen){
        *dest = *origen;
        dest++;
        origen++;
    }
    *dest = '\0';
    return ini;
}
/*void* copiaCosas(void*elemento,size_t tam ){
    void* dest,*ini;
    dest = malloc(tam*sizeof(*elemento) );
    if(!dest){
            printf("Error al asignar Memoria copia cosas");
        return NULL;
    }
    ini = dest;
   char* orig = (char*)elemento;
   char* destino = (char*)dest;

   for(int i =0 ; i< tam ; i++){
        *destino = *orig;
        destino++;
        orig++;
   }

    return ini;
}/*/
void* myMemcpy(void* dest,const void* base,size_t n){
    void* ini = dest;
    while(n>0){
        *(char*)dest = *( char*)base;
        dest++;
        base++;
        n--;
    }
    return ini;
}

void* myMemmove(void* dest, const void*base, size_t tam){
    void*ini=dest;

    if( dest - base > 0 && dest - base < base){
        base += tam-1;
        dest += tam-1;
      while(tam>0){
        *(char*)dest = *(char*)base;
        dest--;
        base--;
        tam--;

      }
        return ini;

    }else{
        while(tam>0){
            *(char*)dest = *(char*)base;
            dest++;
            base++;
            tam--;
        }
        return tam;
    }
}
