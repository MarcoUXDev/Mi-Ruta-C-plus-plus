/*
    Pedir nombre y edad.

    Si tiene:

    menos de 13 → Niño
    de 13 a 17 → Adolescente
    de 18 a 59 → Adulto
    60 o más → Adulto mayor
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string nombre;
    int edad;

    cout << "Vamos a calcular en qué rango te encuentras" << endl << endl;

    cout << "Cual es tu nombre: ";
    cin >> nombre;
    
    cout << "\n" << nombre << ", qué edad tienes: ";
    cin >> edad;

    if (edad <= 0) {
        cout << "Edad incorrecta." << endl;
    }
    else if(edad <= 13) {
        cout << nombre << ", eres un Niño." << endl;
    }
    else if(edad <= 17) {
        cout << nombre << ", eres un Adolescente." << endl;
    }
    else if(edad <= 59) {
        cout << nombre << ", eres un Adulto." << endl;
    }
    else {
        cout << nombre << ", eres un Adulto mayor." << endl;
    }

    return 0;
}