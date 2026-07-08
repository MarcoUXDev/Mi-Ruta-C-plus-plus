// Calculadora básica

#include <iostream>
using namespace std;

int main(){
    float valor1, valor2;

    cout << "Ingresa el primer valor: ";
    cin >> valor1;

    cout << "Ingresa el segundo valor: ";
    cin >> valor2;

    // suma
    cout << "\nLa suma de los números " << valor1 << " + " << valor2 << " = " << valor1 + valor2;
    
    // Resta
    cout << "\nLa Resta de los números " << valor1 << " - " << valor2 << " = " << valor1 - valor2;
    
    // Multiplicación
    cout << "\nLa Multiplicación de los números " << valor1 << " * " << valor2 << " = " << valor1 * valor2;
    
    // División
    if( valor2 != 0){
        cout << "\nLa División de los números " << valor1 << " / " << valor2 << " = " << valor1 / valor2;
    } else {
        cout << "\nLa división entre 0 no se puede realizar.";
    }

    return 0;
}