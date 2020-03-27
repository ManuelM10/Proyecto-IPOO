#include <iostream>
#include "Ejercito.h"
#include <string>
using namespace std;

Ejercito::Ejercito(){
}

Ejercito::~Ejercito(){
}




void Ejercito::Atacar(double Ejer1, double Ejer2){
if(Ejer1>Ejer2)
{Ejer2=Ejer2-0.5;}
if(Ejer1<Ejer2)
{Ejer1=Ejer1-0.5;}
if(Ejer1==Ejer2)
{}
  
}

