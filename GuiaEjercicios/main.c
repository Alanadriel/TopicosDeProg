#include "C:\Unlam\2C2024TOPICOS\Librerias\LVectores.h"
#include "C:\Unlam\2C2024TOPICOS\Librerias\Matrices.h"
#include "..\Librerias\Genericos.h"
#include "..\Librerias\Cadenas.h"
#include "..\Librerias\Dinamicos.h"
#include "../Librerias/Archivos.h"

int main()
{
    float vec[10]={2,1,-2,5,0.5,1},ce=6 ;
    float menor;

    menor = *(float*)buscarMenorVec(vec,ce,sizeof(float),comparar_float );
    printf("%f",menor);
    return 0;
}
