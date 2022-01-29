//seno
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    register int n; 
    double X, Signo=1.0 , Seno = 0.0, factor;
    if(argc !=2){
        perror("Error de argumentos."); return -1;
    }
    X=atof(argv[1]);

    factor = X;
	for (n = 0; n < 100; n++, Signo*=(-1.0))
	{
		Seno += (Signo*factor);
		factor *= ( (X / (2.0 * n + 2.0))*(X / (2.0 * n + 3.0)) );
	}
    printf("Sin(%0.3lf)= %lf \nSeno real= %lf\n",X,Seno,sin(X));
    return 0;
}
