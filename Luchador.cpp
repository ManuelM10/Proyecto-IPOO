#include <iostream>
#include "Luchador.h"
using namespace std;

Luchador::Luchador(){
  dead = false;
  vida = 4;
  poder= 0.7;
  mana = 0.6;

}

//Este metodo le asigna la vida al luchador
float Luchador::getVida()
{
  return vida;
}

//Este metodo le asigna el poder al luchador
float Luchador::getPoder()
{
  return poder;
}

//Este metodo le asigna el mana al luchador
float Luchador::getMana()
{
  return mana;
}
