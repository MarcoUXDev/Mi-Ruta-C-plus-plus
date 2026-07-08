#include <iostream>
using namespace std;

int main(){
    float valor;
    float acumulador = 0;
    int numeroDeCiclos = 10;

    cout << endl << "Vamos a sumar "<< numeroDeCiclos <<" numeros." << endl;

    for(int i = 1; i <= numeroDeCiclos; i++) {
        cout << "Ingresa el valor numero " << i << ": ";
        cin >> valor;
        acumulador +=  valor;
    }

    cout << "La suma total de los numeros es de :  " << acumulador << endl;
    cout << "El promedio es: " << acumulador/numeroDeCiclos << endl;
    return 0;
};


// int valores[10] = {10,10,10,10,10,10,10,10,10,10};
    // int acumulador = 0;
    // for(int i = 0; i < 10 ; i++){
    //     acumulador += valores[i];
    // }
    // cout << acumulador << endl;