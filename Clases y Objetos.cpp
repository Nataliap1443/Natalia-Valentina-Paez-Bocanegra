#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    string profesion;
public:
    Persona(string _nombre, int _edad, string _profesion) {
        nombre = _nombre;
        edad = _edad;
        profesion = _profesion;
    }

    void caminar() {
        cout << nombre << " esta caminando." << endl;
    }

    void hablar(string mensaje) {
        cout << nombre << " dice: " << mensaje << endl;
    }
};

int main() {

    Persona persona1("Juan", 30, "Ingeniero");
    Persona persona2("Maria", 25, "Doctora");


    persona1.caminar();
    persona2.hablar("Hola ¿Como estas?");

    return 0;
}

