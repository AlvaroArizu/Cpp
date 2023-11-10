/*
Se pide diseñar una función que: dado un vector y su longitud, imprima los valores de cada posición.
Luego generar una función main que lea un valor numérico entero (N), genere un vector con (N) números aleatorios y luego los imprima.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

void imprimirVector(int vector[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Ingrese la longitud del vector (N): ";
    cin >> N;

    int* vector = new int[N];
    for (int i = 0; i < N; i++) {
        vector[i] = rand() % 100;
    }

    cout << "Valores del vector generado:" << endl;
    imprimirVector(vector, N);

    delete[] vector;

    return 0;
}
