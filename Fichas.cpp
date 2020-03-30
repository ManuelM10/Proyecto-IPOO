#include <iostream>
#include <string>
#include "Ejercito.h"
using namespace std;
using std::string;
#include "Fichas.h"

Fichas::Fichas()
{ 
  //avatares.resize(0);
  p=0;
  v=0;
  m=0;
}

Fichas::~Fichas(){
}

double Fichas::luchadorP()
{
  double po=0.7;
  return po;
}

double Fichas::luchadorM()
{
  double ma=0.6;
  return ma;
}
double Fichas::luchadorV()
{
  double vi=4;
  return vi;
}

double Fichas::tiradorP()
{
  double po=1;
  return po;
}

double Fichas::tiradorM()
{
  double ma=0.3;
  return ma;
}
double Fichas::tiradorV()
{
  double vi=3;
  return vi;
}

double Fichas::magoP()
{
  double po=0.2;
  return po;
}

double Fichas::magoM()
{
  double ma=1;
  return ma;
}
double Fichas::magoV()
{
  double vi=5;
  return vi;
}


int Fichas::luchador(string tipoEjercito)
{
  p=luchadorP();
  m=luchadorM();
  v=luchadorV();
  if (tipoEjercito == "defensa")
  return  2;
  else 
  return 1;
  
}
int Fichas::mago(string tipoEjercito)
{
   p=magoP();
   m=magoM();
   v=magoV();
   if (tipoEjercito == "defensa")
   return 2;
   else 
   return 1;
   
}
int Fichas::tirador(string tipoEjercito)
{
   p=tiradorP();
   m=tiradorM();
   v=tiradorV();
   if (tipoEjercito == "defensa")
   return 2;
   else 
   return 1;
}

int Fichas::torre()
{
  return 5;
}

//La torreta, debera recibir cuatro golpes para poder ser destruida. 
void Fichas::destruirTorre(){
  /*int golpes = 0;
    for(int golpes=0; golpes<=4; golpes++){
    }
    cout << "La torreta ha sido destruida" <<endl*/
}




