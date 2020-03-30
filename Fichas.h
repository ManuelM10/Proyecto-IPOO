#ifndef FICHAS_H
#define FICHAS_H
#include "Ejercito.h"
#include <vector>
#include <stdlib.h>
#include <string>
using std::string;
using namespace std;

class Fichas
{
  public:
  Fichas();
  ~Fichas();
  double  luchadorP();
  double tiradorP();
  double magoP();

  double luchadorM();
  double tiradorM();
  double magoM();

  double luchadorV();
  double tiradorV();
  double magoV();

  int luchador(string tipoEjercito);
  int tirador(string tipoEjercito);
  int mago(string tipoEjercito);

  void destruirTorre();
  int torre();

  protected:

  int torreta = 5; //Indica si la torreta está protegida. 

  private:
  double p;
  double m;
  double v;


  
};

#endif