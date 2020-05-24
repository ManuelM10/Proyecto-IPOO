#include <iostream>
#include "Tirador.h"
using namespace std;

Tirador::Tirador()
{
  dead = false;
  vida = 3;
  poder = 1;
  mana= 0.3;
}
// este metodo le asigna la vida al tirador
float Tirador::getVida()
{
  return vida;
}
// este metodo le asigna el poder al luchador
float Tirador::getPoder()
{
  return poder;
}
// este metodo le asigna el mana al luchador
float Tirador::getMana()
{
  return mana;
}
