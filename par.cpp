/* TP #2 - Número par- El usuario debe ingresar un número y el programa comprueba si es par o no.
   Biondi, Rolando Ezequiel
   18/04/2015
*/

#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Ingrese un numero que quiera saber si es par o no: ";
    cin>>x;
    if(x%2==0){
        cout<<"\n\nEl numero ingresado es par!";
    }
    else{
        cout<<"\n\nEl numero ingresado no es par!";
    }
}
