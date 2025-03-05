
#include <iostream>

using namespace std;

int main() {
    // Solicitar al usuario la distancia en pies
    double pies;
    cout << "Ingrese la distancia en pies: ";
    cin >> pies;

    // Convertir la distancia a pulgadas, yardas y millas
    double pulgadas = pies * 12;
    double yardas = pies / 3;
    double millas = pies / 5280;

    // Mostrar las conversiones
    cout << "La distancia en pulgadas es: " << pulgadas << " pulgadas." << endl;
    cout << "La distancia en yardas es: " << yardas << " yardas." << endl;
    cout << "La distancia en millas es: " << millas << " millas." << endl;

    return 0;
}
