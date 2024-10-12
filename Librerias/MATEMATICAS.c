#include "MATEMATICAS.h"
int factorial(int num ){
    //Las validaciones las realiza el usuario (num >0)
    int i, fact=1;

    for(i = num; i>0 ; i--){
        fact *= i ;
    }
    return fact;
}

int combinatoria(int m , int n){
//NO SE REALIZAN LAS VALIDACIONES, m y n (m >= n y n >= 0)

    int combi = 0;
   return combi = factorial(m) /( factorial(n)* factorial(m - n) );

}
double calcuNumDeEuler(int num, double Tol){
    int  x=1;
    double Term=1, dif=0, antTerm ;
    do{
        antTerm = Term;
        Term += pow(num,x)/factorial(x);
        dif = Term > antTerm ? Term - antTerm : antTerm - Term;
        x++;
    }while(dif > Tol);

    return Term;
}

void intercambio(int*a, int*b ){
    int aux = *a;
    *a = *b;
    *b = aux;
}

double raizCuadrad(int num , double TOL){

    double term=1.0,dif,termAnt;
    do{
        termAnt = term;
        term = 0.5*( termAnt + ( num / termAnt )  );
        dif = term > termAnt ? term - termAnt : termAnt - term;
    }while(dif > TOL);

    return term;
}

int perteneceFibonacci(int num){
    int prox,ant=1,aux=1;
    while(prox < num){
            if(prox == num){
            return 1;
        }
        prox= ant + aux;
        ant = aux;
        aux = prox;

    }
    return 0;
}
double calcularSeno(double num, double tole){
    int x=3;
    double term = num,antTer,dif;
    do{
        antTer = term;
        term = pow(num,x) / factorial(x);
        dif = abs(term) > abs(antTer) ? abs(term) - abs(antTer) : abs(antTer)- abs(term) ;
        x+=2;
    }while(dif > tole);

    return term;
}

int Rfactorial(int x ){
    if(x == 0 || x== 1){
        return 1;
    }else{
         return (x * Rfactorial(x-1) );
    }
}
