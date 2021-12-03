/*
 * Proyecto Areas
 * Arturo Cristian Diaz Lopez 
 * A01709522
 * 12/11/2021
 */

// Creacion de clases y declaracion de funciones.

#ifndef CIRCULO_H
#define CIRCULO_H

using namespace std;
#include "figura.h"

// Creacion de la clase Circulo

class Circulo: public Figura{
  public:
    Circulo(): radioCirc(0.0){};
    Circulo(int ladoCi, int vertCi) : Figura(ladoCi, vertCi),
    ladoCirc(ladoCi), verticeCirc(vertCi) {};
    
    double get_radioCirc();
    double get_verticeCirc();
    void setradioCirc(double radCirc);
    void set_verticeCirc(double );
    
    double CalcAreaCirc();

  private:
    double radioCirc;
    double ladoCirc;
    double verticeCirc;
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

double Circulo::get_verticeCirc() {
  return verticeCirc;
}

void Circulo::set_verticeCirc(double vertCi){
  verticeCirc = vertCi;
}

#endif
