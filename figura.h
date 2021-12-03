/*
 * Proyecto Areas
 * Arturo Cristian Diaz Lopez 
 * A01709522
 * 12/11/2021
 */

// Creacion de clase padre Figura y declaracion de funciones.

#ifndef FIGURA_H
#define FIGURA_H

#include "perimetro.h"

// Creacion de la clase Figura.

class Figura{
  public:
    Figura(): numLados(0), numVertices(0){};
    Figura(int lados, int vertices) : numLados(lados), numVertices(vertices) {};
  
    int get_numLados();
    int get_numVertices();
    Perimetro get_perimetro();
  
    void set_numLados(int );
    void set_numVertices(int );
    void set_perimetro(Perimetro );

    void agrega_perimetro(Perimetro );
    Perimetro perimetro_fig;
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

void Figura::set_numLados(int numLad){
  numLados = numLad;
}

void Figura::set_numVertices(int numVert){
  numVertices = numVert;
}

void Figura::agrega_perimetro(Perimetro p1){
    perimetro_fig = p1;
}

Perimetro Figura::get_perimetro(){
  return perimetro_fig;
}

void Figura::set_perimetro(Perimetro per){
  perimetro_fig = per;
}

#endif
