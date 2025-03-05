
#include <iostream>
#include <cmath> // Para usar sqrt

using namespace std;

int main() {
    // Solicitar al usuario la altura desde la que se deja caer el objeto
    double altura;
    cout << "Ingrese la altura desde la que se deja caer el objeto (en metros): ";
    cin >> altura;

    // Calcular la velocidad final usando la fórmula de caída libre
    double g = 9.8; // Aceleración de la gravedad en m/s²
    double velocidad = sqrt(2 * g * altura);

    // Mostrar la velocidad final
    cout << "La velocidad del objeto cuando golpea el suelo es: " << velocidad << " m/s." << endl;

    return 0;
}
