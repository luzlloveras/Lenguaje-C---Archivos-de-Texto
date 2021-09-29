// Archivos de Texto 
// Uso FEOF()

#include <stdio.h>
#include <stdlib.h>

int main ()
{

	FILE * FP;
	float F;
	
	F = 7.5;
	
	if ( (FP = fopen("FLOTA", "w")) == NULL ) {
		printf("\n\n Error apertura de archivo \n\n");	
		exit(1);
	}; 

	fprintf( FP, "\n%f", F );

	
	fclose(FP);
		
	return 0;
}
