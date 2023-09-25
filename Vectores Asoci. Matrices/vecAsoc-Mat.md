# Vectores asociados a una matriz
![](Pic/1.png)

```cpp
#include <conio.h>
#include <iostream.h>

int main(){
    int i, j, c, f;
    int mat[][5]{{1,2,3,4,5}, {2,2,2,2,2}, {1,3,1,3,1}};
    int vecF[3];
    int vecC[5];

    for (i=0;i<3;i++){
        vecF[i]=0;
    }

    for (j=0;j<5;j++){
        vecC[j]=0;
    }

    for (f=0;f<3;f++){
        for (c=0;c<5;c++){
            vecF[f]=vecF[f]+ mat[f][c];
            vecC[c]=vecC[c]+ mat[f][c];
        }
    }

    for (f=0;f<3;f++){
        cout<<"Resultado de Fila: "<<vecF[f]<<endl;
    }

    for (c=0;c<3;c++){
        cout<<"Resultado de columna: "<<vecC[c]<<endl;
    }

   getch();
   return 0;
}
```
### Resultados
```
resultado de fila: 15
resultado de fila: 10
resultado de fila: 9
resultado de columna:c4 
resultado de columna: 7
resultado de columna: 6
resultado de columna: 9
resultado de columna: 8
```

## Vector ASOCIADO con la sumatoria de los elementos de:
- Las Filas
- Las Columnas

## Vector ASOCIADO de Máximos o Mínimos de los elementos de:
- cada Fila
- cada Columna

