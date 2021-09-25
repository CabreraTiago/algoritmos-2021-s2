#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void leerNumero() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    cout << "Número ingresado = " << n << endl;
}

void aplicarOperacionesElementales() {
    int m, n;

    cout << "Ingrese el primer valor: ";
    cin >> m;

    cout << "Ingrese el segundo valor: ";
    cin >> n;

    cout << m << " + " << n << " = " << m + n << endl;
    cout << m << " - " << n << " = " << m - n << endl;
    cout << m << " * " << n << " = " << m * n << endl;
    cout << m << " / " << n << " = " << m / n << endl;
}

void saludar() {
    string nombre;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Hola " << nombre << "!" << endl;
}

void calcularSuperficieYVolumen() {
    double radio;
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;

    double superficie = 4 * M_PI * radio * radio;
    double volumen = (4 * M_PI * radio * radio * radio) / 3;

    cout << "Superficie = " << superficie << endl;
    cout << "Volumen = " << volumen << endl;
}

void calcularPerimetroYSuperficie() {
    double base;
    cout << "Ingrese la base del rectángulo: ";
    cin >> base;

    double altura;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;

    double perimetro = (2 * base) + (2 * altura);
    double superficie = base * altura;

    cout << "Perímetro = " << perimetro << endl;
    cout << "Superficie = " << superficie << endl;
}
