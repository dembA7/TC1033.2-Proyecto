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
#include "areas.h"
#include <string>
using namespace std;

// Para Cuadrado

double Cuadrado::CalcAreaCua(){
  return ladoCua * ladoCua;
}

void Cuadrado::setladoCua(double laCua){
  ladoCua = laCua;
}


// Para Rectangulo

double Rectangulo::CalcAreaRec(){
  return largoRec*anchoRec;
}

void Rectangulo::setlargoRec(double laRec){
  largoRec = laRec;
}

void Rectangulo::setanchoRec(double anRec){
  anchoRec = anRec;
}


// Para Circulo

double Circulo::CalcAreaCirc(){
  return 3.14 * radioCirc * radioCirc;
}

void Circulo::setradioCirc(double radCirc){
  radioCirc = radCirc;
}



// Main


int main() {
  
  // Para Cuadrado

  Cuadrado cuadrado1;
  double areaCua;
  
  cuadrado1.setladoCua(5);
  areaCua = cuadrado1.CalcAreaCua();
  cout << "El área del cuadrado es: " << areaCua << endl;
  return 0;

  // Para Rectangulo

  Rectangulo rectangulo2;
  double areaRec;

  rectangulo2.setlargoRec(10);
  rectangulo2.setanchoRec(5);
  areaRec = rectangulo2.CalcAreaRec();
  cout << "El área del rectángulo es: " << areaRec << endl;
  return 0;

  // Para Circulo

  Circulo circulo3;
  double areaCirc;

  circulo3.setradioCirc(6);
  areaCirc =circulo3.CalcAreaCirc();
  cout << "El área del círculo es: " << areaCirc << endl;
  return 0;
} 