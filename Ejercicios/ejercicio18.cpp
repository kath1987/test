#include <iostream>
#include <cmath> // Para usar pi

using namespace std;

int main() {
    // Solicitar al usuario el radio y la altura del cilindro
    double radio, altura;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;

    // Calcular el volumen del cilindro
    double volumen = M_PI * pow(radio, 2) * altura;

    // Mostrar el resultado redondeado a un decimal
    cout << "El volumen del cilindro es: " << round(volumen * 10) / 10.0 << endl;

    return 0;
}
