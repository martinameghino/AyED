#include <iostream>
using namespace std;

int main() {
    float Pi = 0.0; // hola
    float precision = 0.0000000001;  // Precisión de ejemplo aproximada
    float PD = 3.141592f; // Prec Deseada, los digitos necesarios, y de ultima, relleno con varios 0
    float denom = 1.0f;
    float sign = 1.0f; /* Controla si el siguiente término en la serie de Leibniz debe ser sumado o restado, 
         alternando entre positivo y negativo en cada iteración. */

    while (true) {
        float termino = sign * (1.0f / denom);
        Pi += termino;
        denom += 2.0f;
        sign = -sign;

        float dif = PD - Pi * 4.0f;
        if (dif >= -precision && dif <= precision) {
            break;  // Salir del bucle cuando la diferencia esté dentro de la precisión deseada
        }
    }

    cout.precision(10);
    cout << "El valor aproximado de Pi es: " << Pi * 4.0f << endl;

    return 0;
}
