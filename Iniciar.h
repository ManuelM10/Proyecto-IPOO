#ifndef INICIAR_H
#define INICIAR_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <sstream>
using std::string;
using namespace std;
#include "Tablero.h"
#include "Fichas.h"

class Iniciar 
{
  public:
  
  
  Iniciar();
  ~Iniciar();

  void Menu();
  void Menu1();
  void EscojeOpcion();
  void CargarPartida(string rutraArchivo);
  void ImprimirDatos(string rutaArchivo);
  void GuardarDatos(string rutaArchivo);
  

  private:
  int a;
  int c;
  vector<int>PartidaGuardada;

};


#endif 