#include "..\Librerias\Cadenas.h"
size_t myStrlen(const char *s){
    char* cant=(char*) s;
    while(*cant){
        cant++;
    }
    return cant-s;
}
char* myStrcat(char* d , const char* src ){
    char* ini= d, *cp =(char*)src ;
    while(*d){d++;}
    while(*cp){
        *d = *cp;
        d++;
        cp++; }
    *d = '\0';
    return ini;
}
char* myStrcpy(char *dest, const char *base){
    char *ini=dest, *ptb = (char*)base  ;
    while(*ptb){
        *dest= *ptb;
        dest++;
        ptb++;
    }
    *dest='\0';
    return ini;
}
char* myStrchr(char *s1, int carac){
    while(*s1){
        if(*s1 ==carac){
            return s1;
        }
        s1++;
    }
    return NULL;
}
int PosChar(char *s1, int c){
    char *ini = s1;
    while(*s1){
        if(*s1 == c){
            return s1-ini;
        }
    }
    return -1;
}
char* myStrrchr(char *s1, int carac){
    char*pos= s1;
    while(*s1){
        if(*s1 ==carac){
            pos = s1;
        }
        s1++;
    }
    return (s1>=pos && *pos == carac )? pos: NULL ;
}
int myStrcmp(const char* s1, const char* s2){
    while(*s1 && *s2){
        if(*s1 != *s2 ){
            return *s1-*s2;
        }
        s1++;
        s2++;
    }
    return *s1-*s2;
}
int myStrncmp(const char* s1, const char* s2,size_t n){
    int i;
    for(i=0 ; i < n-1 ; i++ ){
        if(*s1 != *s2 ){
            return *s1-*s2;
        }
        s1++;
        s2++;
    }
    return *s1-*s2;
}
void Desofuscar( char* text, char* grup){
    int pos, letr=1,tam=myStrlen(grup) ;
    while(*text){
        while(ESLETRA(*text)!=-1 ){text++;}
        while(ESLETRA(*text)){
            pos=PosChar(grup,*text);
            if(pos != -1){
                pos = ( pos + letr )%tam;
                *text= *(grup+pos );
                pos =-1;
                text++;
            }
            letr =1;
         }
    }
}


