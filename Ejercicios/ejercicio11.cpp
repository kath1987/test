
#include <iostream>
#include <iomanip> // Para formato de salida con decimales

using namespace std;

int main() {
    // Solicitar al usuario la eficiencia de combustible en MPG
    double mpg;
    cout << "Ingrese la eficiencia de combustible en millas por galón (MPG): ";
    cin >> mpg;

    // Convertir de MPG a L/100km
    double l_per_100km = 235.214 / mpg;

    // Mostrar el resultado
    cout << fixed << setprecision(2); // Formato con dos decimales
    cout << "La eficiencia de combustible equivalente en L/100km es: " << l_per_100km << endl;

    return 0;
}
