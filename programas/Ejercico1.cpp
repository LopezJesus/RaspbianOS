#include <iostream>
using namespace std;

//C++ Problemas, problema 1
//Del libro para Resolver Problemas por computadora: Ejercicio 36 Capitulo 11. Problema de popularidad de estudiantes de secundaria
// Lopez Galaz Jesus Xavier 18212208
int main()
{
    int Votos[52] =  { 4, 1, 1, 2, 4, 1, 2, 3, 4, 4, 4, 1, 3,
                                3, 2, 4, 1, 2, 1, 4, 3, 3, 4, 1, 2, 4, 3, 2, 4, 4, 3, 1, 2,
                                4, 4, 3, 1, 1, 3, 4, 4, 4, 2, 1, 2, 4, 2, 4, 2, 1, 3, 4 }; ;
    int acumuladorHB = 0;
    int acumuladorDL = 0;
    int acumuladorQB = 0;
    int acumuladorDE = 0;

    for (int i = 0; i < 52; i++)
    {
        switch(Votos[i])
        {
            case 1:
                acumuladorHB++;
                break;

            case 2:
                acumuladorDL++;
                break;

            case 3:
                acumuladorQB++;
                break;

            case 4:
                acumuladorDE++;
                break;
        }

    }
    cout << ("Votaciones por los alumnos");

    cout << "J. Sanchez: " << acumuladorHB << "\n";
    cout << "S. Bermudez: " << acumuladorDL << "\n";
    cout << "P. Solis: " << acumuladorQB << "\n";
    cout << "B.Hernandez: " << acumuladorDE << "\n";
    cout <<"\n";

    int Mayor = acumuladorHB;
    if (acumuladorDL > Mayor)
        Mayor = acumuladorDL;
    if (acumuladorQB > Mayor)
        Mayor = acumuladorQB;
    if (acumuladorDE > Mayor)
        Mayor = acumuladorDE;

    if(Mayor== acumuladorHB)
    {
        cout << "El triunfador es J. Sanchez con la cantidad de votos de: " <<acumuladorHB << " con la posicion de Halfback";

    }
    if (Mayor == acumuladorDL)
    {
        cout << "El triunfador es S. Bermudez con la cantidad de votos de: "<< acumuladorDL << " con la posicion de Tackle";

    }
    if (Mayor == acumuladorQB)
    {
        cout << "El triunfador es P. Solis con la cantidad de votos de: " << acumuladorQB << " con la posicion de Quarterback";
    }
    if (Mayor == acumuladorDE)
    {
        cout << "El triunfador es B.Hernandez con la cantidad de votos de: "<< acumuladorDE << " con la posicion de extremo";
    }

    return 0;
}
