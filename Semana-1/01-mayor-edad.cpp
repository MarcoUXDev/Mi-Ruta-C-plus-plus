#include <iostream>
using namespace std;

int main(){

    string nombre;
    int edad;

    cout << "Vamos a calcular si eres mayor de edad" << endl << endl;

    cout << "Cual es tu nombre: ";
    cin >> nombre;
    
    cout << "\n" << nombre << ", qué edad tienes: ";
    cin >> edad;


    cout << nombre
         << ((edad >= 18) ? ", ya eres mayor de edad"
                          : ", aún no eres mayor de edad");

    return 0;
}


