// 1.2.1.4. Mayor valor entre dos números
// Dificultad: básica, Requerido: Indispensable.
// Se ingresa por teclado dos valores numéricos enteros diferentes entre sí, informar
// cuál es el mayor.

#include <iostream>
using namespace std;

int main () {

    int a, b;
    cout << "Ingresar 2 numeros diferentes entre si: " << endl;

    cin >> a >> b;

    if (a!=b)
    {
        if (a>b) {
            
            cout << "El numero mayor es: " << a << endl;
        }
        else {

            cout << "El numero mayor es: " << b << endl;

        }
        
    }
    else {

        cout << "Ambos numeros son iguales.";

    }

}