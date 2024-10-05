#include "comprobador.hpp"

#include "circulos.hpp"

#include <print>

#include <iostream>

#include <string>

double circulos::radio = 0;

double circulos::longitud_circulo() {
    std::println("Ingresa el radio del circulo.");
    std::cin >> circulos::radio;
    comprobadores comprobaobj;
    bool el_Comprobador = comprobaobj.comprobador_circulos();
    if (el_Comprobador == false) {
        double resultado = 2 * std::numbers::pi * circulos::radio;
        std::println("El resultado es {}.", resultado);
        return 0;
    } else {
        return 0;
    }
}

double circulos::area_circulo() {
    std::println("Ingresa el radio del circulo.");
    std::cin >> circulos::radio;
    comprobadores comprobaobj;
    bool el_Comprobador = comprobaobj.comprobador_circulos();
    if (el_Comprobador == false) {
        double resultado = std::numbers::pi * radio * radio;
        std::println("El resultado es {}.", resultado);
        return 0;
    } else {
        return 0;
    }
}