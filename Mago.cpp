#include "Mago.h"
#include <iostream>
using namespace std;

Mago::Mago()
{
  dead = false;
  vida = 5;
  poder = 0.2;
  mana = 1;
}
// este metodo le asigna la vida al mago
float Mago:: getVida()
{
  return vida;
}
// este metodo le asigna el poder al mago
float Mago::getPoder()
{
  return poder;
}
// este metodo le asigna el mana al mago
float Mago::getMana()
{
  return mana;
}

