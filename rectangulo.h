/*
 * Proyecto Areas
 * Arturo Cristian Diaz Lopez 
 * A01709522
 * 12/11/2021
 */

// Creacion de clase Rectangulo y declaracion de sus funciones.

#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "figura.h"

// Creacion de la clase Rectangulo

class Rectangulo: public Figura{
  public:
    Rectangulo(): largoRec(0.0), anchoRec(0.0){};
    Rectangulo(int ladoR, int vertR) : Figura(ladoR, vertR),
    ladoRec(ladoR), verticeRec(vertR) {};
  
    double get_largoRec();
    double get_anchoRec();
    double get_verticeRec();
    void setlargoRec(double laRec);
    void setanchoRec(double anRec);
    void set_verticeRec(double );
  
    double CalcAreaRec();

  private:
    double largoRec;
    double anchoRec;
    double ladoRec;
    double verticeRec;
};

// Funciones de la clase Rectangulo.

double Rectangulo::CalcAreaRec(){
  return largoRec*anchoRec;
}

double Rectangulo::get_largoRec(){
  return largoRec;
}

void Rectangulo::setlargoRec(double laRec){
  largoRec = laRec;
}
  
double Rectangulo::get_anchoRec(){
  return anchoRec;
}

void Rectangulo::setanchoRec(double anRec){
  anchoRec = anRec;
}

void Rectangulo::set_verticeRec(double vertR){
  verticeRec = vertR;
}

#endif
