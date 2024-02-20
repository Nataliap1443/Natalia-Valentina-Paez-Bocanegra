#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;

public:
    Persona(std::string _nombre, int _edad) : nombre(_nombre), edad(_edad) {
        std::cout << "Se ha creado a " << nombre << " con edad " << edad << std::endl;
    }

    ~Persona() {
        std::cout << nombre << " ha sido destruido." << std::endl;
    }
};

int main() {
    Persona persona1("Juan", 30);

    return 0;
}

