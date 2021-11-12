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
  double CalcAreaCua();
  void setladoCua(double laCua);

  private:
  double ladoCua;
};

class Rectangulo{
  public:
  double CalcAreaRec();
  void setlargoRec(double laRec);
  void setanchoRec(double anRec);

  private:
  double largoRec, anchoRec;
};

class Circulo{
  public:
  double CalcAreaCirc();
  void setradioCirc(double radCirc);

  private:
   double radioCirc;
};
