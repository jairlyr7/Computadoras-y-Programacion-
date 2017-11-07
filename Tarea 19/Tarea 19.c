#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	int fila, columna;
	printf("Introdusca lado del cuadrado:\n");
	scanf("%d",&n);
	for(fila=1;fila<=n;fila++){
		for(columna=1;columna<=n;columna++)
		printf("*");
		printf("\n");
	}
	return 0;
}
