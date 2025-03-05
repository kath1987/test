
#include <iostream>
#include <iomanip>  // Para establecer el formato de salida con dos decimales

using namespace std;

int main() {
    // Solicitar al usuario el costo de la comida
    double costo_comida;
    cout << "Ingrese el costo de la comida: ";
    cin >> costo_comida;

    // Definir la tasa de impuesto (por ejemplo, 10% como tasa local)
    double tasa_impuesto = 0.10;  // Esto puede variar dependiendo de tu ubicación

    // Calcular el monto del impuesto
    double impuesto = costo_comida * tasa_impuesto;

    // Calcular la propina como el 18% del costo de la comida sin el impuesto
    double propina = costo_comida * 0.18;

    // Calcular el gran total (costo de la comida + impuesto + propina)
    double gran_total = costo_comida + impuesto + propina;

    // Mostrar los resultados con dos decimales
    cout << fixed << setprecision(2);  // Establece la salida con dos decimales
    cout << "\nMonto del impuesto: $" << impuesto << endl;
    cout << "Monto de la propina: $" << propina << endl;
    cout << "Gran total: $" << gran_total << endl;

    return 0;
}

