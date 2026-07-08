#include <iostream>
#include <string>
using namespace std;
int esMayor(int numeroA, int numeroB, int numeroC);
int main(){
    int numeroA, numeroB, numeroC;
    cout << "Vamos a comparar 3 numeros." << endl << endl;

    cout << "Ingresa el primer valor para A: ";
    cin>> numeroA;
    
    cout << "Ingresa el segundo valor para B: ";
    cin>> numeroB;
    
    cout << "Ingresa el tercer valor para C: ";
    cin>> numeroC;

    int mayor =  esMayor(numeroA, numeroB, numeroC); 
    cout << mayor;

    return 0;
}

int esMayor(int numeroA, int numeroB, int numeroC){
    int mayor;
    if(numeroA > numeroB && numeroA > numeroC){
        mayor = numeroA;
    } else if(numeroB > numeroC && numeroB > numeroA){
        mayor = numeroB;
    } else {
        mayor = numeroC;
    }
    return mayor;
}