/*
 * Proyecto Areas
 * Arturo Cristian Diaz Lopez 
 * A01709522
 * 12/11/2021
 */

// Creacion de clase padre Figura y declaracion de funciones.

#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
#include "perimetro.h"
using namespace std;

// Creacion de la clase Figura.


class Figura{
  public:
  Figura(): numLados(0), numVertices(0){};
  Perimetro PCua;
  Perimetro PRec;
  Perimetro PCirc;
  int get_numLados();
  int get_numVertices();
  void setnumLados(int numLad);
  void setnumVertices(int numVert);

  private: 
  int numLados;
  int numVertices;
};

// Funciones de la clase Figura.

int Figura::get_numLados(){
  return numLados;
}

int Figura::get_numVertices(){
  return numVertices;
}

void Figura::setnumLados(int numLad){
  numLados = numLad;
}

void Figura::setnumVertices(int numVert){
  numVertices = numVert;
}


int perimetro(){
  
  // Para Cuadrado

  Perimetro PCua;
  float periCua;
  periCua = PCua.CalcPeriCua(5);

  // Para Rectangulo

  Perimetro PRec;
  float periRec;
  periRec = PRec.CalcPeriRec(10, 4);

  // Para Circulo

  Perimetro PCirc;
  float periCirc;
  periCirc = PCirc.CalcPeriCirc(6);

return 0;
}


#endif
