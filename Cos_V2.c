//Coseno
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    register int n; 
    double X, Coseno,Aux;
    //printf("X = "); scanf("%lf", &X);
    X =1;

    Coseno = 1;
    Aux = 1;

    for(n = 1 ; n < 25; n+=2){
        Aux *= -(X/n) * ( X/(n+1) );
        Coseno += Aux;
    }
 
    printf("Coseno(%0.3lf)= %lf \nCon un error de %e \nCoseno real= %lf\n" , X , Coseno, fabs(Coseno - cos(X)),  cos(X) );
    return 0;
}