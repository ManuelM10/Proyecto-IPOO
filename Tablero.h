#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stack>//para utilizar pilas y colas
#include <stdlib.h>
#include <sstream>//stream string

class Tablero 
{
  public:
  static const int SIZE=10;

  Tablero();
  ~Tablero();
  void leerArchivo();
  void imprimirTablero();
  //void modificarElementio(int x, int y, int valor);
  int obtenerPunto(int x, int y);



  private:
  int tablero[SIZE][SIZE];
  
};

#endif