//coseno
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    register int n; 
    double X, Signo=1.0 , Coseno = 0.0, factor=1.0;
    if(argc !=2){
        perror("Error de argumentos."); return -1;
    }
    X=atof(argv[1]);

	for (n = 0; n < 100; n++, Signo*=(-1.0))
	{
		Coseno += (Signo*factor);
		factor *= ( (X / (2.0 * n + 1.0))*(X / (2.0 * n + 2.0)) );
	}
    printf("Cos(%0.3lf)= %lf \nCoseno real= %lf\n",X,Coseno,cos(X));
    return 0;
}

