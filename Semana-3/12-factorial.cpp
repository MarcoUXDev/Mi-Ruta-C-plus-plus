// Calcular el factorial de un número
#include <iostream>
using namespace std;

int main() {
    int factorial;

    cout << "\nVamos a calcular el factorial de un número." << endl << endl;

    cout << "Ingresa el número del que deseas saber el factorial: ";
    cin >> factorial;

    int acumulador = 1;
    for(int i = factorial ; i >= 1 ; i--){
        if (i > 1){
          cout << i << " X " ;
        } else {
            cout << 1;
        }
        acumulador *= i;
    }
    cout << " = " << acumulador;
    return 0;
}