#ifndef MAGO_H
#define MAGO_H
#include <string>
#include <vector>
#include "Personajes.h"
using namespace std;

class Mago : public Personajes
{
  public:
   Mago();
   
   
   float getVida();
   float getPoder();
   float getMana();

   private:   

};

#endif