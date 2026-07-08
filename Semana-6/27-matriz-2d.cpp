#include <iostream>
using namespace std;

int main(){

    int edades[3][3];
    int sumaAcumulada = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Ingresa la edad [" << i <<"] [" << j << "] : " ;
            cin >> edades[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sumaAcumulada += edades[i][j];
            cout << edades[i][j] << " ";
        }
        cout << endl;
    }

    cout << "La suma total de los valores: " << sumaAcumulada << endl; 

    return 0;
}