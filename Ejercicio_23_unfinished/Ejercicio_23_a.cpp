#include <iostream>
using namespace std;

int main () {

    int v;
    int max = 0;

    int i = 0;
    while ( i<20 ) {

        cout << "Ingrese un numero: " << endl;
        cin >> v;

        if ( v > max) {

            max = v;

        }

        i = i+1;

    }

    cout << "el numero mayor es: " << max << endl;

    return 0;
}