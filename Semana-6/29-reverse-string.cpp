#include <iostream>
#include <string>
#include <algorithm>
#include <typeinfo>
using namespace std;

int main(){

    string frase = "Rockter Studio";
    string slogan = "Rebeldía Impresa";
    cout << frase << endl;
    reverse(frase.begin(),frase.end());
    cout << frase << endl;
    reverse(frase.begin(),frase.end());

    cout << "\nLONGITUD Y ESTADO" << endl;
    cout << "Devuelven la cantidad de caracteres en la cadena." << frase.length() << endl;
    cout << "Retorna true si la cadena está vacía (longitud 0). " << frase.empty() << endl;
    cout << "Devuelve el tamaño máximo de caracteres que puede almacenar sin tener que reservar más memoria dinámica: " << frase.capacity() << endl;

    cout << "\nACCESO A CARÁCTERES" << endl;
    cout << "Accede a una posición especifica: [3]" << frase[3] << endl;
    cout << "Accede de forma segura al índice. si el índice no existe, lanza una excepción. " << frase.at(8) << endl;
    cout << "Devuelve el primer carácter: " << frase.front() << endl;
    cout << "Devuelve el último carácter: " << frase.back() << endl; 

    cout << "\nMODIFICACIÓN DE CADENAS" << endl;
    cout << "Concatenan dos o más cadenas: " << frase.append(slogan) << endl; 
    cout << "Inserta texto en una posición determinada: " << frase.insert(7, slogan) << endl;
    cout << "Elimina un numero determinado de caracters a partir de la posición dada." << frase.erase(7,3) << endl;
    cout << "Reemplaza un porción del texto por uno nuevo. " << frase.replace(7,6, "Marko") << endl;
    cout << "Vaciar la cadena por completo dejándola con longitud 0 (clear();). \n";
    //frase.clear();

    cout << "\nBÚSQUEDA Y SUBCADENAS" << endl;
    cout << "Extrae y devuelve una parte de la cadena original: " << frase.substr(2, 5) << endl;
    cout << "Busca la primera aparción de una subcadena y devuelve su posición inicial. Si no la encuentra, retorna (std::string::npos). " << frase.find("o") << endl;
    cout << "Busca la última aparición de la subcadena. " << frase.rfind("er") << endl;
    
    
    cout << "\nCONVERSIONES (NÚMEROS <-> STRINGS)" << endl;
    int anioCreacion = 2026;
    cout << "Convierte cualquier tipo númerico (int, float, double) a texto. " << to_string(anioCreacion) << endl;
    string textoNumerico = "1910";
    int convertirANumero = stoi(textoNumerico);
    cout << convertirANumero << endl;
    cout << typeid(convertirANumero).name() << endl;
    
    return 0;
}