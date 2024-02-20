#include <iostream>
using namespace std;

class CuentaBancaria {
private:
    double saldo;

public:

    CuentaBancaria(double s) {
        saldo = s;
    }

    double obtenerSaldo() {
        return saldo;
    }

    void depositar(double cantidad) {
        saldo += cantidad;
    }

    void retirar(double cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
        } else {
            cout << "No hay suficiente saldo en la cuenta." << endl;
        }
    }
};

int main() {
    
    CuentaBancaria cuenta(1000);

    cuenta.depositar(500);

    cuenta.retirar(200);

    cout << "Saldo final: " << cuenta.obtenerSaldo() << endl;

    return 0;
}
