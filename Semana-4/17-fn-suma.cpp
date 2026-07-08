#include <iostream>
using namespace std;

void suma(float valor1, float valor2);

int main(){
    float valor1, valor2;

    cout << "Vamos hacer una suma." << endl;
    cout << "Ingresa el primer valor: " ;
    cin >> valor1;
    cout << "Ingresa el segundo valor: " ;
    cin >> valor2;

    suma(valor1, valor2);
    return 0;
}

void suma(float valor1, float valor2){
    cout << "La suma es: " << valor1 + valor2 << endl;
}