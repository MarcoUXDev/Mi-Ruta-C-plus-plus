#include <iostream>
#include <string>
#include <cctype> // para usar tolower
using namespace std;

struct Alumno {
    string nombre;
    float promedio;
    bool registrado = false;
};


void registrarAlumnos(Alumno grupoA[]);
void mostrarAlumnosRegistrados(Alumno grupoA[]);
Alumno alumnoConMejorPromedio(Alumno grupoA[]);
Alumno buscarAlumno(Alumno grupoA[], string nombreAlumno);
float calcularPromedioGeneral(Alumno grupoA[3]);
bool hayRegistros(Alumno grupoA[]);

int main(){
    Alumno grupoA[3];
    string nombreDeAlumnoABuscar;
    
    int opcionMenu;
   
    cout << "\n====== Bienvenido al sistema de alumnos =====" << endl << endl;

    do {
        
        cout << "1. Registrar Alumnos" << endl;
        cout << "2. Mostrar Alumnos registrados" << endl;
        cout << "3. Mostrar alumno con mejor promedio" << endl;
        cout << "4. Buscar un alumno" << endl;
        cout << "5. Mostrar el promedio general del grupo" << endl;
        cout << "6. Salir del programa" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Ingresa el número de la opción que más desees: ";
        cin >> opcionMenu;
        cin.ignore();

        switch (opcionMenu){
            case 1:
                cout << "\n===== REGISTRAR ALUMNOS =====" << endl << endl;
                registrarAlumnos(grupoA);
                break;
            case 2:
                cout << "\n===== MOSTRAR ALUMNOS REGISTRADOS =====" << endl << endl;
                if(hayRegistros(grupoA)){
                    mostrarAlumnosRegistrados(grupoA);
                } else {
                    cout << "Primero debes registrar alumnos." << endl;
                }
                break;
                
            case 3:
                cout << "\n===== MOSTRAR ALUMNO CON MEJOR PROMEDIO ======" << endl << endl;
                if(hayRegistros(grupoA)){
                    Alumno alumnoEstrella = alumnoConMejorPromedio(grupoA);
                    cout << "Nombre: \t" << alumnoEstrella.nombre << endl;
                    cout << "Promedio: \t" << alumnoEstrella.promedio << endl;

                } else {
                    cout << "Primero debes registrar alumnos." << endl;
                }
                break;
                
            case 4:
                cout << "\n===== BUSCAR ALUMNO =====" << endl << endl;
                if(hayRegistros(grupoA)){
                    cout << "Ingresa el nombre del alumno que deseas buscar: ";
                    getline(cin, nombreDeAlumnoABuscar);
                    
                    Alumno alumnoEncontrado = buscarAlumno(grupoA, nombreDeAlumnoABuscar);

                    if(alumnoEncontrado.registrado){
                        cout << "----------------------------------------------" << endl;
                        cout << "\nALUMNO ENCONTRADO" << endl;
                        cout << "Nombre: \t" << alumnoEncontrado.nombre << endl;
                        cout << "Promedio:  \t" << alumnoEncontrado.promedio << endl;
                        cout << "----------------------------------------------" << endl << endl;
                    } else {
                        cout << "El nombre " << nombreDeAlumnoABuscar << " no se econtró en el sistema." << endl;  
                    }
                    
                    
                } else {
                    cout << "Primero debes registrar alumnos." << endl;
                    
                }
                break;
            
            case 5:
                cout << "\n===== PROMEDIO GENERAL DEL GRUPO ====="<< endl << endl;
                if(hayRegistros(grupoA)){
                    cout << "El promedio general del grupo es: " << calcularPromedioGeneral(grupoA) << endl;
                } else {
                    cout << "Primero debes registrar alumnos." << endl;
                }
                break;

            case 6:
                cout << "Gracias por usar este mini sistema, regresa pronto\nSaliendo..." << endl;
                break;
            
            default:
                cout << "¡Opps! Ingresas un valor no valido, por favor intenta de nuevo." << endl;
                break;
        }
    } while(opcionMenu != 6);
    return 0;
};

void registrarAlumnos(Alumno grupoA[]){
    for(int i = 0; i < 3; i++){
        cout << "Vamos a registrar al alumno " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, grupoA[i].nombre);
        
        cout << "Promedio: ";
        cin >> grupoA[i].promedio;
        cin.ignore();
        grupoA[i].registrado = true;
        cout << endl;
    }
}

void mostrarAlumnosRegistrados(Alumno grupoA[]){
    cout << "\nMOSTRAR TODOS LOS DATOS REGISTRADOS \n\n";
    
    for(int i = 0; i < 3; i ++){
        if(grupoA[i].registrado){
            cout << "Nombre: " << grupoA[i].nombre
                 << "\tPromedio: " << grupoA[i].promedio << endl;
        }
    }
}

Alumno alumnoConMejorPromedio(Alumno grupoA[]){
    Alumno mejorAlumnoActual = grupoA[0];
    for(int i = 1; i < 3; i ++){
        if(grupoA[i].promedio > mejorAlumnoActual.promedio){
            mejorAlumnoActual = grupoA[i];
        }
    }
    return mejorAlumnoActual;
}

Alumno buscarAlumno(Alumno grupoA[], string nombreAlumno){
    Alumno alumnoEncontrado;

    for(int i = 0; i < nombreAlumno.length(); i++){
        nombreAlumno[i] = tolower(nombreAlumno[i]);
    }

    for(int i = 0; i < 3; i++){
        string copiaNombre = grupoA[i].nombre;
        for(int j = 0; j < copiaNombre.length(); j++){
            copiaNombre[j] = tolower(copiaNombre[j]);
        }
        if(copiaNombre == nombreAlumno){
            alumnoEncontrado = grupoA[i];
            return alumnoEncontrado;
        }
    }
    //alumnoEncontrado.registrado = false;
    return alumnoEncontrado;
}

float calcularPromedioGeneral(Alumno grupoA[3]){
    float sumaPromedios = 0;
    for(int i = 0; i < 3; i++){
        sumaPromedios += grupoA[i].promedio;
    }
    return sumaPromedios/3;
}

bool hayRegistros(Alumno grupoA[]){
    for(int i = 0; i < 3; i++){
        if(grupoA[i].registrado){
            return true;       
        }
    }
    return false;
}