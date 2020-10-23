#include <iostream>
using namespace std;

//C++ Problemas, problema 5
//Del libro para Resolver Problemas por computadora: Ejercicio 19 Capitulo 3. Perimetro de un triangulo
// Lopez Galaz Jesus Xavier 18212208

int main()
{
    double lado1, lado2, lado3,perimetro;
    cout << "Perimetro de un Triangulo irregular ";
    cout << "\nLado 1:  ";
    cin >> lado1;
    cout << "Lado 2: ";
    cin >> lado2;
    cout << "Lado 3 ";
    cin >> lado3;

    perimetro=lado1+lado2+lado3;

    cout << "El perimetro del triangulo irregular es de: " << perimetro << " unidades ";

    return 0;
}
