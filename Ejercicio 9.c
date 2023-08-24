#include <stdio.h>
#include <stdlib.h>

int calcularPromedioYAsignarNota(int notas,int cantidad){
	float suma = 0;
	int i=0;
	float promedio;
	for (i = 0; i < cantidad; i++) {
		suma += notas;
	}
	
	promedio = suma / cantidad;
	
	if (promedio >= 9 && promedio <= 10) {
		return 4;
	} else if (promedio >= 8 && promedio < 9) {
		return 3;
	} else if (promedio >= 7 && promedio < 8) {
		return 2;
	} else if (promedio >= 6 && promedio < 7) {
		return 1;
	} else {
		return 0;
	}
}
	
int main(){
	float notas;
	int cantidad;
	int resultado;
	int i=0;
	
	printf("Ingrese la cantidad de notas: ");
	scanf("%d",&cantidad);
	printf("Ingresa las notas del alumno:\n");
	for (i = 0; i < cantidad; i++) {
		printf("Nota %d: ", i + 1);
		scanf("%f", &notas);
	}
	
	resultado=calcularPromedioYAsignarNota(notas,cantidad);
	
	switch (resultado) {
	case 4:
		printf("La nota final es: 4\n");
		break;
	case 3:
		printf("La nota final es: 3\n");
		break;
	case 2:
		printf("La nota final es: 2\n");
		break;
	case 1:
		printf("La nota final es: 1\n");
		break;
	default:
		printf("La nota final es: 0\n");
	}
	
	system("pause");
	return 0;
}
