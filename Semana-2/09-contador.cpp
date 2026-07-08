#include <iostream>
using namespace std;

int main(){
    int contador;
    cout << "Vamos a imprimir un contador."<< endl;

    cout << "Hasta que número te gustaria contar: ";
    cin >> contador;


    if(contador < 1 ) {
        cout << "No podemos contar numeros menores o iaguales a 0.";
    } else {
        for(int i = 1; i<= contador; i++){
            cout << i << endl;
        }
    }
    return 0;
}