#include <stdio.h>
#include <stdlib.h>

int calcularMedia(int num1, int num2) {
	int suma = num1 + num2;
	int media = suma / 2;
	return media;
}

int main() {
	int numero1, numero2;
	
	printf("Ingrese el primer número: ");
	scanf("%d", &numero1);
	
	printf("Ingrese el segundo número: ");
	scanf("%d", &numero2);
	
	int media = calcularMedia(numero1, numero2);
	printf("La media de %d y %d es: %d\n", numero1, numero2, media);
	
	system("pause");
	return 0;
}
