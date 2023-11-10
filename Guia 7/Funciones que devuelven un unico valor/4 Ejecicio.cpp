/*
Se pide diseñar una función que: dados A y B devuelva el producto de (A x B) por  sumas sucesivas. (Ejemplo: Multiplicar 3 * 5 es sumar 3 veces el valor 5). Luego generar una función main que lea dos valores e informe su producto utilizando la función.
*/
#include <iostream>
using namespace std;

// Función para calcular el producto de A y B utilizando sumas sucesivas
int productoPorSumasSucesivas(int A, int B) {
    int total = 0;
    for (int i = 0; i < A; i++) {
        total += B;
    }
    return total;
};

int main() {
    int A, B;
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;

    int resultado = productoPorSumasSucesivas(A, B);

    cout << "El producto de " << A << " x " << B << " es: " << resultado << endl;

    return 0;
}
