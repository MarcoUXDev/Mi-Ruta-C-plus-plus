#include <iostream>
using namespace std;


float sumar(float valor1, float valor2);
float restar(float valor1, float valor2);
float multiplicar(float valor1, float valor2);
float dividir(float valor1, float valor2);

int main(){
    float valor1;
    float valor2;
    int opc;

    cout << "Este es un menú" << endl;
    cout << "Vamos hacer unas operaciones. (suma, resta, multiplicación o división)" << endl;
    
    do{
        cout << "1) SUMA" << endl;
        cout << "2) RESTA" << endl;
        cout << "3) MULTIPLICACIÓN" << endl;
        cout << "4) DIVISIÓN" << endl;
        cout << "5) SALIR" << endl;
        cout << "---------------------------" <<endl;
        cout << "Selecciona el número de la opción que desees:";
        cin >> opc;

        if(opc > 0 && opc < 5){
           cout << "Ingresa el primer valor: ";
           cin >> valor1;
           cout << "Ingresa el segundo valor: ";
           cin >> valor2;
        }

        switch (opc)
        {
        case 1:
            float resultado =  sumar(valor1, valor2);
            cout << "La suma de " << valor1 << " + " << valor2 << " = " << resultado << endl << endl;
            break;
        case 2:
            float resultado =  restar(valor1, valor2);
            cout << "La resta de " << valor1 << " - " << valor2 << " = " << resultado << endl << endl;
            break;
        case 3:
            float resultado =  multiplicar(valor1, valor2);
            cout << "La multiplicación de " << valor1 << " + " << valor2 << " = " << resultado << endl << endl;
            break;
            
        case 4:
            if(valor2 == 0){
                cout << "la operación no puede realizarce." << endl << endl;
            } else {
                 float resultado =  dividir(valor1, valor2);
                cout << "La división de " << valor1 << " X " << valor2 << " = " << resultado << endl << endl;
            }
            break;
        case 5:
            cout << "Saliendo del sistema. Vuelve pronto." << endl;
            break;
        default:
            cout << "Valor ingresado incorrecto, solo puedes ingresar en un rango del 1 al 5." << endl;
            break;
        }

    }while(opc != 5);

    return 0;
}


float sumar(float valor1, float valor2){
    return valor1 + valor2;
}

float restar(float valor1, float valor2){
    return valor1 - valor2;
}

float multiplicar(float valor1, float valor2){
    return valor1 * valor2;
}

float dividir(float valor1, float valor2){
    return valor1 / valor2;
}
