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
Encapsulación:

 //Se ha hecho que el método estático mostrar_destruccion sea privado y no esté expuesto en la interfaz pública (arma.h).
 //Los detalles internos, como la destrucción del objeto, son manejados solo dentro de la clase, lo que hace que el código sea más seguro y modular.
 //Métodos Públicos:

 //Solo los métodos necesarios como mostrar_info y el constructor/destructor son accesibles desde fuera de la clase.
 //Ventajas:

 //Seguridad: Los detalles internos no son accesibles desde fuera de la clase, lo que reduce el riesgo de modificaciones indeseadas.
 //Mantenimiento más fácil: Cambiar la lógica interna (como la destrucción) no afectará a quienes usen la clase.
 //Modularidad: Solo se exponen los métodos relevantes, haciendo que la clase sea más flexible y limpia.
 //Este enfoque mejora la seguridad y modularidad del código al ocultar detalles de implementación dentro de la clase y exponer solo lo necesario a través de la interfaz pública.



