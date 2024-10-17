/*Programa: Password*/
#include <iostream>

using namespace std;

int main()
{
    int pass,x=124;
    do{

        cout << "Inserte la contraseña: " << endl;
        cin >> pass;
            if(pass!=x){
            cout << "Contraseña Incorrecta" << endl;
            }
    }
    while(pass!=x);
    cout << "Contraseña Correcta" << endl;
    return 0;
}
