#include <iostream>

using namespace std;

/*
 * Imprimir por pantalla una lista de 20 números consecutivos, los cuales comienzan con un número ingresado por teclado.
 */
void imprimirLista() {
    int n;
    cout << "Ingresa un número: ";
    cin >> n;

    for (int i = n; i < n + 20; i++) {
        cout << i << " - ";
    }
}

/*
 * Leer un número N y calcular su factorial.
 */
void calcularFactorial() {
    int factorial = 1;

    int n;
    cout << "Ingresa un número: ";
    cin >> n;

    if (n < 0) {
        factorial = 0;
    } else if (n == 0) {
        factorial = 1;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
    }

    cout << "Factorial de " << n << ": " << factorial;
}

/*
 * Leer una serie de números reales, terminando la serie con un cero. Imprimir los
 * datos a medida que se los ingresa junto con la suma parcial de los mismos.
 */
void imprimirSumaParcial() {
    int n;
    int suma = 0;

    do {
        cout << "Ingresa un número: ";
        cin >> n;
        cout << "Número ingresado: " << n << endl;

        suma += n;
        cout << "Suma parcial: " << suma << endl;
    } while (n != 0);
}

/*
 * Dada una serie de números reales, determinar el valor máximo, el mínimo y las
 * posiciones en que estos se encontraban en la serie. El programa deberá ir
 * preguntando si hay más números para ingresar.
 */
void determinarMaximoYMinimo() {
    double n;
    double maximo;
    double minimo;

    int posicionActual = 0;
    int posicionMaximo;
    int posicionMinimo;

    char respuesta;
    bool hayNumeros;

    do {
        cout << "Ingresa un número: ";
        cin >> n;

        if (posicionActual == 0) {
            minimo = n;
            maximo = n;
        }

        if (n > maximo) {
            maximo = n;
            posicionMaximo = posicionActual;
        }

        if (n < minimo) {
            minimo = n;
            posicionMinimo = posicionActual;
        }

        cout << "¿Hay más números para ingresar? ";
        cin >> respuesta;

        if (respuesta == 's') {
            hayNumeros = true;
        } else {
            hayNumeros = false;
        }

        posicionActual++;

    } while (hayNumeros);

    cout << "Máximo: " << maximo << " - Posición: " << posicionMaximo << endl;
    cout << "Mínimo: " << minimo << " - Posición: " << posicionMinimo << endl;
}

/*
 * Leer un valor N y luego N números enteros. Se pide imprimir el mayor y el menor
 * y las veces que aparece cada uno.
 */
void imprimirMaximoYMinimo() {
    int c;
    cout << "Ingresa la cantidad de números a leer: ";
    cin >> c;

    if (c == 0) {
        cout << "No hay números para leer";
        return;
    }

    int maximo, minimo, cantidadAparicionesMaximo, cantidadAparicionesMinimo;

    for (int i = 0; i < c; i++) {
        int n;
        cout << "Ingresa un número: ";
        cin >> n;

        if (i == 0) {
            minimo = n;
            maximo = n;
            cantidadAparicionesMaximo = 1;
            cantidadAparicionesMinimo = 1;
        }

        if (n == maximo && i != 0) {
            cantidadAparicionesMaximo++;
        }

        if (n == minimo && i != 0) {
            cantidadAparicionesMinimo++;
        }

        if (n > maximo) {
            maximo = n;
            cantidadAparicionesMaximo = 1;
        }

        if (n < minimo) {
            minimo = n;
            cantidadAparicionesMinimo = 1;
        }
    }

    cout << "Máximo: " << maximo << " - Apariciones: " << cantidadAparicionesMaximo << endl;
    cout << "Mínimo: " << minimo << " - Apariciones: " << cantidadAparicionesMinimo << endl;
}

/*
 * Leer A y B, enteros. Calcular C = A x B mediante sumas sucesivas e imprimir el resultado.
 */
void productoPorSumasSucesivas() {
    int a, b;
    cout << "Ingresa un número: ";
    cin >> a;

    cout << "Ingresa otro número: ";
    cin >> b;

    int producto = 0;

    for (int i = 0; i < b; i++) {
        producto += a;
    }

    cout << a << " X " << b << " = " << producto;
}

/*
 * Dada una serie de números enteros terminada en cero, imprimir los tres mayores.
 */
void imprimirMaximos() {
    int n;
    int maximo1, maximo2, maximo3;

    int posicionActual = 0;

    do {
        cout << "Ingresa un número: ";
        cin >> n;

        if (posicionActual == 0) {
            maximo1 = n;
            maximo2 = n;
            maximo3 = n;
        } else {
            if (n > maximo1) {
                maximo3 = maximo2;
                maximo2 = maximo1;
                maximo1 = n;
            } else if (n > maximo2) {
                maximo3 = maximo2;
                maximo2 = n;
            } else if (n > maximo3) {
                maximo3 = n;
            }
        }

        posicionActual++;
    } while (n != 0);

    cout << "Top 1: " << maximo1 << endl;
    cout << "Top 2: " << maximo2 << endl;
    cout << "Top 3: " << maximo3 << endl;
}

/*
 * Dada una serie de nombres con sus salarios respectivos, determinar el salario máximo, el mínimo y la persona que percibe cada uno.
 */
void imprimirSalarioMaximoYMinimo() {
    int c;
    cout << "Ingresa la cantidad de personas: ";
    cin >> c;

    if (c == 0) {
        cout << "No hay personas";
        return;
    }
    string persona, personaSalarioMaximo, personaSalarioMinimo;
    double salario, salarioMaximo, salarioMinimo;

    for (int i = 0; i < c; i++) {
        cout << "Ingresa el nombre de la persona: ";
        cin >> persona;

        cout << "Ingresa su salario: ";
        cin >> salario;

        if (i == 0) {
            personaSalarioMaximo = persona;
            personaSalarioMinimo = persona;
            salarioMaximo = salario;
            salarioMinimo = salario;
        }

        if (salario > salarioMaximo) {
            salarioMaximo = salario;
            personaSalarioMaximo = persona;
        }

        if (salario < salarioMinimo) {
            salarioMinimo = salario;
            personaSalarioMinimo = persona;
        }
    }

    cout << "Salario máximo: " << salarioMaximo << " - Persona: " << personaSalarioMaximo << endl;
    cout << "Salario mínimo: " << salarioMinimo << " - Persona: " << personaSalarioMinimo << endl;
}
