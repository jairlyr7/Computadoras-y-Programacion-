struct alumnos
{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char nCuenta[10];
};

typedef struct alumnos ALUMNO;

ALUMNO nuevoAlumno(){
	ALUMNO tmp;
		
	printf("Introduce la edad:");
	scanf("%d",&tmp.edad);
	
	printf("Introduce el nombre:");
    scanf("%*c%[^\n]",tmp.nombre);
	
	printf("Introduce el genero:");
	scanf("%c",&tmp.genero);
	
	printf("Introduce carrera:");
    scanf("%*c%[^\n]",tmp.carrera);
	
	printf("Introduce numero de cuenta:");
	scanf("%*c%[^\n]",tmp.nCuenta);

	
	return tmp;
}
