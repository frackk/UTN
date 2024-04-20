// TERMINAR

#include <iostream>
using namespace std;

int main () {

    int a, b, c;
    string triangulo;
    cout << "Ingrese 3 longitudes" << endl;
    cin >> a >> b >> c;

    // si a es distinto de b
    if (a!=b) {

        // Y a es distinto de c
        if (a!=c) {
        
            triangulo = "Triangulo Escaleno";
            cout << triangulo << endl;
        
        }

        // PERO es igual a c
        else {

            triangulo = "Triangulo Isoseles";
            cout << triangulo << endl;

        }
    }

    // O si a es igual a b
    else {

        // PERO distinto de c
        if (a!=c) {

            triangulo = "Triangulo Isoseles";
            cout << triangulo << endl;

        }

        // Y TAMBIEN igual a c
        else {

            triangulo = "Triangulo Equilatero";
            cout << triangulo << endl;

        }

    }

    // si b es dintito de c
    if (b!=c) {

        
        if (c!=a) {
        
            triangulo = "Triangulo Escaleno";
            cout << triangulo << endl;

        }
        else {

            triangulo = "Triangulo Isoseles";
            cout << triangulo << endl;

        }

    } 
    else {

        if (b!=a) {

            triangulo = "Triangulo Isoseles";
            cout << triangulo << endl;

        }
        else {

            triangulo = "Triangulo Equilatero";
            cout << triangulo << endl;

        }

    }

    // cout << a << b << c << endl;

    system("pause");
    return 0;
}