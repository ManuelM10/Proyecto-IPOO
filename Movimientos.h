#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <random>
#include "Tablero.h"
#include "Personajes.h"


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
    void batalla();
    Personajes *ejercito_1[3];
    Personajes *ejercito_2[3];
    
    void organizarPersonajes();
    void totalPoder();
    void totalMana();

    void insertarAvatares1();
    void insertarAvatares2();

    void guardarPartida(string Ruta2);
    void cargarPartida(string Ruta2);

    void colocarBonus();
    void recargarVida();
   
    
      
  protected: 

  int torreta[2];
   
  private:
    //Personajes j1[3];
    //Personajes j2[3];
    float poderTotal1;
    float manaTotal1;
    float poderTotal2;
    float manaTotal2;
    float vida1;
    float vida2;    
    int x1;
    int x2; 
    int y1; 
    int y2;
    int ejercito1[2];
    int ejercito2[2];
    //int ejercito;
    int v1;
    int v2;
    int p;
    //int posicionx1;
    //int posicionx2;
    float c;
    int k;
    //bool vivo;
    char value;
    

        
};
#endif
