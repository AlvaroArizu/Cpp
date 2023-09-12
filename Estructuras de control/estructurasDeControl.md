# Estructuras de control 
## Estructuras de control de selección (condicionales):

1. **if**: Permite ejecutar un bloque de código si una condición es verdadera.

| Estructura            | Descripción                                                                                      |
|-----------------------|--------------------------------------------------------------------------------------------------|
| `if`                  | Permite ejecutar un bloque de código si una condición es verdadera.                               |
| `if-else`             | Permite ejecutar un bloque de código si una condición es verdadera y otro bloque si la condición es falsa. |
| `if-else if-else`     | Permite probar múltiples condiciones en secuencia y ejecutar un bloque de código correspondiente a la primera condición verdadera. |
| `switch`              | Permite seleccionar un caso basado en el valor de una expresión.                                    |

### if
```c++
int edad = 20;
if (edad >= 18) {
    cout << "Eres mayor de edad." <<endl;
}
```
### if-else
```cpp
int edad = 15;
if (edad >= 18) {
    cout << "Eres mayor de edad." << endl;
} else {
    cout << "Eres menor de edad." << endl;
}
```
### if-else if-else:
```cpp
int edad = 15;
if (edad >= 18) {
    cout << "Eres mayor de edad." << endl;
} else {
    cout << "Eres menor de edad." << endl;
}
```
### switch
```cpp
#include <iostream>

int main() {
    int opcion;
    cout << "Elije una opción (1-3): ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Has seleccionado la opción 1." << endl;
            break;
        case 2:
            cout << "Has seleccionado la opción 2." << endl;
            break;
        case 3:
            cout << "Has seleccionado la opción 3." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}
```
## Etructura de control de bucles (ciclos):
| Estructura   | Descripción                                                                                                      |
|--------------|------------------------------------------------------------------------------------------------------------------|
| `while`      | Permite ejecutar un bloque de código mientras una condición sea verdadera.                                      |
| `do-while`   | Similar al bucle `while`, pero garantiza que el bloque de código se ejecute al menos una vez antes de verificar la condición. |
| `for`        | Permite ejecutar un bloque de código de manera repetitiva, con una inicialización, una condición y una expresión de actualización. |

### while
```cpp
int contador = 0;
while (contador < 5) {
   cout << "Iteración " << contador <<endl;
    contador++;
}
```
### do-while
```cpp
int contador = 0;
do {
    cout << "Iteración " << contador << endl;
    contador++;
} while (contador < 5);
```
### for
```cpp
for (int i = 0; i < 5; i++) {
    cout << "Iteración " << i << endl;
}
```
```cpp
for (inicialización; condición; expresión de actualización) {
    // Código a ejecutar en cada iteración
}
```
## Estructuras de salto
| Estructura  | Descripción                                                                                     |
|-------------|-------------------------------------------------------------------------------------------------|
| `break`     | Se utiliza para salir de un bucle o una estructura de selección antes de que se complete.      |
| `continue`  | Se utiliza para saltar al siguiente ciclo de un bucle.                                         |
| `return`    | Se utiliza para finalizar la ejecución de una función y devolver un valor.                        |
