#include <iostream> // para usar la entrada y salida estándar en C++.
using namespace std; //  para evitar tener que escribir std::

int main() {
    float Pi = 0.0; //  se establece inicialmente en 0.0 y se utilizará para acumular la aproximación de Pi.
    float precision = 0.0000000001;  // se establece en 0.0000000001 y se utilizará para determinar cuándo detener el bucle de cálculo.
    float PD = 3.141592f; // la f al final indica que esos números son de tipo float y se establece en 3.141592 y representa el valor real de Pi para comparar con la aproximación.
    float denom = 1.0f; // se establece en 1.0 y se utiliza para controlar el denominador en cada término de la serie.
    float sign = 1.0f; // se establece en 1.0 y se utiliza para alternar el signo de cada término de la serie.
    
    while (true) { // while (true) que se ejecutará indefinidamente hasta que se alcance una condición de salida.
        float termino = sign * (1.0f / denom); //Calcula el siguiente término de la serie de Leibniz utilizando la fórmula sign * (1.0f / denom). El resultado se almacena en la variable termino
        Pi += termino;
        denom += 2.0f; // incrementa denom en 2.0 para pasar al siguiente denominador en la serie
        sign = -sign; // Cambia el signo multiplicando sign por -1.0 para alternar el signo de cada término.

        float dif = PD - Pi * 4.0f; // Calcula la diferencia entre el valor real de Pi (PD) y la aproximación actual (Pi * 4.0f). Se almacena en la variable dif
        if (dif >= -precision && dif <= precision) {
            break;  
            //Verifica si la diferencia dif está dentro del rango de precisión especificado por -precision y precision. Si es así, significa que la aproximación es lo suficientemente cercana al valor real de Pi y se sale del bucle usando la instrucción break
        }
    }

    cout.precision(10); // precision de salida de 10 decimales
    cout << "El valor aproximado de Pi es: " << Pi * 4.0f << endl; // Pi por 4.0

    return 0;
}
