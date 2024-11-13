#include "arma.h"

// Constructor: Inicializa los atributos de la clase Arma
Arma::Arma(std::string nombre, int daño, float alcance)
    : nombre(nombre), daño(daño), alcance(alcance) {}

// Destructor: Llama al método estático para mostrar la destrucción del objeto
Arma::~Arma() {
    mostrar_destruccion(nombre);
}

// Método estático para mostrar el mensaje de destrucción
void Arma::mostrar_destruccion(const std::string& nombre) {
    std::cout << "El arma " << nombre << " ha sido destruida.\n";
}

// Método para mostrar la información del arma
void Arma::mostrar_info() const {
    std::cout << "Arma: " << nombre << "\n";
    std::cout << "Daño: " << daño << "\n";
    std::cout << "Alcance: " << alcance << " metros\n";
}
