#include <iostream>
using namespace std;

int main(){
    int arr[3];

    for(int i = 0; i < 3; i++){
        cout << "Ingresa el valor  " << i << " :";
        cin >> arr[i];
    }

    for(int i = 0; i < 3; i ++){
        cout << arr[i] << endl;
    }
    return 0;    
}