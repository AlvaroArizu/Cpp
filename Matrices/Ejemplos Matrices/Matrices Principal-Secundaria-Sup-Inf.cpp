#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){
    int n = 10; // Número de filas
    int m = 10; // Número de columnas

    int i, j;

    int mat[n][m]; // Declarar la matriz después de asignar valores a n y m

    // Inicializar la matriz con 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            mat[i][j] = 0;
        }
    }

    // Diagonal Principal
    for (i = 0; i < n; i++) {
        mat[i][i] = 99;
    }

    // Triangular superior
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < m; j++) {
            mat[i][j] = 88;
        }
    }

    // Triangular inferior
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            mat[i][j] = 77;
        }
    }
    
    //Diagonal secundaria
    for (i=0; i<n;i++){
    	mat[i][n-1-i]= 66;
	}

    // Impresion Matricial
    cout << setw(7) << " ";
        for (int j = 0; j < n; j++) {
            cout << setw(7) << j;
        }
        cout << endl;

        cout << setw(7) << "--------";
        for (int j = 0; j < n; j++) {
            cout << setw(7) << "-------";
        }
        cout << endl;

        for (int i = 0; i < n; i++) {
            cout << setw(6) << i << "|";
            for (int j = 0; j < n; j++) {
                cout << setw(7) << mat[i][j];
            }
            cout << endl;
        }
    return 0;
}

