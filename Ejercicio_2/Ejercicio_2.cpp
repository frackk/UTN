// UTN - Universidad Tecnológica Nacional - FRBA
// Algoritmos y Estructuras de Discretas

// 1.2.1.2. Cociente entre dos números
// Dificultad: básica, Requerido: Indispensable.
// Se ingresan por teclado dos valores numéricos enteros: a y b, se pide calcular e
// informar el cociente a/b, validando que b sea distinto de cero. En tal caso, mostrar
// un mensaje de error en la consola.

#include <iostream>
using namespace std;

int main () {

    int a, b;

    cout << "Ingresar dos valores numericos enteros: " << endl;
    cin >> a >> b;

    if (b != 0) {

        cout << "El cociente del primer numero por sobre el segundo es: " << a / b << endl;

    }
    else {

        cout << "No se puede dividir un numero por cero." << endl;

    }
    
    system("pause");
    return 0;

}
