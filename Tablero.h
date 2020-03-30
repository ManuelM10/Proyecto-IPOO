#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stack>//para utilizar pilas y colas
#include <stdlib.h>
#include <sstream>//stream string
#include "Ejercito.h"
#include "Fichas.h"

class Tablero 
{
  public:
  static const int SIZE=10;

  Tablero();
  ~Tablero();
  void leerArchivo();
  void imprimirTablero();
  void presentarEjercito(vector<double>avatar);
  void modificarElemento(int x, int y, int valor);
  int obtenerPunto(int x, int y);



  private:
  int tablero[SIZE][SIZE];
  
};

#endif