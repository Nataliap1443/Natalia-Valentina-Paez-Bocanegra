#include <iostream>
#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;

public:
    Vehiculo(const std::string& marca, const std::string& modelo)
        : marca(marca), modelo(modelo) {}

    void mostrarDatos() const {
        std::cout << "Marca: " << marca << ", Modelo: " << modelo << std::endl;
    }
};

class Automovil : public Vehiculo {
private:
    int numPuertas;

public:
    Automovil(const std::string& marca, const std::string& modelo, int numPuertas)
        : Vehiculo(marca, modelo), numPuertas(numPuertas) {}

    void mostrarDatos() const {
        Vehiculo::mostrarDatos();
        std::cout << "Número de puertas: " << numPuertas << std::endl;
    }
};

class Motocicleta : public Vehiculo {
private:
    std::string tipo;

public:
    Motocicleta(const std::string& marca, const std::string& modelo, const std::string& tipo)
        : Vehiculo(marca, modelo), tipo(tipo) {}

    void mostrarDatos() const {
        Vehiculo::mostrarDatos();
        std::cout << "Tipo: " << tipo << std::endl;
    }
};

int main() {
    Automovil carro("Toyota", "Corolla", 4);
    Motocicleta moto("Honda", "CBR", "Deportiva");

    std::cout << "Datos del automóvil:" << std::endl;
    carro.mostrarDatos();

    std::cout << "\nDatos de la motocicleta:" << std::endl;
    moto.mostrarDatos();

    return 0;
}
