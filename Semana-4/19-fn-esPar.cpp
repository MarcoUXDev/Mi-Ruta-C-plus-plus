#include <iostream>
using namespace std;

bool esPar(int valor);

int main() {
    int valor;

    cout << "Vamos a ver si el calor es Par o Impar." << endl;
    cout << "Ingrea el valor: " ;
    cin >> valor;

    cout << boolalpha << esPar(valor) << endl;

    return 0;
}

bool esPar(int valor){
    return (valor % 2 == 0);
}