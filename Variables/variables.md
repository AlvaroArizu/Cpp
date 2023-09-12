# Compiladores 
- #include `<iostream>` 
  *  Esta directiva permitirá incluir la Biblioteca necesaria para utilizar la función
de lectura cin y la función de escritura cout propias de C++.
- #include`<stdio.h>`
  *  Para utilizar las funciones de lectura y escritura propias del Lenguaje C. (standard Input Output)
- #include`<conio.h>`
  * Para utilizar: la función que limpia pantalla: clrscr() y leer carácter: getch()
- #include`<iomanip>`
  * biblioteca estándar que permite controlar y personalizar la forma en que se muestra la salida de datos, como números y texto, en la consola. Proporciona herramientas para establecer la precisión, el ancho y el relleno de los datos, lo que facilita la presentación de la información de manera más legible y atractiva en la pantalla.
- - using namespace std;
  * 

# Tipos de variables 
### 1. int (Enteros)
- Almacenan números enteros, tanto positivos como negativos.
```c++
int numero = 42;
```
### 2. float (flotantes)
- Almacenan números decimales de precisión simple.
```c++
float pi = 3.14159;
```
### 3. double (dobles)
- Almacenan números decimales de precisión doble con mayor precisión que los flotantes.
```c++
double pi = 3.14159265359;
```
### 4. char(caracteres)
- Almacenan un solo carácter, como una letra o un símbolo, entre comillas simples
```c++
char letra = 'A';
```
### 5. string (cadena de caracteres)
- Almacenan una secuencia de caracteres.
```c++
std::string nombre = "Juan";
```
### 6. bool (Booleanos)
- Almacenan valores verdaderos o falsos.
```c++
bool esVerdadero = true;
```
### 7. array (Arreglos)
-  Almacenan colecciones de elementos del mismo tipo.
```c++
int numeros[5] = {1, 2, 3, 4, 5};
```

# Entrada y salida
| Operación | Descripción                                                          | Ejemplo                                    |
|-----------|----------------------------------------------------------------------|--------------------------------------------|
| Entrada   | El operador de extracción “>>”, para extraer valores del flujo y almacenarlos en variables. | `cin >> variable;`                         |
| Salida    | El operador de inserción “<<”, inserta datos en el flujo de salida cout, que los visualiza en la pantalla. | `cout << "Texto a mostrar";`               |
