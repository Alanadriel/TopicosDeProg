#include "../Librerias/Archivos.h"
int crearLotePalindromos(const char* nomArch, const char* modo ){
    FILE* pf;
    int i;
    char cad[][MAXLINE] = {
        {"Alli va Ramon y no maravilla",
        {"Amad a la dama"},
        {"Amo la pacifica paloma"},
        {"No lo cases a Colon"},
        {"Ateo por Arabia, iba raro poeta"},
        {"Di clases al Cid"},
        {"El bar es iman o zona miserable"}
    };
    pf = fopen(nomArch,modo); // "wt" crear, write
    if(!pf){
        return 0;
    }
    for(i=0; i < sizeof(cad)/MAXLINE;i++){
        fprintf(pf,"%s\n",cad[i]);
    }

    fclose(pf);
}
