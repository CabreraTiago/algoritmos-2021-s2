#include <iostream>

using namespace std;

void verificarSigno() {
    float n;
    cout << "Ingrese un número: ";
    cin >> n;

    if (n > 0) {
        cout << "El número es mayor a 0";
    } else if (n < 0) {
        cout << "El número es menor a 0";
    } else {
        cout << "El número es 0";
    }
}

void imprimirMayor() {
    float m;
    cout << "Ingrese un número: ";
    cin >> m;

    float n;
    cout << "Ingrese otro número: ";
    cin >> n;

    float mayor;

    if (m > n) {
        mayor = m;
    } else {
        mayor = n;
    }

    cout << "El número mayor es " << mayor;
}

void esPar() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " es par";
    } else {
        cout << n << " es impar";
    }
}

void esDivisible() {
    int m;
    cout << "Ingrese un número: ";
    cin >> m;

    int n;
    cout << "Ingrese otro número: ";
    cin >> n;

    if (m % n == 0) {
        cout << m << " es divisible por " << n;
    } else {
        cout << m << " no es divisible por " << n;
    }
}

void seleccionarOperacionMatematica() {
    int m;
    cout << "Ingrese un número: ";
    cin >> m;

    int n;
    cout << "Ingrese otro número: ";
    cin >> n;

    char opcion;
    cout << "Ingresar operación matemática: ";
    cin >> opcion;

    switch (opcion) {
        case '+':
            cout << m << " + " << n << " = " << m + n;
            break;
        case '-':
            cout << m << " - " << n << " = " << m - n;
            break;
        case '*':
            cout << m << " * " << n << " = " << m * n;
            break;
        case '/':
            cout << m << " / " << n << " = " << m / n;
            break;
        default:
            cout << "La operación ingresada no es correcta";
    }
}

void menu() {
    cout << "Seleccione una opción:" << endl;
    cout << "Opción 1" << endl;
    cout << "Opción 2" << endl;
    cout << "Opción 3" << endl;
    cout << "Opción 4" << endl;

    char opcion;
    cout << " -> ";
    cin >> opcion;

    string cartel;

    switch (opcion) {
        case '1':
            cartel = "Opción elegida: 1";
            break;
        case '2':
            cartel = "Opción elegida: 2";
            break;
        case '3':
            cartel = "Opción elegida: 3";
            break;
        case '4':
            cartel = "Opción elegida: 4";
            break;
        default:
            cout << "La opción ingresada no es correcta";
    }

    cout << cartel;
}

void convertirPeriodo() {
    int segundos;
    cout << "Ingrese el periodo en segundos: ";
    cin >> segundos;

    int dias = segundos / (24 * 60 * 60);
    segundos = segundos % (24 * 60 * 60);
    int horas = segundos / (60 * 60);
    segundos = segundos % (60 * 60);
    int minutos = segundos / 60;
    segundos = segundos % 60;

    cout << "Días: " << dias << " - Horas: " << horas << " - Minutos: " << minutos << " - Segundos: " << segundos;
}
