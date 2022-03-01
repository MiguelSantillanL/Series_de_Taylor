//seno
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// Sin(x) = sum(X^(2n+1))  lim->(0,inf)

int main(){
    register int n; 
    double X, Seno,Aux;
    //printf("X = "); scanf("%lf", &X);
    X =1;

    Seno = X;
    Aux = X;

    for(n = 2 ; n < 25; n+=2){
        Aux *= -(X/n) * ( X/(n+1) );
        Seno += Aux;
    }
 
    printf("Sin(%0.3lf)= %lf \nCon un error de %e \nSeno real= %lf\n" , X , Seno, fabs(Seno - sin(X)),  sin(X) );
    return 0;
}