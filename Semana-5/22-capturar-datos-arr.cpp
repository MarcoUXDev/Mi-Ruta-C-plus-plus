#include <iostream>
using namespace std;

int main(){
    float numeros[10];
    float suma = 0;

    cout << "Vamos capturar 10 numeros." << endl;

    for(int i = 0; i < 10 ; i++ ){
        cout << "Ingresa el dato " << i+1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    cout << endl << suma << endl << endl;
    cout << "Promedio: " << suma/10;

    return 0;
}
// for(int i = 0; i < 10 ;  i++ ){
//         cout << i+1 <<": " << numeros[i] << endl;
//     }