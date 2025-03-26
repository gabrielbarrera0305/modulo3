#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de alumnos: ";
    cin >> n;

    vector<float> calificaciones(n);
    int aprobados = 0;
    float suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese la calificacion del alumno " << i + 1 << ": ";
        cin >> calificaciones[i];

        while (calificaciones[i] < 0 || calificaciones[i] > 20) {
            cout << "Error: La calificacion debe estar entre 0 y 20. Intente nuevamente: ";
            cin >> calificaciones[i];
        }

        suma += calificaciones[i];
        if (calificaciones[i] >= 10) {
            aprobados++;
        }
    }

    float promedio = suma / n;
    float minima = *min_element(calificaciones.begin(), calificaciones.end());
    float maxima = *max_element(calificaciones.begin(), calificaciones.end());

    cout << "\n=== RESULTADOS ===" << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Calificacion mas alta: " << maxima << endl;
    cout << "Calificacion mas baja: " << minima << endl;
    cout << "Alumnos aprobados: " << aprobados << endl;
    cout << "Alumnos reprobados: " << n - aprobados << endl;

    return 0;
}