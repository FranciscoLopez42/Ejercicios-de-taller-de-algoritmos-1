#include <stdio.h>
#include <stdlib.h>

void ocultarNumero(char numero[]) {
	for (int i = 0; i < 6; i++) {
		numero[i] = '*';
	}
}

void mostrarNumeroOculto(char numero[]) {
	char opcion;
	
	printf("Número ingresado: %s\n", numero);
	printf("¿Desea ver el número original? (S/N): ");
	scanf(" %c", &opcion);
	
	if (opcion == 'S' || opcion == 's') {
		printf("Número original: ");
		for (int i = 0; i < 6; i++) {
			printf("%c", numero[i]);
		}
		printf("\n");
	}
}

int main() {
	char numero[7];
	
	printf("Ingrese un número de 6 dígitos: ");
	scanf("%6s", numero);
	
	ocultarNumero(numero);
	
	mostrarNumeroOculto(numero);
	
	system("pause");
	return 0;
}
