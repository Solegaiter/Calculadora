#include "figuras_planas.hpp"

#include "comprobador.hpp"

#include <print>

#include <iostream>

#include <cmath>

#include <string>

double figuras_planas::teorema_de_pitagoras() {
    std::println("Ingresa la longitud del primer lado del triángulo.");
    std::cin >> comprobadores::lado1;
    std::println("Ingresa la longitud del segundo lado del triángulo.");
    std::cin >> comprobadores::lado2;
    comprobadores comprobaobj;
    bool elComprobador = comprobaobj.comprobador_rango_pitagoras(); //Esta variable recibe el resultado de la función que declaré anteriormente.
    if (elComprobador == false) {
        double lado_cuadrado1 = std::pow(comprobadores::lado1, 2);
        double lado_cuadrado2 = std::pow(comprobadores::lado2, 2);
        double hipotenusa_cuadrado = lado_cuadrado1 + lado_cuadrado2;
        /* Esta parte del codigo hace la operación del teorema de pitágoras
         si el resultado de la función es false, y si es true simplemente se va de la función */
        double hipotenusa = std::sqrt(hipotenusa_cuadrado);
        std::println("Para los lados de longitud {} y {}, la longitud de la hipotenusa es {}", comprobadores::lado1, comprobadores::lado2, hipotenusa);
        return 0;
    } else {
        return 0;
    }
}

double figuras_planas::area_cuadrado() {
    std::println("Ingresa el lado del cuadrado");
    std::cin >> comprobadores::lado_cuadrado; 
    comprobadores comprobaobj;
    bool el_Comprobador = comprobaobj.comprobador_cuadrado();
    if (el_Comprobador == false) {
        double resultado = comprobadores::lado_cuadrado * comprobadores::lado_cuadrado;
        std::println("El resultado es {}.", resultado);
        return 0;
    } else {
        return 0;
    }
}

double figuras_planas::area_rectangulo() {
    std::println("Ingresa la base del rectangulo.");
    std::cin >> comprobadores::base;
    std::println("Ingresa la altura del rectangulo.");
    std::cin >> comprobadores::altura;
    comprobadores comprobaobj;
    bool elComprobador = comprobaobj.comprobador_rectangulo_triangulo_romboide();
    if (elComprobador == false) {
        double resultado;
        resultado = comprobadores::base * comprobadores::altura;
        std::println("El resultado es {}.", resultado);
        return 0;
    } else {
        return 0;
    }
}

double figuras_planas::area_triangulo() {
    std::println("Ingresa la base del triangulo.");
    std::cin >> comprobadores::base;
    std::println("Ingresa la altura del triangulo.");
    std::cin >> comprobadores::altura;
    comprobadores comprobaobj;
    bool el_Comprobador = comprobaobj.comprobador_rectangulo_triangulo_romboide();
    if (el_Comprobador == false) {
        double resultado;
        resultado = comprobadores::base * comprobadores::altura;
        std::println("El resultado es {}.", resultado);
        return 0;
    } else {
        return 0;
    }
}

double figuras_planas::area_rombo() {
    std::println("Ingresa la diagonal mayor del rombo.");
    std::cin >> comprobadores::diagonal_mayor;
    std::println("Ingresa la diagonal menor del rombo.");
    std::cin >> comprobadores::diagonal_menor;
    comprobadores comprobaobj;
    bool el_Comprobador = comprobaobj.comprobador_rombo();
    if (el_Comprobador == false) {
        double resultado;
        resultado = comprobadores::diagonal_mayor * comprobadores::diagonal_menor;
        std::println("El resultado es {}.", resultado);
        return 0;
    } else {
        return 0;
    }
}

double figuras_planas::area_romboide() {
    std::println("Ingresa la base del romboide.");
    std::cin >> comprobadores::base;
    std::println("Ingresa la altura del romboide.");
    std::cin >> comprobadores::altura;
    comprobadores comprobaobj;
    bool el_Comprobador = comprobaobj.comprobador_rectangulo_triangulo_romboide();
    if (el_Comprobador == false) {
        double resultado;
        resultado = comprobadores::base * comprobadores::altura;
        std::println("El resultado es {}.", resultado);
        return 0;
    } else {
        return 0;
    }
}