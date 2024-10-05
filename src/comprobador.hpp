#define COMPROBADOR_HPP
class comprobadores {
  public:
   static double lado1;
   static double lado2;
   static double lado_cuadrado;
   static double base;
   static double altura;
   static double diagonal_mayor;
   static double diagonal_menor;
  
    bool comprobador_rango_pitagoras();
    bool comprobador_cuadrado();
    bool comprobador_rectangulo_triangulo_romboide();
    bool comprobador_rombo();
    bool comprobador_circulos();
  
};
