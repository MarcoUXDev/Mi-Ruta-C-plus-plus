// Número mayor
#include <iostream>
#include <string>
using namespace std;

int main() {
    int numeroA;
    int numeroB;

    cout << "Veamos qué número es mayor." << endl << endl;

    cout << "Ingresa el primer valor: ";
    cin >> numeroA;

    cout << "Ingresa el segundo valor: ";
    cin >> numeroB;

    
    if(numeroA > numeroB){
        cout << "El número " << numeroA << " es mayor que " << numeroB << endl;
    } else if (numeroB > numeroA) {
        cout << "El número " << numeroB << " es mayor que " << numeroA << endl;
    } else {
        cout << "Los números " << numeroA << " y " << numeroB << " son iguales" << endl ;
    }

    return 0;
}