#ifndef CADENAS_H_INCLUDED
#define CADENAS_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define ESLETRA(x) ( (x >'A' && x<'Z' ) || (x >'a' && x<'z' )? 1 : 0   )

size_t myStrlen(const char *s);
char* myStrcat(char* d , const char* src );
char* myStrcpy(char *s1, const char *s2);
char* myStrchr(char *s1, int);
int PosChar(char *s1, int );
char *myStrrchr(char *s, int );
int myStrcmp(const char*, const char*);
int myStrncmp(const char*, const char*,size_t);
//char *myStrncpy(char *s1, const char *s2, size_t n);
void Desofuscar(char*,char*);


#endif // CADENAS_H_INCLUDED
