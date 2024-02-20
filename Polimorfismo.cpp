#include <iostream>
#include <cmath>


class Forma {
public:
    virtual double calcularArea() const = 0; 
};

class Circulo : public Forma {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double calcularArea() const override {
        return M_PI * radio * radio;
    }
};

class Rectangulo : public Forma {
private:
    double base;
    double altura;
public:
    Rectangulo(double b, double h) : base(b), altura(h) {}
    double calcularArea() const override {
        return base * altura;
    }
};

int main() {
    Circulo circulo(5.0);
    Rectangulo rectangulo(4.0, 6.0);

    Forma* forma1 = &circulo;
    Forma* forma2 = &rectangulo;

    std::cout << "Area del circulo: " << forma1->calcularArea() << std::endl;
    std::cout << "Area del rectangulo: " << forma2->calcularArea() << std::endl;

    return 0;
}

