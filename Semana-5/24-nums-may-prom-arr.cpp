#include <iostream>
using namespace std;

void capturarDatos(float arr[7]);
float sumarValores(float arr[7]);
float promediar(float suma);
int contarMayoresAlPromedio(float arr[7], float promedio, int contador);

int main(){
    float arr[7];
    int contador = 0;

    cout << "Vamos a sacar el primedio de 7 numeros y contar cuantos números son mayores que el promedio." << endl << endl;

    capturarDatos(arr);

    float sumaTotal = sumarValores(arr);
    cout << "La suma es: " << sumaTotal << endl;
    
    float promedio = promediar(sumaTotal);
    cout << "El promedio es: " << promedio << endl;

    int contadorFinal = contarMayoresAlPromedio(arr, promedio, contador);
    cout << "Hay " << contadorFinal << " números mayores al promedio." << endl;

    return 0;
}

void capturarDatos(float arr[7]){
    for(int i = 0; i < 7; i++){
        cout << "Ingresa el valor " << i+1 << ": ";
        cin >> arr[i]; 
    }
}

float sumarValores(float arr[7]){
    float suma = 0;
    for(int i = 0; i < 7; i++){
        suma += arr[i];
    }
    return suma;
}

float promediar(float suma){
    float promedio;
    promedio = suma/7;
    return promedio;
}
int contarMayoresAlPromedio(float arr[7], float promedio, int contador){
    for(int i = 0; i < 7; i++){
        if(arr[i] > promedio) {
            contador ++;
        }
    }
    return contador;
}