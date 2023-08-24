#include <stdio.h>
#include <stdlib.h>

void imprimirUnidad(int unidad) {
	switch (unidad) {
	case 0: printf("cero"); break;
	case 1: printf("uno"); break;
	case 2: printf("dos"); break;
	case 3: printf("tres"); break;
	case 4: printf("cuatro"); break;
	case 5: printf("cinco"); break;
	case 6: printf("seis"); break;
	case 7: printf("siete"); break;
	case 8: printf("ocho"); break;
	case 9: printf("nueve"); break;
	}
}

void imprimirDecena(int decena, int unidad) {
	switch (decena) {
	case 0: imprimirUnidad(unidad); break;
	case 1:
		switch (unidad) {
		case 0: printf("diez"); break;
		case 1: printf("once"); break;
		case 2: printf("doce"); break;
		case 3: printf("trece"); break;
		case 4: printf("catorce"); break;
		case 5: printf("quince"); break;
		default: printf("dieci");
		}
		imprimirUnidad(unidad);
		break;
	case 2: printf("veinti"); imprimirUnidad(unidad); break;
	case 3: printf("treinta"); break;
	case 4: printf("cuarenta"); break;
	case 5: printf("cincuenta"); break;
	case 6: printf("sesenta"); break;
	case 7: printf("setenta"); break;
	case 8: printf("ochenta"); break;
	case 9: printf("noventa"); break;
	}
}

void imprimirCentena(int centena, int decena, int unidad) {
	if (centena == 1) {
		printf("ciento");
		if (decena != 0 || unidad != 0) {
			printf(" ");
		}
	} else {
		imprimirUnidad(centena);
		printf("cientos");
		if (decena != 0 || unidad != 0) {
			printf(" ");
		}
	}
}

void imprimirNumeroEnLetras(int numero) {
	if (numero < 0 || numero > 999) {
		printf("Número fuera de rango\n");
		return;
	}
	
	int centena = numero / 100;
	int decena = (numero % 100) / 10;
	int unidad = numero % 10;
	
	if (centena > 0) {
		imprimirCentena(centena, decena, unidad);
	}
	
	if (decena > 0 || unidad > 0) {
		imprimirDecena(decena, unidad);
	}
	
	printf("\n");
}

int main() {
	int numero;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	imprimirNumeroEnLetras(numero);
	
	system("pause");
	return 0;
}
