#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdbool.h>

int main() {

	//declaramos las variables

	int producto, codMax = 0, codMin = 0, n = 0;
	float precio, precioMin, total = 0.0, media = 0.0, precioMax = 0.0;

	//declaramos constantes

	const float PUNTOSxEURO = 0.25;

	//leemos el primer código

	printf("Introduce el codigo de producto: ");
	scanf_s("%d", &producto);

	//leemos el primer precio

	printf("Introduce el precio del producto: ");
	scanf_s("%f", &precio);

	//guardamos ambos valores como los mínimos

	precioMin = precio;
	codMin = producto;

	//sumamos 1 por cada producto añadido

	n++;

	//si queremos leer más productos:

	while (producto > 0) {
	
		//sumamos el precio al total acumulado

		total += precio;

		//calculamos si el valor introducido de precio es el más alto y su código

		if (precio > precioMax) {
			precioMax = precio;
			codMax = producto;
		}

		//calculamos si el valor introducido de precio es el más bajo y su código

		if (precio < precioMin) {
			precioMin = precio;
			codMin = producto;
		}

		//pedimos un nuevo producto o la finalización del programa

		printf("Introduce un nuevo codigo de producto, para salir presiona 0: ");
		scanf_s("%d", &producto);

		//si se añade otro producto, calculamos el precio

		if (producto > 0) {
			printf("Introduce el precio del producto: ");
			scanf_s("%f", &precio);
			n++; //incrementamos en 1 los productos
		}
	}

	//calculamos la media una vez hemos terminado de añadir productos

	media = total / (float)n;

	//imprimimos los resultados por pantalla

	printf("El total de la compra es: %.2f\n", total);
	printf("La media de importe de los productos es: %.2f\n", media);
	printf("Los puntos acumulados por la compra son: %.2f\n", PUNTOSxEURO * total);
	printf("El producto mas caro tiene el codigo %d y el precio es de %.2f\n", codMax, precioMax);
	printf("El producto mas barato tiene el codigo %d y el precio es de %.2f\n", codMin, precioMin);

	return 0;

}