#include "circulos.hpp"

#include "figuras_planas.hpp"

#include "casos_switch.hpp"

#include <print>

#include <string>

#include <cmath>

#include "miscelanea.hpp"

int casos_switch::caso_switch1() {
    figuras_planas planaobj;
    miscelanea misceobj;
    circulos circuobj;

    std::cin >> opcion90;
    switch (opcion90) {
    case 1:
        planaobj.teorema_de_pitagoras();
        break;

    case 2:
        system("clear");
        misceobj.figuras_planas_menu();
        int opcion2;
        std::println("Introduce una opcion");
        std::cin >> opcion2;
        switch (opcion2) {
        case 1:
            planaobj.area_cuadrado();
            break;

        case 2:
            planaobj.area_rectangulo();
            break;

        case 3:
            planaobj.area_triangulo();
            break;

        case 4:
            planaobj.area_rombo();
            break;

        case 5:
            planaobj.area_romboide();
            break;

        default:
        std::println("Numero invalido, introduce uno del 1 al 5");
        return 1;
        break;
        }
    break;
    case 3:
        circuobj.longitud_circulo();
        break;

    case 4:
        circuobj.area_circulo();
        break;

    case 5:
        break;

    default:
    std::println("Numero invalido, introduce uno del 1 al 5");
    return 1;
    }
    return 0;
}