/*
Realizar una función DÍGITOI (N, K) que devuelva el K-ésimo dígito del número N, contando desde la izquierda del mismo. (Suponer que N tienen por lo menos K dígitos).

	Ej: Para N = 1682  y  K = 2  la función devuelve el dígito 6.
	Ej: Para N =   573  y  K = 1  la función devuelve el dígito 5.
Luego generar una función main que lea dos valores N1, N2, e informe el N2 dígito izquierdo de N1.
*/
#include <iostream>
#include <cmath>
using namespace std;

// Función para obtener el K-ésimo dígito desde la izquierda de N
int DIGITOI(int N, int K) {
    int digitos = log10(N) + 1;  // Calcular la cantidad de dígitos en N
    int posicionDesdeDerecha = digitos - K;  // Calcular la posición desde la derecha
    int resultado = 0;

    if (posicionDesdeDerecha >= 1) {
        // Extraer el dígito en la posición deseada
        int divisor = pow(10, posicionDesdeDerecha - 1);
        resultado = (N / divisor) % 10;
    }

    return resultado;
}

int main() {
    int N1, N2;
    cout << "Ingrese el número N1: ";
    cin >> N1;
    cout << "Ingrese la posición del dígito K (izquierda): ";
    cin >> N2;

    int resultado = DIGITOI(N1, N2);

    cout << "El dígito " << N2 << " desde la izquierda de " << N1 << " es: " << resultado << endl;

    return 0;
}
