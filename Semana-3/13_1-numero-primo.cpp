#include <iostream>
using namespace std;

int main(){
    int numero;
    bool esPrimo = true;

    cout << "Saber si un número es primo." << endl;

    cout << "Ingresa un número: ";
    cin >> numero;

    if(numero < 2){
        cout << "El número no es primo.";
        return 0;
    }

    for(int i = 2; i < numero; i ++ ){
        if(numero % i == 0){
          esPrimo = false;
          break;
        } 
    }

    if(esPrimo){
        cout << "El número " << numero << " SÍ es primo." << endl; 
    } else {
        cout << "El número " << numero << " NO es primo." << endl;
    }

    return 0;
}


























// #include <iostream>
// using namespace std;

// int main() {
//     int numero;
//     bool esPrimo = true;

//     cout << "Ingresa un numero: ";
//     cin >> numero;

//     if(numero < 2) {
//         cout << "El numero no es primo.";
//         return 0;
//     }

//     for(int i = 2; i < numero; i++) {
//         if(numero % i == 0) {
//             esPrimo = false;
//             break;
//         }
//     }

//     if(esPrimo) {
//         cout << "El numero es primo.";
//     } else {
//         cout << "El numero no es primo.";
//     }

//     return 0;
// }