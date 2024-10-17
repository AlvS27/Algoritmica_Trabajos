/*Programa: Multi_for*/
#include <iostream>

using namespace std;

int main()
{
    int num,x,multi;
    cout << "Ingrese un Numero: " << endl;
    cin >> num;

    for(x=1;x<=10;x++){
        multi=num*x;
        cout << num << "X" << x << "= "<< multi << endl;
    }
    return 0;
}
