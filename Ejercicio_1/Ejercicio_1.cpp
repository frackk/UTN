// UTN - Universidad Tecnológia Nacional - FRBA
// Algoritmos y Estructuras de Datos
// 1.2.1.1. Operaciones aritméticas
// Dificultad: básica, Requerido: Indispensable.
// Se ingresan por teclado dos valores numéricos enteros, a y b, se pide calcular e informar por consola el resultado de las siguientes operaciones: 
// 1. La suma: a+b.
// 2. La diferencia: a-b.
// 3. El producto: a*b.
// 4. El cociente: a/b, aceptando que b es distinto de 0 (cero).

#include <iostream>
using namespace std;

int main () {

    // int a, b;
    int a;
    int b;

    cout << "Ingrese un valor numerico entero: " << endl;
    
    cin >> a;

    cout << "Ingrese un segundo numero entero: " << endl;
    cin >> b;

    // sino se hace:
    // int a, b;
    // cin a >> b >>;
    // y ahi te toma los 2 valores.

    cout << "La suma de ambos numeros es: " << a + b << endl;
    cout << "La diferencia de ambos numeros es: " << a - b << endl;
    cout << "El producto de ambos numeros es; " << a * b << endl;
    cout << "el cociente de ambos numeros es:" << a / b << endl;

    getchar();
    system("pause");
    return 0;

    // cambio para que me deje comitear lolz
}