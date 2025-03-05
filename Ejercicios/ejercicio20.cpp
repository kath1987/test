
#include <iostream>

using namespace std;

int main() {
    // Solicitar al usuario la presión, el volumen y la temperatura
    double P, V, T;
    cout << "Ingrese la presión (en Pascales): ";
    cin >> P;
    cout << "Ingrese el volumen (en litros): ";
    cin >> V;
    cout << "Ingrese la temperatura (en Kelvin): ";
    cin >> T;

    // La constante de los gases ideales en J/mol K
    double R = 8.314;

    // Calcular la cantidad de gas en moles
    double n = (P * V) / (R * T);

    // Mostrar el resultado
    cout << "La cantidad de gas en moles es: " << n << " moles." << endl;

    return 0;
}
