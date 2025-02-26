
#include <iostream>
using namespace std;

int main(){

    float largo, ancho, area_pies, area_acres;

    // Solicitar al usuario el largo y el ancho del campo en pies
    cout << "Ingrese el largo del campo en pies: ";
    cin >> largo;
    cout << "Ingrese el ancho del campo en pies: ";
    cin >> ancho;

    // Calcular el área en pies cuadrados
    area_pies = largo * ancho;

    // Convertir el área a acres (1 acre = 43,560 pies cuadrados)
    area_acres = area_pies / 43560;

    // Mostrar el área en acres
    cout << "El área del campo es " << area_acres << " acres." << endl;

    return 0;
}
