#include <iostream>
using namespace std;

int main(){
    int numeros[5];
    int numeroABuscar;
    bool existeNumero =  false;

    cout << "Busqueda líneal en un array." << endl << endl;

    for(int i = 0; i < 5; i ++){
        cout << "Ingresa valor: ";
        cin >> numeros[i];
    }

    cout << "\n¿Qué número te gustaría buscar? ";
    cin >> numeroABuscar;

    for (int i = 0; i < 5; i ++){
        if(numeros[i] == numeroABuscar){
            existeNumero = true;
            cout << "El valor se encuentra en la posición " << i << endl;
        } 
    }
    if(existeNumero == false) {
        cout << "El valor que buscas, NO se ecuentra." << endl;
    }

    return 0;
}