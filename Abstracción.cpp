#include <iostream>
#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    std::string genero;
public:
    Libro(std::string _titulo, std::string _autor, std::string _genero) 
        : titulo(_titulo), autor(_autor), genero(_genero) {}

    std::string obtenerTitulo() const {
        return titulo;
    }

    std::string obtenerAutor() const {
        return autor;
    }

    std::string obtenerGenero() const {
        return genero;
    }
};

int main() {
    Libro libro1("El Senor de los Anillos", "J.R.R. Tolkien", "Fantasia");

    std::cout << "Titulo: " << libro1.obtenerTitulo() << std::endl;
    std::cout << "Autor: " << libro1.obtenerAutor() << std::endl;
    std::cout << "Genero: " << libro1.obtenerGenero() << std::endl;

    return 0;
}

