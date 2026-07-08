/*
    Pedir una calificación del 0 al 100.

    Mostrar:

    90 a 100 → Excelente
    80 a 89 → Muy bien
    70 a 79 → Bien
    60 a 69 → Suficiente
    Menos de 60 → Reprobado
    Menos de 0 o más de 100 → Calificación inválida
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int calificacion;

    cout << "Vamos a evaluar tu calificación." << endl <<endl;

    cout << "Ingresa tu calificación: ";
    cin >> calificacion;


    if(calificacion < 0 || calificacion > 100) {
        cout << "Calificación no válida." << endl;
    }
    else if(calificacion >= 90) {
        cout <<"Excelente." << endl;
    }
    else if(calificacion >= 80) {
        cout <<"Muy Bien." << endl;
    }
    else if(calificacion >= 70) {
        cout <<"Bien." << endl;
    }
    else if(calificacion >= 60) {
        cout <<"Suficiente." << endl;
    }
    else {
        cout <<"Reprobado." << endl;
    }


    // if(calificacion >= 90 && calificacion <= 100) {
    //     cout <<"Excelente." << endl;
    // }
    // else if(calificacion >= 80 && calificacion <= 89) {
    //     cout <<"Muy Bien." << endl;
    // }
    // else if(calificacion >= 70 && calificacion <= 79) {
    //     cout <<"Bien." << endl;
    // }
    // else if(calificacion >= 60 && calificacion <= 69) {
    //     cout <<"Suficiente." << endl;
    // }
    // else if(calificacion >= 0 && calificacion <= 59) {
    //     cout <<"Reprobado." << endl;
    // }
    // else {
    //    cout << "Calificación inválida.";
    // }
    return 0;
}