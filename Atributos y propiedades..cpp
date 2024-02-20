#include <iostream>
#include <string>

class Coche {
private:
    std::string marca;
    std::string modelo;
    std::string color;
    double velocidad;

public:
    Coche(std::string _marca, std::string _modelo, std::string _color) 
        : marca(_marca), modelo(_modelo), color(_color), velocidad(0.0) {}

    std::string GetMarca() const { return marca; }
    std::string GetModelo() const { return modelo; }
    std::string GetColor() const { return color; }
    double GetVelocidad() const { return velocidad; }

    void Acelerar(double incremento) {
        velocidad += incremento;
    }

    void Frenar(double decremento) {
        velocidad -= decremento;
        if (velocidad < 0.0) {
            velocidad = 0.0;
        }
    }
};

int main() {
    Coche miCoche("Toyota", "Corolla", "Azul");

    std::cout << "Marca: " << miCoche.GetMarca() << std::endl;
    std::cout << "Modelo: " << miCoche.GetModelo() << std::endl;
    std::cout << "Color: " << miCoche.GetColor() << std::endl;

    miCoche.Acelerar(50.0);
    std::cout << "Velocidad: " << miCoche.GetVelocidad() << " km/h" << std::endl;

    miCoche.Frenar(20.0);
    std::cout << "Velocidad: " << miCoche.GetVelocidad() << " km/h" << std::endl;

    return 0;
}

