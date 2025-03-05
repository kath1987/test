
#include <iostream>
#include <cmath> // Para usar pi y las funciones matemáticas

using namespace std;

int main() {
    // Solicitar al usuario el radio
    double r;
    cout << "Ingrese el radio: ";
    cin >> r;

    // Calcular el área del círculo
    double area = M_PI * r * r;
    // Calcular el volumen de la esfera
    double volumen = (4.0 / 3.0) * M_PI * pow(r, 3);

    // Mostrar los resultados
    cout << "El área del círculo es: " << area << endl;
    cout << "El volumen de la esfera es: " << volumen << endl;

    return 0;
}
