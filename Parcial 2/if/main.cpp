#include <iostream>

using namespace std;

int main()
{
    int pass,x=134;
    do{

        cout << "Inserte la contrase�a: " << endl;
        cin >> pass;
            if(pass!=x){
            cout << "Contrase�a Incorrecta" << endl;
            }
    }
    while(pass!=x);
    cout << "Contrase�a Correcta" << endl;
    return 0;
}
