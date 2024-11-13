#include <iostream>
#include "arma.h"

int main() {
    // Crear un objeto de tipo Arma con valores específicos
    Arma espada("Espada Larga", 50, 1.5f);

    // Mostrar la información del arma
    espada.mostrar_info();

    // El destructor se llama automáticamente al salir del alcance del objeto
    return 0;
}
