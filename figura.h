/*
 * Proyecto Áreas
 * Arturo Cristián Díaz López 
 * A01709522
 * 12/11/2021
 */

// Creación de clase padre Figura y declaración de funciones.

#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
using namespace std;

// Creacion de la clase Figura.


class Figura{
  public:
  Figura(): numLados(0), numVertices(0){};
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

#endif
