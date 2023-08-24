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
	
	printf("Elija la conversión:\n");
	printf("a) Días a horas\n");
	printf("b) Horas a días\n");
	scanf("%c", &opcion);
	
	if (opcion == 'a' || opcion == 'A') {
		printf("Ingrese la cantidad de días: ");
		scanf("%d", &cantidad);
		printf("%d días equivalen a %d horas.\n", cantidad, diasAHoras(cantidad));
	} else if (opcion == 'b' || opcion == 'B') {
		printf("Ingrese la cantidad de horas: ");
		scanf("%d", &cantidad);
		printf("%d horas equivalen a %d días.\n", cantidad, horasADias(cantidad));
	} else {
		printf("Opción inválida.\n");
	}
	
	system("pause");
	return 0;
}
