// Archivos de Texto 
// Uso FEOF()

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int CAR;
	FILE * FP;
	
	if ( (FP = fopen("arch02.exe", "r")) == NULL ) {
		printf("\n\n Error apertura de archivo \n\n");	
		exit(1);
	};
		
	printf("\nContenido del archivo\n");
	CAR = getc(FP);
	while ( ! feof(FP) ) {
		putchar(CAR);
		CAR = getc(FP);
	}
	
	fclose(FP);
		
	return 0;
}
