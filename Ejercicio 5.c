#include <stdio.h>
#include <stdlib.h>

void calcularYMostrarMedia(int num1, int num2, int num3) {
	float suma = num1 + num2 + num3;
	float media = suma / 3;
	
	printf("La media de %d, %d y %d es: %f\n", num1, num2, num3, media);
}

int main() {
	int numero1, numero2, numero3;
	
	printf("Ingrese el primer n�mero: ");
	scanf("%d", &numero1);
	
	printf("Ingrese el segundo n�mero: ");
	scanf("%d", &numero2);
	
	printf("Ingrese el tercer n�mero: ");
	scanf("%d", &numero3);
	
	calcularYMostrarMedia(numero1, numero2, numero3);
	
	system("pause");
	return 0;
}
