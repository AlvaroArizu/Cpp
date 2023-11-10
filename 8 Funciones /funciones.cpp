// Función para calcular el margen de ganancia total sobre el stock actual
float calcularMargenGananciaTotal(const vector<Producto> &productos) {
  float margen_ganancia_total = 0;
  for (const Producto &producto : productos) {
    margen_ganancia_total += (producto.precio_venta - producto.precio_compra) * producto.stock_actual;
  }
  return margen_ganancia_total;
}

// Función para determinar si el stock actual de un producto alcanza el stock mínimo
bool alcanzaStockMinimo(const Producto &producto) {
  return producto.stock_actual >= producto.stock_minimo;
}

// Función para encontrar el menor y el mayor precio de venta
pair<float, float> encontrarMenorYMayorPrecioDeVenta(const vector<Producto> &productos) {
  float menor_precio_venta = productos[0].precio_venta;
  float mayor_precio_venta = productos[0].precio_venta;
  for (const Producto &producto : productos) {
    if (producto.precio_venta < menor_precio_venta) {
      menor_precio_venta = producto.precio_venta;
    }
    if (producto.precio_venta > mayor_precio_venta) {
      mayor_precio_venta = producto.precio_venta;
    }
  }
  return make_pair(menor_precio_venta, mayor_precio_venta);
}

// Función para encontrar los productos con stock superior al 50% del stock mínimo
vector<Producto> encontrarProductosConStockSuperiorAl50PorcientoDelStockMinimo(const vector<Producto> &productos) {
  vector<Producto> productos_con_stock_superior_al_50_porciento_del_stock_minimo;
  for (const Producto &producto : productos) {
    if (producto.stock_actual > producto.stock_minimo * 0.5) {
      productos_con_stock_superior_al_50_porciento_del_stock_minimo.push_back(producto);
    }
  }
  return productos_con_stock_superior_al_50_porciento_del_stock_minimo;
}