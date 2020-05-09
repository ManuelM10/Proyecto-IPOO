#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <fstream>
#include <sstream>
#include "Tablero.h"


#ifndef _MOVIMIENTOS_H_
#define _MOVIMIENTOS_H_

class Movimientos : public Tablero
{
  
  
  public:
  
  Movimientos();
  ~Movimientos();

    void mostrarPosicion();
    void moverEjercito();
    void atacarTorreta();
    int setTorreta();
    void batallaAMuerteConCuchillo();
      
  protected: 

  int torreta[2];
   
  private:
    int x1;
    int x2; 
    int y1; 
    int y2;
    int ejercito1[2];
    int ejercito2[2];
    int ejercito;
    int p;
    char value;
    

};
#endif