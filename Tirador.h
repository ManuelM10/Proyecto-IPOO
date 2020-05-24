#include "Personajes.h"
#include <vector>
#include <string>
using namespace std;
#ifndef _TIRADOR_H
#define _TIRADOR_H

class Tirador : public Personajes{
  public:
  Tirador();
  
  float getVida();
  float getPoder();
  float getMana();

};

#endif