#include <iostream>
#include <string>
#include <cctype> // para tolower
using namespace std;

int main(){
    cout << "Vamos a contar las vocales que posee una frase o palabra." << endl << endl;

    string frase;

    cout <<"Ingresa una frase: ";
    getline(cin, frase);
    
    for(int i = 0; i < frase.length(); i++){
        frase[i] = tolower(frase[i]);
    }

    cout << frase << endl;
    int acumulador = 0 ;

    for(int i = 0; i < frase.length(); i++ ){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
            acumulador ++;
        }
    }
    cout << "Total de vocales en la frase: " << acumulador << endl;

    return 0;
}