#include "Personajes.h"
#include <vector>
#include <string>
using namespace std;
#ifndef _LUCHADOR_H
#define _LUCHADOR_H

class Luchador : public Personajes
{
  public:
  Luchador(/*string, float,float,float*/);
  
  float getVida();
  float getPoder();
  float getMana();
  

};

#endif