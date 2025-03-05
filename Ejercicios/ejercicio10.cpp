
#include <iostream>
#include <cmath>  // Para usar log10 y potencia

using namespace std;

int main() {
    // Solicitar al usuario los dos enteros
    int a, b;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    // Calcular y mostrar las operaciones
    cout << "La suma de a y b: " << a + b << endl;
    cout << "La diferencia cuando b se resta de a: " << a - b << endl;
    cout << "El producto de a y b: " << a * b << endl;
    cout << "El cociente cuando a se divide entre b: " << a / b << endl;
    cout << "El resto cuando a se divide entre b: " << a % b << endl;
    cout << "El resultado de log10 de a: " << log10(a) << endl;
    cout << "El resultado de a elevado a la b (a^b): " << pow(a, b) << endl;

    return 0;
}
