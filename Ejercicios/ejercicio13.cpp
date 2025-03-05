
#include <iostream>

using namespace std;

int main() {
    int cantidad;

    // Solicitar al usuario la cantidad de dinero en centavos
    cout << "Ingrese la cantidad de dinero en centavos: ";
    cin >> cantidad;

    // Calcular la cantidad mínima de monedas
    int monedas_25 = cantidad / 25;
    cantidad %= 25;

    int monedas_10 = cantidad / 10;
    cantidad %= 10;

    int monedas_5 = cantidad / 5;
    cantidad %= 5;

    int monedas_1 = cantidad; // Lo que queda son monedas de 1 centavo

    // Mostrar el resultado
    cout << "Monedas de 25¢: " << monedas_25 << endl;
    cout << "Monedas de 10¢: " << monedas_10 << endl;
    cout << "Monedas de 5¢: " << monedas_5 << endl;
    cout << "Monedas de 1¢: " << monedas_1 << endl;

    return 0;
}

