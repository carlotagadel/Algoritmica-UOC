#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdbool.h>

int main() {

	//declaramos las variables

	int producto, n = 0;
	float precio, total = 0.0, media = 0.0;

	//declaramos constantes

	const float PUNTOSxEURO = 0.25;

	//leemos el primer código

	printf("Introduce el codigo de producto: ");
	scanf("%d", &producto);

	//leemos el precio del producto

	while (producto > 0) {
		printf("Introduce el precio del producto: ");
		scanf("%f", &precio);

		//sumamos el precio al total acumulado

		total += precio;

		//sumamos 1 por cada producto que añadimos

		n++;

		printf("Introduce un nuevo codigo de producto, para salir presiona 0: ");
		scanf("%d", &producto);
	}

	media = total / (float)n;

	printf("El total de la compra es: %.2f\n", total);
	printf("La media de importe de los productos es: %.2f\n", media);
	printf("Los puntos acumulados por la compra son: %.2f\n", PUNTOSxEURO * total);

	return 0;
	
}