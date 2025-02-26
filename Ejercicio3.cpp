
#include <iostream>
using namespace std;

int main() {
    float largo, ancho, area;

    // Solicitar al usuario el largo y el ancho de la habitación
    cout << "Ingrese el largo de la habitación en metros: ";
    cin >> largo;

    cout << "Ingrese el ancho de la habitación en metros: ";
    cin >> ancho;

    // Calcular el área
    area = largo * ancho;

    // Mostrar el resultado con la unidad
    cout << "El área de la habitación es " << area << " metros cuadrados." << endl;

    return 0;
}
