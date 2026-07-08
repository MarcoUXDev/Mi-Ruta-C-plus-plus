#include <iostream>
using namespace std;

int main(){
    const string PASSWORD = "m4rc0";
    string passwordIngresado;

    int intentos = 3;

    cout << "Vamos a comparar el password" << endl << endl;

    do{
        cout << "Tienes " << intentos << " intentos." << endl << endl;
        cout << "Ingresa tu password: ";
        cin >> passwordIngresado;

        if(passwordIngresado == PASSWORD){
            cout << "Bienvenido al sistema." << endl;
            break;
        } else {
            cout << "Contraseña incorrecta. Intenta de nuevo" << endl << endl;
        }
        intentos --;
        if(intentos == 0){
            cout << "Por seguridad tu cuenta ha sido bloqueda" << endl;
        }
    } while (intentos > 0);

    return 0;
}