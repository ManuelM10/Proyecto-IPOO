#include "Movimientos.h"
#include <vector>
#ifndef EJERCITO_H
#define EJERCITO_H

class Ejercito : public Movimientos
{
  public:
  Ejercito();
  ~Ejercito();

  //aqui creamos un personaje con caracteristicas de mago.
  float getPoderMago();
  float getManaMago();
  float getVidaMago();

  //aqui creamos un personaje con caracteristicas de lucgador.
  float getPoderLuchador();
  float getManaLuchador();
  float getVidaLuchador();

  //aqui creamos un personaje con caracteristicas de tirador.
  float getPoderTirador();
  float getManaTirador();
  float getVidaTirador();
  
  //aqui se suma las caracteristicas de cada personaje para formar un ejercito.
  float getPoder();
  float getMana();
  float getVida();

 
 private:
  float poder;
  float mana;
  float vida; 
  
  vector <float> Mago;
  vector <float> Luchador;
  vector <float> Tirador;
};

#endif
