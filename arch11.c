// Escritura como formato

#include <stdio.h>
#include <stdlib.h>

int main ()
{

	FILE * FP;
	int I, J;
	
	if ( (FP = fopen("PARABO.DOC", "w")) == NULL ) {
		printf("\n\n Error apertura de archivo \n\n");	
		exit(1);
	}; 

	for (I= -10; I <= 10; I++ ) {
		for (J= -10; J <= 10; J++ )
			fprintf(FP, "%d\t", -(I*I+J*J));
		fprintf(FP, "\n");
	}
	
	fclose(FP);
		
	return 0;
}
