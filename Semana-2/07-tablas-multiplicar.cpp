// Tabla de multiplicar

#include <iostream>
using namespace std;

int main (){
    int valor, multiplicador;

    cout << "Tablas de multiplicar de un número." << endl << endl;
    
    cout << "Ingresa el valor: ";
    cin >> valor;

    cout << "\nCuántas veces deseas multiplicarlo: ";
    cin >> multiplicador;


    if (multiplicador > 0) {
        for(int i = 1; i <= multiplicador; i++ ){
            cout << i <<" X " << valor << " = " << valor*i << endl; 
        }
    } else {
        cout << "No se puede proceder con tu multiplicación." << endl;
    }

    return 0;
}