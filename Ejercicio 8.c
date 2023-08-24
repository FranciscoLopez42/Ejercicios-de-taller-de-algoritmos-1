#include <stdio.h>
#include <stdlib.h>

int diasAHoras(int dias) {
	return dias*24;
}

int horasADias(int horas) {
	return horas/24;
}

int main() {
	int cantidad;
	char opcion;
	
	printf("Elija la conversi�n:\n");
	printf("a) D�as a horas\n");
	printf("b) Horas a d�as\n");
	scanf("%c", &opcion);
	
	if (opcion == 'a' || opcion == 'A') {
		printf("Ingrese la cantidad de d�as: ");
		scanf("%d", &cantidad);
		printf("%d d�as equivalen a %d horas.\n", cantidad, diasAHoras(cantidad));
	} else if (opcion == 'b' || opcion == 'B') {
		printf("Ingrese la cantidad de horas: ");
		scanf("%d", &cantidad);
		printf("%d horas equivalen a %d d�as.\n", cantidad, horasADias(cantidad));
	} else {
		printf("Opci�n inv�lida.\n");
	}
	
	system("pause");
	return 0;
}
