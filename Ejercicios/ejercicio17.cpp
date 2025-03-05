
#include <iostream>
#include <iomanip> // Para formato con decimales

using namespace std;

int main() {
    // Solicitar al usuario la masa del agua y el cambio de temperatura
    double masa, deltaT;
    cout << "Ingrese la masa de agua en gramos: ";
    cin >> masa;
    cout << "Ingrese el cambio de temperatura en grados Celsius: ";
    cin >> deltaT;

    // Calcular la energía en Julios
    double energia = masa * 4.186 * deltaT;

    // Convertir la energía a kWh (1 kWh = 3,600,000 J)
    double energia_kWh = energia / 3600000.0;

    // Calcular el costo de calentar el agua
    double costo = energia_kWh * 0.085; // Costo por kWh

    // Mostrar los resultados
    cout << fixed << setprecision(2);
    cout << "La cantidad de energía necesaria es: " << energia << " Julios." << endl;
    cout << "El costo de calentar el agua es: $" << costo << endl;

    return 0;
}
