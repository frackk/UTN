// TERMINAR

#include <iostream>
using namespace std;

int main () {

    int a, b, c;
    string triangulo;
    cout << "Ingrese 3 longitudes" << endl;
    cin >> a >> b >> c;

    if (a!=b) {

        if (a!=c) {
        
            triangulo = "Triangulo Escaleno";
            cout << triangulo << endl;
        
        }
        else {

            triangulo = "Triangulo Isoseles";
            cout << triangulo << endl;

        }
    }
    else {

        if (a!=c) {

            triangulo = "Triangulo Isoseles";
            cout << triangulo << endl;

        }
        else {

            triangulo = "Triangulo Equilatero";
            cout << triangulo << endl;

        }

    }
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