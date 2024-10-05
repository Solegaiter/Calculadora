#include "comprobador.hpp"
#include <print>
#include "circulos.hpp"

double comprobadores::lado1 = 0;
double comprobadores::lado2 = 0;
double comprobadores::base = 0;
double comprobadores::altura = 0;
double comprobadores::lado_cuadrado = 0;
double comprobadores::diagonal_mayor = 0;
double comprobadores::diagonal_menor = 0;

bool comprobadores::comprobador_rango_pitagoras() {
    if (comprobadores::lado1 > 1000000 && comprobadores::lado2 > 1000000) {
        std::println("Numero demasiado grande.");
        return true;
    } else if (comprobadores::lado1 < -1000000 && comprobadores::lado2 < -1000000) {
        std::println("Número demasiado pequeño.");
        return true;
    } else {
        return false;
    }
}

bool comprobadores::comprobador_cuadrado() {
    if (lado_cuadrado > 1000000) {
        std::println("Numero demasiado grande.");
        return true;
    } else if (lado_cuadrado <= 0) {
        std::println("El lado del cuadrado no puede ser 0 o menos de 0");
        return true;
    } else {
        return false;
    }
}

bool comprobadores::comprobador_rectangulo_triangulo_romboide() {
    if (comprobadores::base <= 0 || comprobadores::altura <= 0) {
        std::println("Ni la base ni la altura puede ser 0");
        return true;
    } else {
        return false;
    }
}

bool comprobadores::comprobador_rombo() {
    if (comprobadores::diagonal_mayor <= 0 || comprobadores::diagonal_menor <= 0) {
        std::println("Ni la diagonal mayor ni la diagonal menor puede ser o 0 o menos de 0 ");
        return true;
    } else {
        return false;
    }
}

bool comprobadores::comprobador_circulos() {
    if (circulos::radio <= 0) {
        std::println("El circulo pero al reves, pero ahora en serio, el radio no puede ser 0 o menos de 0");
        return true;
    } else {
        return false;
    }
}

/* Esta parte del codigo genera un comprobador que me permite saber si has introducido números
 demasiado grandes o demasiado pequeños y otras comprobaciones*/
