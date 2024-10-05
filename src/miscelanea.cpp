#include "miscelanea.hpp"

#include <print>

void miscelanea::menu() {
    std::println("Hola... Elije una opcion por favor.");
    std::println("1. Calculo del teorema de Pitagoras.");
    std::println("2. Calculo de diversas areas de figuras planas.");
    std::println("3. Calculo de la longitud de figuras circulares.");
    std::println("4. Calculo del area de figuras circulares.");
    std::println("5. Salir :(");
    std::println("Gran rediseño.");
    std::println("Selecciona una opcion:");
}

void miscelanea::figuras_planas_menu() {
    std::println("Elige la figura para calcular su area:");
    std::println("1. Cuadrado");
    std::println("2. Rectangulo");
    std::println("3. Triangulo");
    std::println("4. Rombo");
    std::println("5. Romboide");
    std::println("Selecciona una opcion:");
}