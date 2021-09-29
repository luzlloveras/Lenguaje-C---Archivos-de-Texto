// Archivos de Texto 01
// Escritura de un archivo de texto

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char CAR;
	FILE * FP;
	
	if ( (FP = fopen("PEPE.TXT", "w")) == NULL ) {
		printf("\n\n Error apertura de archivo \n\n");	
		exit(1);
	};
	
	CAR = getchar();
	while ( CAR != '$' ) {
		putc( CAR, FP);
		CAR = getchar();
	}
	
	fclose(FP);
		
	return 0;
}
