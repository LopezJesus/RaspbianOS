![](imagenes/portadatcnm.png)
#    Tecnológico Nacional de México
#   Instituto Tecnológico de Tijuana
#        Subdirección Académica

# Departamento de Sistemas y Computación
# Ingeniería en Sistemas Computacionales
# Lenguajes de interfaz 

# Practica Bloque: 2
# Objetivo: Elabora la QEMU de RaspberryPI virtual y corra sus programas de CPP.

# López Galaz Jesús Xavier 18212208
   

# Profesor:
# MC. René Solis Reyes
# Semestre sep - ene 2020

<a href="https://cooltext.com"><img src="https://images.cooltext.com/5474868.png" width="658" height="73" alt="Ejecutando la QEMU" /></a>

![](imagenes/prog1.png)
```bash 
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

```

![](imagenes/prog2.png)
```bash 
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
```

![](imagenes/prog3.png)

```bash 
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

```

![](imagenes/prog4.png)
```bash
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

```

![](imagenes/prog5.png)
```bash 
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
```

<a href="http://cooltext.com" target="_top"><img src="https://cooltext.com/images/ct_pixel.gif" width="80" height="15" alt="Cool Text: Logo and Graphics Generator" border="0" /></a>

# Conclusión
En esta unidad se puede concluir que el alumnado pudo identificar las soluciones distintas que existen para compilar programas que previamente fueron elaborados en el lenguaje C++, se comprendio mediane complementos teóricos sobre ARM y como funciona mediante el emulador QEMU, de Raspberry PI. Ademas de todo esto la practica ayudo al alumno logrando que este pueda comprender el Markdown, asi como el entendimiento de la herramienta GitHub, aprendiendo a crear carpetas o clonar archivos desde la terminal para su posterior utilizacion en el *nano* de Linux.
