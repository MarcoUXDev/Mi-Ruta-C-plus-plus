#include <iostream>
using namespace std;

struct Alumno{
    string nombre;
    float promedio;
    int semestre;
};

int main(){
    Alumno alumno1;
    
    alumno1.nombre = "Marco Serrano";
    alumno1.promedio = 9.8;
    alumno1.semestre = 4;

    cout << endl << "DATOS DEL ALUMNO" << endl;

    cout << "Nombre: \t" << alumno1.nombre << endl;
    cout << "Promedio: \t" << alumno1.promedio << endl;
    cout << "Semestre: \t" << alumno1.semestre << endl;

    return 0;
}