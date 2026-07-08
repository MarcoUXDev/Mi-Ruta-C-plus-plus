#include <iostream>
using namespace std;

int main(){
    int numero = 25;
    int contador = 0;
    int valorEntrada;

    do{
         contador ++;
        cout << "Ingresa un valor para adivinar: ";
        cin >> valorEntrada;

        if(valorEntrada < numero){
            cout << "Estas por debajo del número" << endl << endl;
        } else if (valorEntrada > numero){
            cout << "Uy, ya te pasaste" << endl << endl;
        } else {
            cout << "¡ADIVINASTE! felicidades, ganaste, el número era: " << numero
                << ". Solo te tomó " << contador  << " intentos." << endl << endl;
        }
    } while (numero != valorEntrada);
    
    return 0;
}