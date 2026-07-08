#include <iostream>
using namespace std;

int main(){
    int listaNumeros[4];

    cout << "Vamos a calcular el 2do número máyor de una lista." << endl;

    for(int i = 0; i < 4 ; i++ ){
        cout << "Ingresa el valor " << i+1 << ": ";
        cin >> listaNumeros[i];
    }

    int numeroMaximoActual = listaNumeros[0];
    bool haySegundoMayor = false;
    int segundoMayorActual;

    for(int i = 1; i < 4 ; i++ ){
        if(!haySegundoMayor) {
            if(numeroMaximoActual != listaNumeros[i]){
                if(numeroMaximoActual > listaNumeros[i]){
                    segundoMayorActual = listaNumeros[i];
                } else {
                    numeroMaximoActual = listaNumeros[i];
                    segundoMayorActual = listaNumeros[0];
                }
                haySegundoMayor = true;
            }
        } else {
            if(listaNumeros[i] > numeroMaximoActual){
                segundoMayorActual =  numeroMaximoActual;
                numeroMaximoActual = listaNumeros[i];
            } else if(listaNumeros[i] > segundoMayorActual && listaNumeros[i] < numeroMaximoActual) {
                segundoMayorActual = listaNumeros[i];
            } 
        }
    }

    if(haySegundoMayor){
        cout << "Máximo: "<< numeroMaximoActual << endl;
        cout << "Segundo: "<< segundoMayorActual << endl;
    } else {
        cout << "No existe un segundo número mayor." << endl;
    }

    return 0;
}