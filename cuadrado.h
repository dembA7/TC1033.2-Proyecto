/*
 * Proyecto Areas
 * Arturo Cristian Diaz Lopez 
 * A01709522
 * 12/11/2021
 */

// Creacion de clase Cuadrado y declaracion de sus funciones.

#ifndef CUADRADO_H
#define CUADRADO_H

#include "figura.h"

// Creacion de la clase Cuadrado

class Cuadrado: public Figura{
  public:
    Cuadrado(): ladoCua(0.0){};
    Cuadrado(int ladoC, int vertC) : Figura(ladoC, vertC),
    ladoCua(ladoC), verticeCua(vertC) {};
  
    double get_ladoCua();
    double get_verticeCua();
    void set_LadoCua(double );
    void set_verticeCua(double );

    double CalcAreaCua();
  
  private:
    double ladoCua;
    double verticeCua;
};

// Funciones de la clase Cuadrado.

double Cuadrado::CalcAreaCua(){
  return ladoCua * ladoCua;
}

double Cuadrado::get_ladoCua(){
  return ladoCua;
}

void Cuadrado::set_LadoCua(double ladoC){
  ladoCua = ladoC;
}

double Cuadrado::get_verticeCua() {
  return verticeCua;
}

void Cuadrado::set_verticeCua(double vertC){
  verticeCua = vertC;
}

#endif
