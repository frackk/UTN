// 1.2.1.3. División entera y módulo
// Dificultad: básica, Requerido: Indispensable.
// Se ingresa por teclado un valor numérico entero, informar:
// 1. La quinta parte de dicho valor.
// 2. El resto que surge al dividir el valor ingresado en cinco partes iguales.
// 3. La séptima parte de la quinta parte del valor ingresado.


#include <iostream>
using namespace std;

int main () {

    int valor;

    cout << "Ingresar un valor numerico entero: " << endl;
    cin >> valor;

    int quintaParte = valor / 5;
    int resto = valor % 5;
    int septimaParte = quintaParte / 7;

    cout << "La quinta parte de ese numero es: " << quintaParte << endl;
    cout << "El resto que surgue al dividir el valor ingresado en cinco partes iguales es: " << resto << endl;
    cout << "La septima parte de la quinta parte del valor ingresado es: " << septimaParte << endl;

    system("pause");
    return(0);
    
}