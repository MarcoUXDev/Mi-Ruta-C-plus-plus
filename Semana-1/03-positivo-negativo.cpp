// Positivo o Negativo

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un número:" << endl;
    cin >> numero;

    if(numero == 0) {
        cout << "Este valor no es ni positivo ni negativo." << endl;
    } else if(numero > 0) {
        cout << "El número es positivo." << endl;
    } else {
        cout << "El número es negativo";
    }

    return 0;
}