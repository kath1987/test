
#include <iostream>
#include <iomanip> // Para establecer el formato de salida con dos decimales

using namespace std;

int main() {
    // Solicitar al usuario el monto inicial depositado en la cuenta
    double saldo_inicial;
    cout << "Ingrese el monto inicial depositado en la cuenta: ";
    cin >> saldo_inicial;

    // Definir la tasa de interés anual (4%)
    const double tasa_interes = 0.04;

    // Calcular el saldo después de cada año
    double saldo_1er_ano = saldo_inicial * (1 + tasa_interes);
    double saldo_2do_ano = saldo_1er_ano * (1 + tasa_interes);
    double saldo_3er_ano = saldo_2do_ano * (1 + tasa_interes);

    // Mostrar el saldo después de cada año con 2 decimales
    cout << fixed << setprecision(2); // Establece la salida con 2 decimales
    cout << "Saldo después del primer año: $" << saldo_1er_ano << endl;
    cout << "Saldo después del segundo año: $" << saldo_2do_ano << endl;
    cout << "Saldo después del tercer año: $" << saldo_3er_ano << endl;

    return 0;
}
