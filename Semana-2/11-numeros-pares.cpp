// Mostrar numéros pares

#include <iostream>
using namespace std;

int main(){
    int numero;

    cout << "Vamos a mostrarte los numeros pares que contenga el valor que ingreses." << endl;

    cout << "ingresa un valor: ";
    cin >> numero;

    for(int i = 1; i <= numero; i ++){
        if(i % 2 == 0){
            cout << "Número par " << i << endl;
        }
    }

    for(int i = 1; i <= numero ; i += 2){
        cout << "Número par: " << i << endl;
    }

    return 0;
}