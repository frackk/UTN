// re ver.

#include <iostream>
using namespace std;

int main () {

    int a, m, d, aaaammdd;
    cout << "Ingresar una fecha respetando este orden 'aaaa/mm/dd': " << endl;
    cin >> aaaammdd;

    a = aaaammdd / 10000;

    m = (aaaammdd  - (a * 10000));
    m = m / 100;

    d = aaaammdd % 100;

    cout << "La fecha introducida es " << a << "/" << m << "/" << d << endl;

    return 0;

}