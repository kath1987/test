
#include <iostream>

using namespace std;

int main() {
    int pies, pulgadas;

    // Solicitar al usuario la altura en pies y pulgadas
    cout << "Ingrese la cantidad de pies: ";
    cin >> pies;
    cout << "Ingrese la cantidad de pulgadas: ";
    cin >> pulgadas;

    // Convertir a centímetros
    double altura_cm = (pies * 30.48) + (pulgadas * 2.54);

    // Mostrar el resultado
    cout << "La altura equivalente en centímetros es: " << altura_cm << " cm." << endl;

    return 0;
}
