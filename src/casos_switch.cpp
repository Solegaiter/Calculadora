#include "circulos.hpp"

#include "figuras_planas.hpp"

#include "casos_switch.hpp"

#include <print>

#include <string>

#include <cmath>

#include <unistd.h>

#include "miscelanea.hpp"

int casos_switch::caso_switch1() {
    figuras_planas planaobj;
    miscelanea misceobj;
    circulos circuobj;

    std::cin >> opcion90;
    switch (opcion90) {
    case 1:
        planaobj.teorema_de_pitagoras();
        sleep(10);
        system("clear");
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
            sleep(10);
            system("clear");
            break;

        case 2:
            planaobj.area_rectangulo();
            sleep(10);
            system("clear");
            break;

        case 3:
            planaobj.area_triangulo();
            sleep(10);
            system("clear");
            break;

        case 4:
            planaobj.area_rombo();
            sleep(10);
            system("clear");
            break;

        case 5:
            planaobj.area_romboide();
            sleep(10);
            system("clear");
            break;

        default:
        std::println("Numero invalido, introduce uno del 1 al 5");
        return 1;
        break;
        }
    break;
    case 3:
        circuobj.longitud_circulo();
        sleep(10);
        system("clear");
        break;

    case 4:
        circuobj.area_circulo();
        sleep(10);
        system("clear");
        break;

    case 5:
        exit(0);

    default:
    std::println("Numero invalido, introduce uno del 1 al 5");
    return 1;
    }
    return 0;
}
