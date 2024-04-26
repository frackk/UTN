#include <iostream>
using namespace std;

int main () {

    int dia, mes, anio, aaaammdd;

    cout << "Ingresar una fecha con el siguiente formato: 'ddmmaaaa' " << endl;

    cin >> aaaammdd;

    anio = aaaammdd / 100;
    mes = (aaaammdd - (anio * 100));
    mes = mes / 100;
    dia = aaaammdd % 10000;

    cout << "La fecha ingresada con formato 'aaaammdd' es: " << anio << endl; //<< mes << dia << endl;

    system("pause");
    return (0);

}