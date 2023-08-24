#include <stdio.h>
#include <stdlib.h>

void mostrarSimboloAscii(int numero) {
	if (numero >= 0 && numero <= 127) {
		printf("El símbolo correspondiente al número %d en la tabla ASCII es: %c\n", numero, (char)numero);
	} else {
		printf("El número %d está fuera del rango válido en la tabla ASCII.\n", numero);
	}
}

int main() {
	int numero;
	
	printf("Ingresa un número entero entre 0 y 127: ");
	scanf("%d", &numero);
	
	mostrarSimboloAscii(numero);
	
	system("pause");
	return 0;
}
