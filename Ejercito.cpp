#include<iostream>
#include "Ejercito.h"
using namespace std;

Ejercito::Ejercito()
{ 
  poder=0;
  mana=0;
  vida=0;

  Mago.resize(3);
  Luchador.resize(3);
  Tirador.resize(3);

}

Ejercito::~Ejercito()
{
  //destructor
}


float Ejercito::getPoderMago()
{
  poder=0.2;
  return poder; 
}
float Ejercito::getManaMago()
{
  mana=1;
  return mana;
}
float Ejercito::getVidaMago()
{
  vida=5;
  return vida;
}
float Ejercito::getPoderLuchador()
{
  poder=0.7;
  return poder;
}
float Ejercito::getManaLuchador()
{
  mana=0.6;
  return mana;
}
float Ejercito::getVidaLuchador()
{
  vida=4;
  return vida;
}
float Ejercito::getPoderTirador()
{
  poder=1;
  return poder;
}
float Ejercito::getManaTirador()
{
  mana=0.3;
  return mana;
}
float Ejercito::getVidaTirador()
{
  vida=3;
  return vida;
}

