#include <iostream>
#include <string>
using namespace std;

int main(){
    int numeroA, numeroB, numeroC;

    cout << "Vamos a comparar 3 numeros." << endl << endl;

    cout << "Ingresa el primer valor para A: ";
    cin>> numeroA;
    
    cout << "Ingresa el segundo valor para B: ";
    cin>> numeroB;
    
    cout << "Ingresa el tercer valor para C: ";
    cin>> numeroC;

    if(numeroA > numeroB && numeroA > numeroC){
        cout << "El numero A: " << numeroA << " es mayor." << endl;
    }
    else if(numeroB > numeroC && numeroB > numeroA){
        cout << "El numero B: " << numeroB << " es mayor." << endl;
    }
    else if(numeroC > numeroA && numeroC > numeroB){
        cout << "El numero C: " << numeroC << " es mayor." << endl;
    }
    else if(numeroA == numeroB && numeroA > numeroC){
        cout << "Los numeros A: " << numeroA << " y B: " << numeroB << " son mayores." << endl;
    }
    else if(numeroA == numeroB && numeroA < numeroC){
        cout << "El numero C: " << numeroC << " es mayor." << endl;
    }
    else if(numeroA == numeroC && numeroA > numeroB){
        cout << "Los numeros A: " << numeroA << " y C: " << numeroC << " son mayores." << endl;
    }
    else if(numeroA == numeroC && numeroA < numeroB){
        cout << "El número B: " << numeroB << " es mayor." << endl;
    }
    else if(numeroB == numeroC && numeroB > numeroA){
        cout << "Los numeros B: " << numeroB << " y C:" << numeroC << " son mayores." << endl;
    }
    else if(numeroB == numeroC && numeroB < numeroA){
        cout << "El número A: " << numeroA << " es mayor." << endl;
    }
    else {
        cout << "Los tres números A:" << numeroA << ", B: " << numeroB  << " y C:" << numeroC << " son iguales" << endl;
    }

    return 0;
}