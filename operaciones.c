
#include <stdio.h>
#include <string.h>
#include "funciones.h"


float calcularPrecioRuta(char tipoRuta, float distancia) {
    float precioPorKm;
    if (tipoRuta == 'U') {
        precioPorKm = 0.10;
    } else if (tipoRuta == 'I') {
        precioPorKm = 0.15;
    } else {
        precioPorKm = 0.20;
    }
    return precioPorKm * distancia;
}

float calcularDescuento(float costoTotal) {
    float descuento = 0.0;
    if (costoTotal >= 500.0) {
        descuento = 0.20 * costoTotal;
    } else if (costoTotal >= 100.0) {
        descuento = 0.10 * costoTotal;
    } else if (costoTotal >= 50.0) {
        descuento = 0.05 * costoTotal;
    }
    return descuento;
}
void operacionTransporte() {
printf("\ operaciónTransporte\n");
for (int i = 1; i <= 5; i++) {
    printf("\nCliente %d\n", i);
    char tipoRuta;
    float distancia;
    printf("Ingrese el tipo de ruta (U=urbana, I=interurbana, N=internacional): ");
    scanf(" %c", &tipoRuta);
    printf("Ingrese la distancia en kilómetros: ");
    scanf("%f", &distancia);
    float precio = calcularPrecioRuta(tipoRuta, distancia);
    float descuento = calcularDescuento(precio);
    float total = precio - descuento;
    printf("Subtotal: $%.2f\n", precio);
    printf("Descuento: $%.2f\n", descuento);
    printf("Total: $%.2f\n", total);
    }
}