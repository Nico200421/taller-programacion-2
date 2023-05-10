#include <stdio.h>
#include <string.h>
#include "operaciones.h"

int login() {
char usuarios[3][50] = {"cristiano", "Haland", "messi"};
char contrasenas[3][50] = {"atletico", "astonvilla", "realmadrid"};
int intentos = 3;
while (intentos > 0) {
    char usuario[50];
    char contrasena[50];
printf("Ingrese usuario: ");
scanf("%s", usuario);
printf("Ingrese contrasena: ");
scanf("%s", contrasena);
    for (int i = 0; i < 3; i++) {
    if (strcmp(usuario, usuarios[i]) == 0 && strcmp(contrasena, contrasenas[i]) == 0) {
return 1;
    }
}
    intentos--;
printf("Usuario o contrasena fallidos. Intento #%d\n", 4 - intentos);
    }
printf("Imposible ingresar.\n");
    return 0;
}
void menu() {
    int opcion;
    while (1) {
printf("Seleccione una opción:\n");
printf("1. Operación de transporte\n");
printf("2. Interactuar en la red social\n");
printf("3. Salir\n");
scanf("%d", &opcion);
    switch (opcion) {
        case 1:
    operacionTransporte(operacionTransporte);
        break;
        case 2:
    redSocial(redSocial);
        break;
        case 3:
printf("Saliendo del programa...\n");
        return;
    default:
        printf("Opción inválida. Seleccione una opción válida.\n");
            break;
        }
    }
}
void redSocial() {
printf("\nInteractuar en la red social\n");
int noticias = 0, eventos = 0, preguntas = 0;
for (int i = 1; i <= 5; i++) {
printf("\nPublicación %d\n", i);
char categoria;
char mensaje[100];
printf("Ingrese el contenido del mensaje: ");
scanf(" %[^\n]", mensaje);
printf("Seleccione una categoría para el mensaje:\n");
printf("N. Noticias\n");
printf("E. Eventos\n");
printf("P. Preguntas\n");
scanf(" %c", &categoria);
switch (categoria) {
    case 'N':
        noticias++;
        break;
    case 'E':
        eventos++;
        break;
    case 'P':
        preguntas++;
        break;
    default:
        printf("Categoría inválida. Seleccione una categoría válida.\n");
        i--;
        break;
    }
}
printf("\nResumen de publicaciones:\n");
printf("Noticias: %d\n", noticias);
printf("Eventos: %d\n", eventos);
printf("Preguntas: %d\n", preguntas);
}