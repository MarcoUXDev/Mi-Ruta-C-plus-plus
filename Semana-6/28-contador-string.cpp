#include <iostream>
#include <string>
using namespace std;

int main(){

    string frase;
    string  nickname = "MarcoMonster";
    
    cout << "Ingresa una palabra o frase para contar cuantos carácteres tiene." << endl;
    getline(cin, frase);
    cout << frase.length() << endl;
    
    cout << nickname.length() << endl;

    return 0;
}