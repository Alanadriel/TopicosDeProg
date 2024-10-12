#include "..\Librerias\Genericos.h"

void gIntercambio(void*a,void*b, size_t tam){
    char aux;
    while(tam>0){
        aux = *(char*)a;
        *(char*)a = *(char*)b;
        *(char*)b = aux;
        a++;
        b++;
        tam--;
    }
}
int comparar_int(const void*n1, const void* n2){
    return *(int*)n1 - *(int*)n2;
}
float comparar_float(const void*n1, const void* n2){
    return *(float*)n1 - *(float*)n2;
}
void* gMenorElemtVec(const void* base, size_t Ce,size_t tam,float accion(void*,void*)){
    char* ptr = (char*)base;
    char*minimo = ptr;

    for(size_t i=0 ; i < Ce; i++ ){
        if( accion(ptr,minimo)< 0){
            minimo = ptr;
        }
        ptr+=tam;
    }
    return minimo;
}
void gInsertarElemVecOrdenado(const void*base, size_t* Ce,size_t tamEle,size_t TAM,void* elem,int accion(void*,void*)){
}
void* buscarMenorVec(const void* vec, size_t ce,size_t tam_ele, float cmp(const void*,const void*)){

    void* ptr = vec;
    void* menor = ptr;
    for(size_t i=0 ; i < ce-1 ; i++){
        ptr += tam_ele;
        if(cmp(menor,ptr) > 0 ){
            menor = ptr;
        }
    }
    return menor;
}
