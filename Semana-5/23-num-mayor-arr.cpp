#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int valorMaximoActual;
    int valorMinimoActual;

    cout << "Encontrar el número mayor" << endl;

    for(int i = 0; i < 5; i++){
        cout << "Ingresar el valor" << i+1 << ": ";
        cin >> arr[i];
    }
    valorMaximoActual = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > valorMaximoActual){
            valorMaximoActual = arr[i];
        } 
    }
    valorMinimoActual = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] < valorMinimoActual){
            valorMinimoActual = arr[i];
        }
    }
    cout << "El número mayor es: "<< valorMaximoActual << endl;   
    cout << "El número menor es: "<< valorMinimoActual << endl;   

    return 0;
}