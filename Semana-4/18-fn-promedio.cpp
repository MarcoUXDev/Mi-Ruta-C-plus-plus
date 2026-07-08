#include <iostream>
#include <iomanip>
using namespace std;

float promedio(float calificacion1, float calificacion2, float calificacion3);
void interpretarPromedio(float promedioFinal);
int main(){
    float calificacion1, calificacion2, calificacion3;
    
    cout << "Vamos a promediar 3 calificaciones." << endl;
    cout << "\nIngresa la primer calificación: ";
    cin >>  calificacion1;
    cout << "\nIngresa la segunda calificación: ";
    cin >>  calificacion2;
    cout << "\nIngresa la tercer calificación: ";
    cin >>  calificacion3;


    interpretarPromedio(promedio(calificacion1, calificacion2, calificacion3));
    return 0;
}

float promedio(float calificacion1, float calificacion2, float calificacion3){
    return (calificacion1 + calificacion2 + calificacion3)/3;
};

void interpretarPromedio(float promedioFinal){
    cout << fixed << setprecision(2);
    if(promedioFinal >= 7){
        cout << "Tu promedio es de " << promedioFinal << " has aprobado." << endl;
    } else {
        cout << "Tu promedio es de " << promedioFinal << " has reprobado." << endl;
    }
}


// cout << fixed << setprecision(2);