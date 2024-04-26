#include <iostream>
using namespace std;

int main () {

    int dia, mes, anio, aaaammdd;

    cout << "Ingresar una fecha con el siguiente formato: 'anio, mes, dia' " << endl;

    cin >> anio >> mes >> dia;

    // aaaammdd = aaaammdd
    // anio     = xxxx0000
    // mes      =     xx00
    // dia      =       xx

    anio = anio * 10000;
    mes = mes * 100;
    dia = dia;

    aaaammdd = anio + mes + dia;

    cout << aaaammdd << endl;


    // anio = aaaammdd / 100;
    // mes = (aaaammdd - (anio * 100));
    // mes = mes / 100;
    // dia = aaaammdd % 10000;

    // cout << "La fecha ingresada con formato 'aaaammdd' es: " << anio << endl; //<< mes << dia << endl;


    // forma vaga
    // aaaammdd = dia >> mes >> anio;

    // cout << "La fecha ingresada fue: " << aaaammdd << endl;
    // cout << anio << "/" << mes << "/" << dia << endl;     

    system("pause");
    return (0);

}