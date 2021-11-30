/*
 * Proyecto Areas
 * Arturo Cristian Diaz Lopez 
 * A01709522
 * 12/11/2021
 */

// Creacion de clase Rectangulo y declaracion de sus funciones.

#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
using namespace std;
#include "figura.h"

// Creacion de la clase Rectangulo

class Rectangulo: public Figura{
  public:
  Rectangulo(): largoRec(0.0), anchoRec(0.0){};
  double CalcAreaRec();
  double get_largoRec();
  double get_anchoRec();
  void setlargoRec(double laRec);
  void setanchoRec(double anRec);

  private:
  double largoRec, anchoRec;
};

// Funciones de la clase Rectangulo.

double Rectangulo::CalcAreaRec(){
  return largoRec*anchoRec;
}

double Rectangulo::get_largoRec(){
  return largoRec;
}

double Rectangulo::get_anchoRec(){
  return anchoRec;
}

void Rectangulo::setlargoRec(double laRec){
  largoRec = laRec;
}

void Rectangulo::setanchoRec(double anRec){
  anchoRec = anRec;
}

#endif
