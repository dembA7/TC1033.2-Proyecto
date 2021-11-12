/*
 * Proyecto Áreas
 * Arturo Cristián Díaz López 
 * A01709522
 * 12/11/2021
 */

// Creación de clases.

#include <iostream>
#include <string>
using namespace std;

class Cuadrado{
  public:
  Cuadrado(): ladoCua(0.0){};
  Cuadrado(double laCua): ladoCua(laCua){};
  double CalcAreaCua();
  void setladoCua(double laCua);

  private:
  double ladoCua;
};

class Rectangulo{
  public:
  Rectangulo(): largoRec(0.0), anchoRec(0.0){};
  double CalcAreaRec();
  void setlargoRec(double laRec);
  void setanchoRec(double anRec);

  private:
  double largoRec, anchoRec;
};

class Circulo{
  public:
  Circulo(): radioCirc(0.0){};
  double CalcAreaCirc();
  void setradioCirc(double radCirc);

  private:
   double radioCirc;
};
