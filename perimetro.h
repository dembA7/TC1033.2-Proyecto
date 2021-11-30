/*
  Proyecto Areas
  Arturo Cristián Díaz López
  A01709522
  12/11/2021
 */

// Creacion de clase Perimetro y declaracion de funciones.

#include <iostream>
using namespace std;

class Perimetro{
  public:
  Perimetro():lado_Cua(0.0), largo_Rec(0.0), ancho_Rec(0.0), radio_Circ(0.0){};
  float CalcPeriCua(double );
  float CalcPeriRec(double, double );
  float CalcPeriCirc(double );
  void setlado_Cua(double la_Cua);
  void setlargo_Rec(double lar_Rec);
  void setancho_Rec(double an_Rec);
  void setradio_Circ(double rad_Circ);

  private:
  double lado_Cua;
  double largo_Rec; 
  double ancho_Rec; 
  double radio_Circ;
  float periCua;
  float periRec;
  float periCirc;

};

// Funciones de la clase Perimetro.

float CalcPeriCua(double lado_Cua){
  return 4*lado_Cua;
}

float CalcPeriRec(double largo_Rec, double ancho_Rec){
  return 2*largo_Rec + 2*ancho_Rec;
}

float CalcPeriCirc(double radio_Circ){
  return 2*3.14*radio_Circ;
}

void Perimetro::setlado_Cua(double la_Cua){
  lado_Cua = la_Cua;
}

void Perimetro::setlargo_Rec(double lar_Rec){
  largo_Rec = lar_Rec;
}

void Perimetro::setancho_Rec(double an_Rec){
  ancho_Rec = an_Rec;
}

void Perimetro::setradio_Circ(double rad_Circ){
  radio_Circ = rad_Circ;
}