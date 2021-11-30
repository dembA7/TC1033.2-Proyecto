/*
  Proyecto Áreas
  Arturo Cristián Díaz López
  A01709522
  12/11/2021
 */

/**
 El objetivo de este programa es servir como apoyo a estudiantes del grado primaria, específicamente dentro del área de matemáticas, para calcular el área de distintas figuras geométricas.
*/

#include <iostream>
#include "cuadrado.h"
#include "rectangulo.h"
#include "circulo.h"
using namespace std;

int main() {
  
  // Para Cuadrado

  Cuadrado cuadrado1;
  double areaCua;
  
  cuadrado1.setladoCua(5);
  cuadrado1.setnumLados(4);
  cuadrado1.setnumVertices(4);
  areaCua = cuadrado1.CalcAreaCua();
  cout << " El area del cuadrado es " << areaCua;
  cout << " si el lado vale " << cuadrado1.get_ladoCua() << endl;
  cout << " ademas, la figura tiene " << cuadrado1.get_numLados();
  cout << " lados, y " << cuadrado1.get_numVertices();
  cout << " vertices." << endl;
  
  cout << " " << endl;

  // Para Rectangulo

  Rectangulo rectangulo2;
  double areaRec;

  rectangulo2.setlargoRec(10);
  rectangulo2.setanchoRec(5);
  rectangulo2.setnumLados(4);
  rectangulo2.setnumVertices(4);
  areaRec = rectangulo2.CalcAreaRec();
  cout  << " El area del rectangulo es " << areaRec;
  cout  << " si el largo vale " << rectangulo2.get_largoRec() << endl; 
  cout  << " y el ancho vale " << rectangulo2.get_anchoRec();
  cout  << " ademas, la figura tiene " << cuadrado1.get_numLados();
  cout  << " lados, y " << cuadrado1.get_numVertices();
  cout  << " vertices." << endl;

  cout << " " << endl;
  
  // Para Circulo

  Circulo circulo3;
  double areaCirc;

  circulo3.setradioCirc(6);
  circulo3.setnumLados(0);
  circulo3.setnumVertices(0);
  areaCirc = circulo3.CalcAreaCirc();
  cout << " El area del círculo es " << areaCirc << " ";
  cout << " si el radio vale " << circulo3.get_radioCirc() << endl;
  cout << " ademas, la figura tiene " << cuadrado1.get_numLados();
  cout << " lados, y " << cuadrado1.get_numVertices();
  cout << " vertices." << endl;
  
  return 0;
} 
