/*ADVERTENCIA, ESTE CODIGO ESTA OBSOLETO, NO USAR, BAJO NINGUN CONCEPTO*/










#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float pi = 3.1416;

void teorema_de_pitagoras() {
    printf("Ingresa la longitud del primer lado del triangulo:\n");
    float lado1;
    scanf("%f", &lado1);
    
    printf("Ingresa la longitud del segundo lado del triangulo:\n");
    float lado2;
    scanf("%f", &lado2);
    
    if (fabs(lado1) > 1000000 || fabs(lado2) > 1000000) {
        printf("Invalido.\n");
        exit(1);
    } 
    
    if (lado1 < 0 || lado2 < 0) {
        printf("Invalido\n");
        exit(1);
    }
    
    float lado_cuadrado1 = pow(lado1, 2);
    float lado_cuadrado2 = pow(lado2, 2);
    
    float hipotenusa_cuadrado = lado_cuadrado1 + lado_cuadrado2;
    
    float hipotenusa = sqrt(hipotenusa_cuadrado);
    
    printf("Para los lados de longitud %.2f y %.2f, la longitud de la hipotenusa es %.2f.\n", lado1, lado2, hipotenusa);
}

float area_cuadrado() {
    printf("Ingrese el lado del cuadrado:\n");
    float lado;
    scanf("%f", &lado);
    
    if (lado <= 0) {
        printf("Invalido\n");
        exit(1);
    }
    
    if (fabs(lado) > 1000000) {
        printf("Invalido\n");
        exit(1);
    }

    return lado * lado;
}

float area_rectangulo() {
    printf("Ingrese la base del rectangulo:\n");
    float base;
    scanf("%f", &base);
    printf("Ingrese la altura del rectangulo:\n");
    float altura;
    scanf("%f", &altura);
    
    if (base <= 0 || altura <= 0) {
        printf("Invalido\n");
        exit(1);
    }
    
    if (fabs(base) > 1000000 || fabs(altura) > 1000000) {
        printf("Invalido\n");
        exit(1);
    }

    return base * altura;
}

float area_triangulo() {
    printf("Ingrese la base del triangulo:\n");
    float base;
    scanf("%f", &base);
    printf("Ingrese la altura del triangulo:\n");
    float altura;
    scanf("%f", &altura);
    
    if (base <= 0 || altura <= 0) {
        printf("Invalido.\n");
        exit(1);
    }

    if (fabs(base) > 1000000 || fabs(altura) > 1000000) {
        printf("Invalido.\n");
        exit(1);
    }

    return (base * altura) / 2;
}

float area_rombo() {
    printf("Ingrese la diagonal mayor del rombo:\n");
    float diagonal_mayor;
    scanf("%f", &diagonal_mayor);
    printf("Ingrese la diagonal menor del rombo:\n");
    float diagonal_menor;
    scanf("%f", &diagonal_menor);
    
    if (diagonal_mayor <= 0 || diagonal_menor <= 0) {
        printf("Invalido.\n");
        exit(1);
    }
    
    if (fabs(diagonal_mayor) > 1000000 || fabs(diagonal_menor) > 1000000) {
        printf("Invalido.\n");
        exit(1);
    }

    return (diagonal_mayor * diagonal_menor) / 2;
}

float area_romboide() {
    printf("Ingrese la base del romboide:\n");
    float base;
    scanf("%f", &base);
    printf("Ingrese la altura del romboide:\n");
    float altura;
    scanf("%f", &altura);
    
    if (base <= 0 || altura <= 0) {
        printf("Invalido.\n");
        exit(1);
    }
    
    if (fabs(base) > 1000000 || fabs(altura) > 1000000) {
        printf("Invalido.\n");
        exit(1);
    }

    return base * altura;
}

float longitud_circulo() {
    printf("Ingrese el radio del circulo:\n");
    float radio;
    scanf("%f", &radio);
    if (radio <= 0) {
        printf("El circulo pero al reves.\n");
        exit(1);
    }
    
    if (fabs(radio) > 1000000) {
        printf("Morira como un heroe, como el circulo mas grande del mundo.\n");
        exit(1);
    }
    
    return 2 * pi * radio;
}

float area_circulo() {
    printf("Ingrese el radio del circulo:\n");
    float radio;
    scanf("%f", &radio);
    if (radio <= 0) {
        printf("El circulo pero al reves.\n");
        exit(1);
    }
    
    if (fabs(radio) > 1000000) {
        printf("Morira como un heroe, como el circulo mas grande del mundo.\n");
        exit(1);
    }
    
    return pi * radio * radio;
}

void menu() {
    printf("Hola... Elije una opcion por favor.\n");
    printf("1. Calculo del teorema de Pitagoras.\n");
    printf("2. Calculo de diversas areas de figuras planas.\n");
    printf("3. Calculo de la longitud de figuras circulares.\n");
    printf("4. Calculo del area de figuras circulares.\n");
    printf("5. Salir :(\n");
    printf("Gran rediseño.\n");
    printf("Selecciona una opcion:\n");
}

void submenu_figuras_planas() {
    printf("Elige la figura para calcular su area:\n");
    printf("1. Cuadrado\n");
    printf("2. Rectangulo\n");
    printf("3. Triangulo\n");
    printf("4. Rombo\n");
    printf("5. Romboide\n");
    printf("Selecciona una opcion:\n");
}

int main() {
    int opcion;

    do {
        menu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                teorema_de_pitagoras();
                printf("Presiona cualquier tecla para continuar...\n");
                getchar();
                getchar();
                break;
            case 2:
                submenu_figuras_planas();
                int opcion_figura;
                scanf("%d", &opcion_figura);
                switch (opcion_figura) {
                    case 1:
                        printf("El area del cuadrado es: %.2f\n", area_cuadrado());
                        break;
                    case 2:
                        printf("El area del rectangulo es: %.2f\n", area_rectangulo());
                        break;
                    case 3:
                        printf("El area del triangulo es: %.2f\n", area_triangulo());
                        break;
                    case 4:
                        printf("El area del rombo es: %.2f\n", area_rombo());
                        break;
                    case 5:
                        printf("El area del romboide es: %.2f\n", area_romboide());
                        break;
                    default:
                        printf("Invalido.\n");
                        break;
                }
                printf("Presiona cualquier tecla para continuar...\n");
                getchar();
                getchar();
                break;
            case 3:
                printf("La longitud del circulo es: %.2f\n", longitud_circulo());
                printf("Presiona cualquier tecla para continuar...\n");
                getchar();
                getchar();
                break;
            case 4:
                printf("El area del circulo es: %.2f\n", area_circulo());
                printf("Presiona cualquier tecla para continuar...\n");
                getchar();
                getchar();
                break;
            case 5:
                printf("Ojala os haya gustado, me he esforzado en hacer lo mejor posible el programa\n");
                break;
            default:
                printf("Invalido\n");
                printf("Presiona cualquier tecla para continuar...\n");
                getchar();
                getchar();
                break;
        }
    } while (opcion != 5);

    return 0;
}
