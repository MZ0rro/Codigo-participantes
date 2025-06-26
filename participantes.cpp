#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int jugadores_c, num_random;
    cout << "¿Cuántos competidores van a participar? ";
    cin >> jugadores_c;

    int jugadores[jugadores_c][2];
    srand(time(0));

    for (int i = 0; i < jugadores_c; i++) {
        cout << "Ingrese el número del jugador: ";
        cin >> jugadores[i][0];
    }

    cout << "EN COMPETENCIA" << endl;

    for (int i = 0; i < jugadores_c; i++) {
        num_random = rand() % jugadores_c + 1;
        jugadores[i][1] = num_random;

        cout << "El puesto de llegada para el jugador " << jugadores[i][0] << " es " << num_random << endl;

        switch (num_random) {
            case 1:
                cout << "Ganaste 1.000.000 de pesos" << endl;
                break;
            case 2:
                cout << "Ganaste 500.000 de pesos" << endl;
                break;
            case 3:
                cout << "Ganaste 250.000 de pesos" << endl;
                break;
            case 4:
                cout << "Ganaste 100.000 de pesos" << endl;
                break;
            case 5:
                cout << "Ganaste una medalla" << endl;
                break;
            default:
                cout << "Ganaste un dulce" << endl;
                break;
        }
    }

    return 0;
}
