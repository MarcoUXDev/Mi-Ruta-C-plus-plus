#include <iostream>
#include <string>
using namespace std;

int main (){
    string nameHolder;
    int inheritance;
    float taxes = 16;
    int heirs;
    int charity;
    float inheritancePerHeir;
    float taxesPaidHeir;
    float taxesPaidCharity;

    cout << endl << "Este es un pequeñop código para tus proximos herederos." << endl;

    cout << "Ingresa el nombre del titular: ";
    cin >> nameHolder;

    cout << endl << nameHolder << ", este es tu testamento." << endl;
    cout << "Solo hace falta que indiques la división de tu fortuna." << endl << endl;

    cout << nameHolder << ", indica la cantidad de herederos: ";
    cin >> heirs;

    cout << "\nAhora indca tu fortuna total: $ "; 
    cin >> inheritance;

    charity = inheritance % heirs;
    inheritancePerHeir  = (inheritance - charity) / heirs;

    cout << "\nEl total de $" << inheritance << " se distribuira como sigue: "<< endl
         << "\tHerederos: " << heirs << endl
         << "\tCada uno recibe: $ " << inheritancePerHeir << endl 
         << "\tCaridad: $" << charity;

    cout << "\n\nSe ha de grabar todo con el impuesto a la ganancia del " << taxes << "% :" << endl;
    
    taxesPaidHeir = inheritancePerHeir*taxes/100;
    float individualHeritance = inheritancePerHeir - taxesPaidHeir;
    taxesPaidCharity = charity*taxes/100;
    float paidCharity = charity - taxesPaidCharity;

    cout << "\tHERENCIA INDIVIDUAL: \t" << inheritancePerHeir << "\t\tIMPUESTO: \t" << taxesPaidHeir << "\tA COBRAR: \t" << individualHeritance << endl;
    cout << "\tA CARIDAD: \t\t" << charity << "\t\tIMPUESTO: \t" << taxesPaidCharity  << "\tA COBRAR: \t" << paidCharity << endl << endl;

    return 0;
}