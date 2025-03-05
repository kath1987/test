
#include <iostream>

using namespace std;

int main() {
    // Definir el peso de los productos
    const int peso_widget = 75;  // en gramos
    const int peso_gizmo = 112;  // en gramos

    // Solicitar al usuario el número de widgets y gizmos
    int num_widgets, num_gizmos;
    cout << "Ingrese el número de widgets en el pedido: ";
    cin >> num_widgets;
    cout << "Ingrese el número de gizmos en el pedido: ";
    cin >> num_gizmos;

    // Calcular el peso total del pedido
    int peso_total = (num_widgets * peso_widget) + (num_gizmos * peso_gizmo);

    // Mostrar el peso total
    cout << "El peso total del pedido es: " << peso_total << " gramos." << endl;

    return 0;
}
