#include <iostream>
using namespace std;
//C++ Problemas, problema 2
//Del libro para Resolver Problemas por computadora: Ejercicio 23 Capitulo 2. Problema de indice de triunfo de equipo de Baseball
// Lopez Galaz Jesus Xavier 18212208

int main() {
    string Equipo;
    float Ganar, Perder;
    float PGanancia;
    
    cout << "Dime el nombre del equipo de Baseball\n";
    cin >> Equipo;
    
    cout << "Partidos que ganaron: \n";
    cin >> Ganar;
    
    cout << "Partidos que perdieron\n";
    cin >> Perder;
    
    PGanancia=(Ganar/(Ganar+Perder))*100;
    
    cout << "El equipo " << Equipo << " Gano " << Ganar << " de los "<< (Ganar + Perder) << " partidos, su porcentaje de triunfo es del " << PGanancia << "% ";
    return 0;
}
