#include <iostream>
using namespace std;

int main () {

    int dia, mes, anio, aaaammdd, x;

    cout << "Ingrese una fecha con el formato: aaaammdd: ";

    cin >> aaaammdd;

    anio = aaaammdd / 10000;
    x = aaaammdd % 10000;
    mes = x / 100;
    dia = x % 100;

    cout << "Anio: " << anio << endl;
    cout << "Mes: " << mes << endl;
    cout << "Dia: " << dia << endl;

    cout << "Tu fecha ingresada fue: " << anio << "/" << mes << "/" << dia << endl;

    return 0;
}