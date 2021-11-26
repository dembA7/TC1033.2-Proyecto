/*
 * Proyecto Áreas
 * Arturo Cristián Díaz López 
 * A01709522
 * 12/11/2021
 */

// Creación de clases y declaración de funciones.

#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
using namespace std;
#include "figura.h"

// Creacion de la clase Circulo

class Circulo: public Figura{
  public:
  Circulo(): radioCirc(0.0){};
  double CalcAreaCirc();
  double get_radioCirc();
  void setradioCirc(double radCirc);

  private:
   double radioCirc;
};

// Funciones de la clase Circulo.

double Circulo::CalcAreaCirc(){
  return 3.14 * radioCirc * radioCirc;
}

double Circulo::get_radioCirc(){
  return radioCirc;
}

void Circulo::setradioCirc(double radCirc){
  radioCirc = radCirc;
}

#endif
