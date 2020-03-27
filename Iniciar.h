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

class Iniciar 
{
  public:
  
  
  Iniciar();
  ~Iniciar();

  void Menu();
  void EscojeOpcion();
  //void GuardarDatos(string rutaArchivo);
  void CargarPartida(string rutaArchico);
  void ImprimirDatos(string rutaArchivo);
  void GuardarDatos(string rutraArchivo);

  private:
  int a;
  vector<string>PartidaGuardada;

};


#endif