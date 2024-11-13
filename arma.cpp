#include "arma.h"

// Constructor
Arma::Arma(std::string nombre, int daño, float alcance)
    : nombre(nombre), daño(daño), alcance(alcance) {}

// Destructor
Arma::~Arma() {
    // No es necesario hacer nada específico en este caso, pero se incluye por buenas prácticas
    std::cout << "El arma " << nombre << " ha sido destruida.\n";
}

// Método para mostrar la información del arma
void Arma::mostrar_info() const {
    std::cout << "Arma: " << nombre << "\n";
    std::cout << "Daño: " << daño << "\n";
    std::cout << "Alcance: " << alcance << " metros\n";
}
