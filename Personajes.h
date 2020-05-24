
#include <vector>
#include <string>
using namespace std;
#ifndef PERSONAJES_H
#define PERSONAJES_H

class Personajes {
  public:
  Personajes();
  

  
  virtual float getVida();
  virtual float getPoder();
  virtual float getMana();
  bool dead;

  string tipo;

  float vida;
  float poder;
  float mana;
     
  private: 
  
};

#endif
