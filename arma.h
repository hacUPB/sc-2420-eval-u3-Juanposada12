 //encapsulamiento

 #ifndef ARMA_H
#define ARMA_H

#include <iostream>
#include <string>

class Arma {
private:
    std::string nombre;  // Nombre del arma
    int daño;            // Daño del arma
    float alcance;       // Alcance del arma

    // Método estático para mostrar el mensaje de destrucción (no expuesto)
    static void mostrar_destruccion(const std::string& nombre);

public:
    // Constructor que inicializa el arma con nombre, daño y alcance
    Arma(std::string nombre, int daño, float alcance);

    // Destructor que se llama cuando el objeto Arma es destruido
    ~Arma();

    // Método que muestra la información del arma
    void mostrar_info() const;
};

#endif // ARMA_H
