
#include <iostream>
#include <cmath> // Para usar funciones trigonométricas y sqrt

using namespace std;

const double R = 6371.0; // Radio de la Tierra en km

int main() {
    double lat1, lon1, lat2, lon2;

    // Solicitar al usuario las coordenadas de los dos puntos
    cout << "Ingrese la latitud y longitud del primer punto (en grados): ";
    cin >> lat1 >> lon1;
    cout << "Ingrese la latitud y longitud del segundo punto (en grados): ";
    cin >> lat2 >> lon2;

    // Convertir grados a radianes
    lat1 = lat1 * M_PI / 180.0;
    lon1 = lon1 * M_PI / 180.0;
    lat2 = lat2 * M_PI / 180.0;
    lon2 = lon2 * M_PI / 180.0;

    // Fórmula de Haversine
    double dlat = lat2 - lat1;
    double dlon = lon2 - lon1;
    double a = sin(dlat / 2) * sin(dlat / 2) + cos(lat1) * cos(lat2) * sin(dlon / 2) * sin(dlon / 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));
    double distancia = R * c;

    // Mostrar el resultado
    cout << "La distancia entre los dos puntos es: " << distancia << " km." << endl;

    return 0;
}

