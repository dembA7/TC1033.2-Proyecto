/*
 * Proyecto Áreas
 * Arturo Cristián Díaz López 
 * A01709522
 * 12/11/2021
 */

// Creación de clases y declaración de funciones.

#include <iostream>
using namespace std;

class Cuadrado{
  public:
  Cuadrado(): ladoCua(0.0){};
  Cuadrado(double laCua): ladoCua(laCua){};
  double CalcAreaCua();
  double get_ladoCua();
  void setladoCua(double laCua);

  private:
  double ladoCua;
};

// Funciones de la clase Cuadrado.

double Cuadrado::CalcAreaCua(){
  return ladoCua * ladoCua;
}

double Cuadrado::get_ladoCua(){
  return ladoCua;
}

void Cuadrado::setladoCua(double laCua){
  ladoCua = laCua;
}


class Rectangulo{
  public:
  Rectangulo(): largoRec(0.0), anchoRec(0.0){};
  double CalcAreaRec();
  double get_largoRec();
  double get_anchoRec();
  void setlargoRec(double laRec);
  void setanchoRec(double anRec);

  private:
  double largoRec, anchoRec;
};

// Funciones de la clase Rectangulo.

double Rectangulo::CalcAreaRec(){
  return largoRec*anchoRec;
}

double Rectangulo::get_largoRec(){
  return largoRec;
}

double Rectangulo::get_anchoRec(){
  return anchoRec;
}

void Rectangulo::setlargoRec(double laRec){
  largoRec = laRec;
}

void Rectangulo::setanchoRec(double anRec){
  anchoRec = anRec;
}


class Circulo{
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
