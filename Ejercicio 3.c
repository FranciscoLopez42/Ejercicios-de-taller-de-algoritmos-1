#include <stdio.h>
#include <stdlib.h>

void mostrarSimboloAscii(int numero) {
	if (numero >= 0 && numero <= 127) {
		printf("El s�mbolo correspondiente al n�mero %d en la tabla ASCII es: %c\n", numero, (char)numero);
	} else {
		printf("El n�mero %d est� fuera del rango v�lido en la tabla ASCII.\n", numero);
	}
}

int main() {
	int numero;
	
	printf("Ingresa un n�mero entero entre 0 y 127: ");
	scanf("%d", &numero);
	
	mostrarSimboloAscii(numero);
	
	system("pause");
	return 0;
}
