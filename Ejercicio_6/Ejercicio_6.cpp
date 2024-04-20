// 1.2.1.6. Mayor, medio y menor valor entre tres números
// Se ingresan tres valores numéricos enteros, diferentes entre sí, 
// informar cuál es el menor, cuál está en el medio y cuál es el mayor

#include <iostream>
using namespace std;

int main () {

    int a, b, c;

    cout << "Ingresar tres valores numericos enteros, diferentes entre si: " << endl;
    cin >> a >> b >> c;

    int menor, medio, mayor;


    if (a < b && a < c) {
        menor = a;
        if (b < c) {
            medio = b;
            mayor = c;
        }
        else {
            medio = c;
            mayor = b;
        }
    } 
    else if (b < a && b < c) {
            menor = b;
            if (a < c) {
                medio = a;
                mayor = c;
            }
            else {
                medio = c;
                mayor = a;
            }
        }
        else {

            menor = c;
            if (a < b) {
                a = medio;
                b = mayor;
            }
            else {
                b = medio;
                a = mayor;
            }
        }

    cout << "El menor valor es: " << menor << endl;
    cout << "El valor medio es: " << medio << endl;
    cout << "El mayor valor es: " << mayor << endl;

    system("pause");
    return(0);

}