/*
  Proyecto Areas
  Arturo Cristián Díaz López
  A01709522
  12/11/2021
 */

// Creacion de clase Perimetro y declaracion de funciones.

#ifndef PERIMETRO_H
#define PERIMETRO_H

// Creacion de la clase Perimetro.

class Perimetro{
  public:
    Perimetro():lado_Cua(0.0), largo_Rec(0.0), ancho_Rec(0.0), radio_Circ(0.0){};
    Perimetro(double ladoC, double largoR, double anchoR, double radioC): lado_Cua(ladoC),
                                                                          largo_Rec(largoR),
                                                                          ancho_Rec(anchoR),
                                                                          radio_Circ(radioC){};
    double get_ladoCua();
    double get_largoRec();
    double get_anchoRec();
    double get_radioCirc();    
  
    void setlado_Cua(double la_Cua);
    void setlargo_Rec(double lar_Rec);
    void setancho_Rec(double an_Rec);
    void setradio_Circ(double rad_Circ);
  
    double CalcPeriCua(double );
    double CalcPeriRec(double, double );
    double CalcPeriCirc(double );

  private:
    double lado_Cua;
    double largo_Rec; 
    double ancho_Rec; 
    double radio_Circ;
    float periCua;
    float periRec;
    float periCirc;
};

// Funciones de la clase Perimetro.

double Perimetro::get_ladoCua(){
  return lado_Cua;
}

double Perimetro::get_largoRec(){
  return largo_Rec;
};

double Perimetro::get_anchoRec() {
  return ancho_Rec;;
}

double Perimetro::get_radioCirc() {
  return radio_Circ;
}

double Perimetro::CalcPeriCua(double lado_Cua){
  return 4 * lado_Cua;
}

double Perimetro::CalcPeriRec(double largo_Rec, double ancho_Rec){
  return 2*largo_Rec + 2*ancho_Rec;
}

double Perimetro::CalcPeriCirc(double radio_Circ){
  return 2*3.14*radio_Circ;
}

void Perimetro::setlado_Cua(double la_Cua){
  lado_Cua = la_Cua;
}

void Perimetro::setlargo_Rec(double lar_Rec){
  largo_Rec = lar_Rec;
}

void Perimetro::setancho_Rec(double an_Rec){
  ancho_Rec = an_Rec;
}

void Perimetro::setradio_Circ(double rad_Circ){
  radio_Circ = rad_Circ;
}

#endif
