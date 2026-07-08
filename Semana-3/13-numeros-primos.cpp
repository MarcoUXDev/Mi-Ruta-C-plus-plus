#include <iostream>
using namespace std;

int main(){
    int numero;

    cout << "\nVamos a ver si el numero que ingresaste es un numero primo." << endl << endl;

    cout << "Ingresa un número: ";
    cin >> numero;
    
    if(numero < 2) {
        cout << " El número debe ser mayor que 1." << endl;
    }

    for(int i = 2; i < numero; i++){
        int acumulador = 2;
        bool esPrimo = true;

        while (esPrimo && acumulador < i){
            if(i % acumulador == 0){
                esPrimo = false;
                cout << "El numero " << i << " no es primo." << endl;
            }
            else {
                acumulador++;
            }
        }
        if(esPrimo){
            cout << "El número " << i << " es primo." << endl;
        }
    }
    return 0;
}