# Operadores Aritmeticos
### 1. Suma (+)
```c++
int resultado = 5 + 3; 
// resultado contendrá 8
```

## 2. Resta (-)
```c++
int resultado = 10 - 3; 
// resultado contendrá 7
```

## 3. Multiplicacion (*)
```c++
int resultado = 4 * 6; 
// resultado contendrá 24
```

## 4. Division (/)
```c++
double resultado = 12.0 / 4.0; 
// resultado contendrá 3.0
```

## 5. Modulo (%)
-  Calcula el residuo de la división entre los dos valores.
```c++
int resultado = 10 % 3; 
// resultado contendrá 1 (residuo de 10 / 3)
```

# Operadores de asignacion
### 1. Asignacion simple (=)
- Asigna el valor del lado derecho a la variable del lado izquierdo.
```c++
int x = 5; // x contendrá 5
```
### 2. Suma y asigncion (+=)
- Suma el valor del lado derecho al valor de la variable del lado izquierdo y asigna el resultado a la variable del lado izquierdo.
```c++
int x = 5;
x += 3; // x contendrá 8 (5 + 3)
```
### 3. Resta y asigncion (-=)
- Resta el valor del lado derecho al valor de la variable del lado izquierdo y asigna el resultado a la variable del lado izquierdo.
```c++
int x = 10;
x -= 3; // x contendrá 7 (10 - 3)
```
### 4. Multiplicacion y asignacion (*+)
- Multiplica el valor de la variable del lado izquierdo por el valor del lado derecho y asigna el resultado a la variable del lado izquierdo.
```c++
int x = 4;
x *= 6; // x contendrá 24 (4 * 6)
```
### 5. Division y asignacion (/=)
-  Divide el valor de la variable del lado izquierdo por el valor del lado derecho y asigna el resultado a la variable del lado izquierdo.
```c++
double x = 12.0;
x /= 4.0; // x contendrá 3.0 (12.0 / 4.0)
```

# Operadores de Incremento (++)
Aumenta el valor de la variable en 1 unidad.
### 1. `++variable` (prefijo)
- Incrementa la variable y luego devuelve el valor incrementado.
```c++
int x = 5;
int y = ++x; 
// x será 6, y será 6
```
### 2. `variable++` (sufijo)
-  Devuelve el valor actual de la variable y luego la incrementa.
```c++
int x = 5;
int y = x++; 
// x será 6, y será 5
```

# Operadores de decremento (--)
Disminuye el valor de la variable en 1 unidad.
### 1. `--variable` (prefijo)
- Decrementa la variable y luego devuelve el valor decrementado.
```c++
int x = 5;
int y = --x; 
// x será 4, y será 4
```
### 2. `variable--` (sufijo)
-  Devuelve el valor actual de la variable y luego la decrementa.
```c++
int x = 5;
int y = x--; 
// x será 4, y será 5
```
# Operadores de Pre/Post Incremento/Decremento
| Operación         | Ejemplo        | Resultado |
|-------------------|----------------|-----------|
| Pre Incremento    | `++a;`         | Incrementa `a` en 1 y devuelve el nuevo valor de `a`. |
| Post Incremento   | `a++;`         | Devuelve el valor actual de `a` y luego incrementa `a` en 1. |
| Pre Decremento    | `--a;`         | Decrementa `a` en 1 y devuelve el nuevo valor de `a`. |
| Post Decremento   | `a--;`         | Devuelve el valor actual de `a` y luego decrementa `a` en 1. |

# Operadores relacionles 
| Operador | Descripción            | Ejemplo    |
|----------|------------------------|------------|
| `<`      | Menor que              | `a < b`    |
| `>`      | Mayor que              | `c > d`    |
| `<=`     | Menor o igual que      | `e <= f`   |
| `>=`     | Mayor o igual que      | `g >= h`   |
| `==`     | Igual que              | `i == j`   |
| `!=`     | No igual que           | `k != l`   |

# Operadores logicos
| Operador | Descripción     | Ejemplo                    |
|----------|-----------------|----------------------------|
| `!`      | not             | `!(y == 0)`                |
| `&&`     | and             | `(x == 0) && (z == 0)`     |
| `\|\|`   | or              | `(x == 0) \|\| (z == 0)`   |

