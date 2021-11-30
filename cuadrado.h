/*
 * Proyecto Areas
 * Arturo Cristian Diaz Lopez 
 * A01709522
 * 12/11/2021
 */

// Creacion de clase Cuadrado y declaracion de sus funciones.

#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>
using namespace std;
#include "figura.h"

// Creacion de la clase Cuadrado

class Cuadrado: public Figura{
  public:
  Cuadrado(): ladoCua(0.0){};
  Cuadrado(double laCua): ladoCua(laCua){};
  double CalcAreaCua();
  double get_ladoCua();
  void setladoCua(double laCua);

  private:
  double ladoCua;
};

// Funciones de la clase Cuadrado.

double Cuadrado::CalcAreaCua(){
  return ladoCua * ladoCua;
}

double Cuadrado::get_ladoCua(){
  return ladoCua;
}

void Cuadrado::setladoCua(double laCua){
  ladoCua = laCua;
}

#endif
