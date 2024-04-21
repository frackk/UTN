#include <iostream>
using namespace std;

int main () {

    int a, b, c;
    string triangulo;
    string triangulo2;

    cout << "Ingrese 3 medidas para un triangulo: " << endl;

    cin >> a >> b >> c;

    if (a!=b) {

        if (a!=c) {

            triangulo = "Escaleno";
            cout << "El trinagulo es " << triangulo << endl;

        }
        else {

            triangulo = "Isoseles";
            cout << "El trinagulo es " << triangulo << endl;

        }

    }
    else {

        if (a!=c) {

            triangulo = "Isoseles";
            cout << "El trinagulo es " << triangulo << endl;

        }
        else {

            triangulo = "Equilatero";
            cout << "El trinagulo es " << triangulo << endl;

        }

    }
    if (b!=c) {

        if (b!=a) {

            triangulo2 = "Escaleno";
            cout << "El trinagulo es " << triangulo2 << endl;

        }
        else {

            triangulo2 = "Isoseles";
            cout << "El trinagulo es " << triangulo2 << endl;

        }

    }
    else {

        if (b!=a) {

            triangulo2 = "Isoseles";
            cout << "El trinagulo es " << triangulo2 << endl;

        }
        else {

            triangulo2 = "Equilatero";
            cout << "El trinagulo es " << triangulo2 << endl;

        }

    }
    
    return 0;
}