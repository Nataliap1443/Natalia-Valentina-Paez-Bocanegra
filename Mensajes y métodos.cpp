#include <iostream>
using namespace std;

class Perro {
public:
    void ladrar() {
        cout << "Guau! Guau!" << endl;
    }
};

int main() {

    Perro miPerro;

    miPerro.ladrar();
    return 0;
}

