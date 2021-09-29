// Archivos de Texto 
// Uso FEOF()

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char CAR;
	FILE * FP;
	
	if ( (FP = fopen("arch02.exe", "rb")) == NULL ) {
		printf("\n\n Error apertura de archivo \n\n");	
		exit(1);
	};
		
	printf("\nContenido del archivo\n");
	CAR = getc(FP);
	while ( ! feof(FP) ) {
		printf("%02X", CAR);
		CAR = getc(FP);
	}
	
	fclose(FP);
		
	return 0;
}
