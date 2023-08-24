#include <stdio.h>
#include <stdlib.h>

int validarEnteroPositivo() {
	int num;
	do {
		printf("Ingrese un número entero positivo: ");
		scanf("%d", &num);
	} while (num <= 0);
	return num;
}

int multiplicacionSinOperador(int a, int b) {
	int producto = 0;
	for (int i = 0; i < b; i++) {
		producto += a;
	}
	return producto;
}

int divisionEnteraSinOperador(int dividend, int divisor) {
	int cociente = 0;
	while (dividend >= divisor) {
		dividend -= divisor;
		cociente++;
	}
	return cociente;
}

int main() {
	int num1, num2;
	
	num1 = validarEnteroPositivo();
	num2 = validarEnteroPositivo();
	
	int producto = multiplicacionSinOperador(num1, num2);
	printf("El producto de %d y %d es: %d\n", num1, num2, producto);
	
	int cociente = divisionEnteraSinOperador(num1, num2);
	printf("La división entera de %d entre %d es: %d\n", num1, num2, cociente);
	
	system("pause");
	return 0;
}
