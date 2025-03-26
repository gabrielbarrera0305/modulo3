#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>
using namespace std;

double leerPrecio() {
    double precio;
    while (true) {
        cout << "Precio: $";
        cin >> precio;
        
        if (cin.fail() || precio <= 0) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error: Ingrese un precio valido (mayor que 0).\n";
        } else {
            cin.ignore();
            return precio;
        }
    }
}

int main() {
    vector<string> productos;
    vector<double> precios;
    double total = 0.0;
    char opcion;

    cout << "=== INVERCIONES MAMA FLOR ===\n";

    do {
        string producto;
        double precio;

        cout << "\nNombre del producto: ";
        getline(cin, producto);

        if (producto.empty()) {
            cout << "Error: El nombre no puede estar vacio.\n";
            continue; 
        }

        precio = leerPrecio();

        productos.push_back(producto);
        precios.push_back(precio);
        total += precio;

        cout << "\n¿Agregar otro producto? (s/n): ";
        cin >> opcion;
        cin.ignore(); 

    } while (opcion == 's' || opcion == 'S');

    double descuento = (total > 100.0) ? total * 0.10 : 0.0;

    cout << fixed << setprecision(2);
    cout << "\n=== RESUMEN DE COMPRA ===";
    cout << "\nProductos comprados:\n";
    
    for (size_t i = 0; i < productos.size(); ++i) {
        cout << "- " << productos[i] << ": $" << precios[i] << "\n";
    }

    cout << "\nSubtotal: $" << total;
    cout << "\nDescuento (10% sobre $100): $" << descuento;
    cout << "\nTOTAL A PAGAR: $" << (total - descuento) << "\n";

    return 0;
}