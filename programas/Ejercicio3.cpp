#include <iostream>
using namespace std;

//C++ Problemas, problema 3
//Del libro para Resolver Problemas por computadora: Ejercicio 7 Capitulo 10. Juego de adivinar un numero aleatorio (de 2 jugadores)
// Lopez Galaz Jesus Xavier 18212208

int main() {
    cout << "Hello, World!" << std::endl;
    int e = 0;
    int jug1, jug2;
    int puntJ1 = 0;
    int puntJ2=0;
    int CL= 0;
    int i = 0;
    do
    {
        e= rand() %75+1;
        cout <<"Adivinar numero entre 1 y 75";
        cout <<"\nJugador 1, de el numero que creas sea el correcto: ";
        cin >> jug1;
        cout <<"Jugador 2, de el numero que creas sea el correcto: ";
        cin >> jug2 ;

        if (jug1 == e)
        {
            puntJ1 = puntJ1 + 15;
        }
        if (jug1 == e)
        {
            puntJ2 = puntJ2 + 15;
        }
        int dif1 = abs(e - jug1);
        int dif2 = abs(e - jug2);
        if (dif1 < dif2)
        {
            puntJ1 = puntJ1 + 15;

        }
        else if (dif2 < dif1)
        {
            puntJ2 = puntJ2 + 15;

        }
        cout <<"El numero era " << e;
        cout <<"\nQuieres otra ronda? (1=Si/ 2=No)";
        cin >> CL;
        i++;
    } while (CL == 1);
    cout <<"\nRondas totales: " << i;
    cout <<"\nPuntuacion Final J1 " << puntJ1;
    cout <<"\n88Puntuacion Final J2 " << puntJ2;
    return 0;
}
