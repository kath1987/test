
#include <iostream>

using namespace std;

int main() {
    // Solicitar al usuario un entero positivo
    int n;
    cout << "Ingrese un numero entero positivo (n): ";
    cin >> n;

    // Validar que n sea positivo
    if (n <= 0) {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
        return 1; // Termina el programa si la entrada no es válida
    }

    // Calcular la suma de los primeros n enteros positivos usando la fórmula
    int suma = (n * (n + 1)) / 2;

    // Mostrar el resultado
    cout << "La suma de los primeros " << n << " enteros positivos es: " << suma << endl;

    return 0;
}
