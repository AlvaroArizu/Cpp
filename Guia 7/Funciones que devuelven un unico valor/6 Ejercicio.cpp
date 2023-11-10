/*
Realizar una función DÍGITOD (N, K) que devuelva el K-ésimo dígito del número N, contando desde la derecha del mismo. (Suponer que N tienen por lo menos K dígitos).

	Ej: Para N = 1682  y  K = 2  la función devuelve el dígito 8.
	Ej: Para N =   573  y  K = 3  la función devuelve el dígito 5.
Luego generar una función main que lea dos valores N1, N2, e informe el N2 dígito derecho de N1.
*/
#include <iostream>
using namespace std;

// Función para obtener el K-ésimo dígito desde la derecha de N
int DIGITOD(int N, int K) {
    for (int i = 1; i < K; i++) {
        N /= 10;  // Eliminar el dígito más a la derecha
    }
    return N % 10;  // Obtener el dígito K desde la derecha
}

int main() {
    int N1, N2;
    cout << "Ingrese el número N1: ";
    cin >> N1;
    cout << "Ingrese la posición del dígito K (derecha): ";
    cin >> N2;

    int resultado = DIGITOD(N1, N2);

    cout << "El dígito " << N2 << " desde la derecha de " << N1 << " es: " << resultado << endl;

    return 0;
}
