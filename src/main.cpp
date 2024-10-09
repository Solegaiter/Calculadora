#include "circulos.hpp"
#include "comprobador.hpp"
#include "figuras_planas.hpp"
#include "miscelanea.hpp"
#include "casos_switch.hpp"
#include <iostream>
#include <cmath>

int main() {
    int opcion;
    do {
        miscelanea misceobj;
        misceobj.menu();
        casos_switch casobj;
        casobj.caso_switch1();
    } while (opcion != 5);
    return 0;
}
