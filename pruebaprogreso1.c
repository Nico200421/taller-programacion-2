#include <stdio.h>
#include <string.h>
#include "operaciones.h"
#include "funciones.h"
//Nicolas Matias Galarza Sanchez
// función para validar credenciales de usuario

// función main
int main() {
int resultado = login();
if (resultado == 1) {
    printf("Bienvenido al sistema.\n");
    menu();
    operacionTransporte();
    redSocial();
} else {
    printf("No se pudo iniciar sesión.\n");
}
return 0;
}