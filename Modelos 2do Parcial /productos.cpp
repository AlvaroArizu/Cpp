#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Define la cantidad máxima de productos y ventas
#define PRO 100
#define VENTAS 100

// Define la estructura Producto
struct Producto {
    int codigo;
    double precioCompra;
    double precioVenta;
    int stockInicial;
    int stockMinimo;
    int stockActual;
};

// Define la estructura Venta
struct Venta {
    int codigoProducto;
    int cantidadVendida;
};

// Función para calcular el margen de ganancia total
double Ganancia(const vector<Producto>& productos) {
    double gananciaTotal = 0.0;
    for (const Producto& producto : productos) {
        // Calculamos la ganancia por producto y la sumamos al total
        gananciaTotal += (producto.precioVenta - producto.precioCompra) * producto.stockActual;
    }
    return gananciaTotal;
}

// Función para verificar si el stock actual alcanza el stock mínimo
bool Pedir(const Producto& producto) {
    return producto.stockActual <= producto.stockMinimo;
}

// Función para obtener productos con stock superior al 50% del stock mínimo
vector<Producto> SobreStock(const vector<Producto>& productos) {
    vector<Producto> productosSobreStock;

    for (int i = 0; i < productos.size(); i++) {
        const Producto& producto = productos[i];
        if (producto.stockActual > 1.5 * producto.stockMinimo) {
            productosSobreStock.push_back(producto);
        }
    }
    return productosSobreStock;
}

// Función para imprimir los datos de los productos
void Imprimir(const vector<Producto>& productos) {
    for (const Producto& producto : productos) {
        cout << "Código: " << producto.codigo << endl;
        cout << "Precio de Compra: " << producto.precioCompra << endl;
        cout << "Precio de Venta: " << producto.precioVenta << endl;
        cout << "Stock Inicial: " << producto.stockInicial << endl;
        cout << "Stock Mínimo: " << producto.stockMinimo << endl;
        cout << "Stock Actual: " << producto.stockActual << endl;
        cout << "---------------------------" << endl;
    }
}

int main() {
    Producto vecProducto[PRO];
    Venta vecVentas[VENTAS];
    int numProductos = 0;
    int numVentas = 0;

    int procesoProductos = 1;
    cout << "¿Deseas cargar productos? (1: SI, 2: NO): ";
    cin >> procesoProductos;

    while (procesoProductos == 1 && numProductos < PRO) {
        cout << "Código del producto: ";
        cin >> vecProducto[numProductos].codigo;
        cout << "Precio de compra: ";
        cin >> vecProducto[numProductos].precioCompra;
        cout << "Precio de venta: ";
        cin >> vecProducto[numProductos].precioVenta;
        cout << "Stock inicial: ";
        cin >> vecProducto[numProductos].stockInicial;
        cout << "Stock mínimo: ";
        cin >> vecProducto[numProductos].stockMinimo;
        cout << "Stock actual: ";
        cin >> vecProducto[numProductos].stockActual;

        numProductos++;

        cout << "¿Deseas cargar otro producto? (1: SI, 2: NO): ";
        cin >> procesoProductos;
    }

    // Segundo proceso: carga de ventas
    int procesoVentas;
    cout << "Ingrese los datos de las ventas (CÓDIGO DE PRODUCTO 0 para finalizar):" << endl;

    while (true) {
        cout << "Código del producto vendido: ";
        cin >> procesoVentas;

        if (procesoVentas == 0) {
            break;
        }

        cout << "Cantidad vendida: ";
        cin >> vecVentas[numVentas].cantidadVendida;

        numVentas++;
    }

    double menorPrecioVenta, mayorPrecioVenta;
    menorPrecioVenta = mayorPrecioVenta = vecProducto[0].precioVenta;

    for (int i = 0; i < numProductos; i++) {
        menorPrecioVenta = min(menorPrecioVenta, vecProducto[i].precioVenta);
        mayorPrecioVenta = max(mayorPrecioVenta, vecProducto[i].precioVenta);
    }

    vector<Producto> productosSobreStock;

    for (int i = 0; i < numProductos; i++) {
        if (vecProducto[i].stockActual > 1.5 * vecProducto[i].stockMinimo) {
            productosSobreStock.push_back(vecProducto[i]);
        }
    }

    // Muestra los resultados
    cout << "1) Datos de Productos:" << endl;
    Im

    Imprimir(vecProducto);
    cout << "2) Margen de Ganancia Total: " << Ganancia(vecProducto) << endl;
    cout << "3) Cantidad de Productos con Stock Mínimo: " << count_if(vecProducto, vecProducto + numProductos, Pedir) << endl;
    cout << "4) Menor Precio de Venta: " << menorPrecioVenta << ", Mayor Precio de Venta: " << mayorPrecioVenta << endl;
    cout << "5) Cantidad de Productos con Stock Superior al 50% del Stock Mínimo: " << productosSobreStock.size() << endl;

    return 0;
}
