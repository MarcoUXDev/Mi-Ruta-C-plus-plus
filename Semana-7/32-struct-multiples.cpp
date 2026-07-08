#include <iostream>
#include <string>
#include <cctype> // para usar tolower
using namespace std;

struct Alumno {
    string nombre;
    float promedio;
};

int main(){
    Alumno grupoA[3];
    float promedioMayorActual;
    string buscarNombreAlumno;
    bool existeAlumno = false;
    float sumaPromedios = 0;

    cout << "\nREGISTRAR ALUMNOS" << endl << endl;
    for(int i = 0; i < 3; i++){
        cout << "Vamos a registrar al alumno " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, grupoA[i].nombre);
        
        cout << "Promedio: ";
        cin >> grupoA[i].promedio;
        cin.ignore();
        cout << endl;
    }

    cout << "\nMOSTRAR TODOS LOS DATOS REGISTRADOS \n\n";
    for(int i = 0; i < 3; i ++){
        cout << "Nombre: " << grupoA[i].nombre
             << "\tPromedio: " << grupoA[i].promedio << endl;
    }
    promedioMayorActual = grupoA[0].promedio;

    cout << "\nEL PROMEDIO MÁS ALTO" << endl;
    for(int i = 1; i < 3; i ++){
        if(grupoA[i].promedio > promedioMayorActual){
            promedioMayorActual = grupoA[i].promedio;
        }
    }
    cout << "El primedio mayor es de: " << promedioMayorActual << endl;

    cout << " \nBUSCAR UN ALUMNO" << endl;
    cout << "Ingresa el nombre del alumno que deseas buscar: ";
    getline(cin, buscarNombreAlumno);
    
    for(int i = 0; i < buscarNombreAlumno.length(); i++){
        buscarNombreAlumno[i] = tolower(buscarNombreAlumno[i]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < grupoA[i].nombre.length(); j++){
            grupoA[i].nombre[j] = tolower(grupoA[i].nombre[j]);
        }
    }

    for(int i = 0; i < 3; i++){
        if(grupoA[i].nombre == buscarNombreAlumno){
            existeAlumno =  true;
        }
    }
    if(existeAlumno){
        cout << "El alumno que buscas sí está registrado en nuestra Base de Datos" << endl;
    } else {
        cout << "Lo sentimos, el nombre que buscas no esta en nuestra base de datos." << endl;
    }


    cout << " \nPROMEDIO GENERAL" << endl;
    for(int i = 0; i < 3; i++){
        sumaPromedios += grupoA[i].promedio;
    }
    cout << "El promedio general es de: " << sumaPromedios/3 << endl;

    return 0;
};