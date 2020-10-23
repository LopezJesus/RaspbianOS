#include <iostream>
using namespace std;

//C++ Problemas, problema 4
//Del libro para Resolver Problemas por computadora: Ejercicio 76 Capitulo 3. Area de un poligono regular
// Lopez Galaz Jesus Xavier 18212208

int main()
{
    double perimetro, apotema, lado,area;
    int n;
    cout << "Area de un poligono regular ";
    cout << "\nNumero de lados del poligono regular ";
    cout << "Numero de lados del poligono regular ";
    cin >> n;
    cout << "Tamaño de cualquier lado del poligono regular ";
    cin >> lado;
    cout << "Apotema del poligono regular ";
    cin >> apotema;

    perimetro=lado*n;
    area=(perimetro*apotema)/2;

    cout << "El area del poligono regular de "<< n << " lados, es de: " << area << " unidades cuadradas";

    return 0;
}
