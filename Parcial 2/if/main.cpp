#include <iostream>

using namespace std;

int main()
{
    int pass,x=134;
    do{

        cout << "Inserte la contraseņa: " << endl;
        cin >> pass;
            if(pass!=x){
            cout << "Contraseņa Incorrecta" << endl;
            }
    }
    while(pass!=x);
    cout << "Contraseņa Correcta" << endl;
    return 0;
}
