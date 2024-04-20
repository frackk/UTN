// Se ingresa por teclado dos valores numéricos enteros, informar cuál es el mayor y
// cuál el menor. Si son iguales, entonces, mostrar un mensaje con el siguiente texto:
// “Los valores ingresados son iguales”.

#include <iostream>
using namespace std;

int main () {

    int a, b;

    cout << "Ingresar dor valores numericos enteros: " << endl;
    cin >> a >> b;

    if (a!=b) {

        if (a>b) {

            cout << "El numero mayor es: " << a << endl;

        } 
        else {

            cout << "El numero mayor es: " << b << endl;

        }

    }
    else {

        cout << "Los valores ingresador son iguales." << endl;

    }

    system("pause");
    return(0);

}