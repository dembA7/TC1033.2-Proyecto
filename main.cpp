/*
  Proyecto Areas
  Arturo Cristian Diaz Lopez
  A01709522
  12/11/2021
 */

/**
 El objetivo de este programa es servir como apoyo a estudiantes del grado primaria, especificamente dentro del area de matematicas, para calcular el area de distintas figuras geometricas.
*/

#include <iostream>
#include "cuadrado.h"
#include "rectangulo.h"
#include "circulo.h"
#include "perimetro.h"
using namespace std;

int main() {
  
  // Para Cuadrado

  Cuadrado cuadrado1(4, 4);
  Perimetro perimCua;
  double areaCua;
  
  areaCua = cuadrado1.CalcAreaCua();
  
  cout << " El area del cuadrado es " << areaCua;
  cout << " si el lado vale " << cuadrado1.get_ladoCua() << endl;
  cout << " ademas, la figura tiene " << cuadrado1.get_numLados();
  cout << " lados, y " << cuadrado1.get_numVertices();
  cout << " vertices." << endl;
  
  cout << "Basado en estos valores, el perimetro de la figura es: " 
       << perimCua.CalcPeriCua(6) << endl;
  
  cout << " " << endl;

  // Para Rectangulo

  Rectangulo rectangulo2(4, 4);
  Perimetro perimRec;
  double areaRec;
  
  rectangulo2.setlargoRec(5);
  rectangulo2.setanchoRec(10);

  areaRec = rectangulo2.CalcAreaRec();
  
  cout  << "El area del rectangulo es " << areaRec;
  cout  << " si el largo vale " << rectangulo2.get_largoRec(); 
  cout  << " y el ancho vale " << rectangulo2.get_anchoRec() << endl;
  cout  << "Ademas, la figura tiene " << rectangulo2.get_numLados();
  cout  << " lados, y " << rectangulo2.get_numVertices();
  cout  << " vertices." << endl;

  cout << "Basado en estos valores, el perimetro de la figura es: "
       << perimRec.CalcPeriRec(5,10) << endl;
  
  cout << " " << endl;
  
  // Para Circulo

  Circulo circulo3(0, 0);
  Perimetro perimCirc;
  double areaCirc;

  circulo3.setradioCirc(6);

  areaCirc = circulo3.CalcAreaCirc();
  
  cout << "El area del círculo es " << areaCirc;
  cout << " si el radio vale " << circulo3.get_radioCirc() << endl;
  cout << "Esta figura tiene " << circulo3.get_numLados();
  cout << " lados, y " << circulo3.get_numVertices();
  cout << " vertices." << endl;
  
  cout << "Su perimetro es de: " 
       << perimCirc.CalcPeriCirc(6) << endl;

  return 0;
}
