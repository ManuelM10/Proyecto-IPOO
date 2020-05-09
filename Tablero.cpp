#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Tablero.h"


using namespace std;

Tablero::Tablero()
{
}  

Tablero::~Tablero()
{

}

void Tablero::setTablero(string archivo)
{
  //arreglo dinamico para transformar el archivo.txt en un array
  fstream leer(archivo.c_str());//Lee el archivo.txt donde se encuentra el tablero
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<10;j++)
      leer>>tablero[i][j];//Transformacion del archivo.txt a una matriz
  }
}

void Tablero::mostrarTablero()
{
  //Transformacion de Tablero.txt a un array dinamico
  for(int i=0;i<10;i++)//Ciclo que muestra en pantalla el tablero
  {
    for(int j=0;j<10;j++)
      cout << tablero[i][j] << " ";
    cout << endl;
  }
}

void Tablero::guardarPartida(string nombre){
  
  /*ofstream outputfile;
  outputfile.open(nombre.c_str());
  if(outputfile.fail())
  cout<<"El archivo no abrio correctamente"<<endl;

  

   for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      outputfile<<tablero[i][j]<<" ";
    }
   }
    
  outputfile.close();*/
  
  
  ofstream archive;
  string name;
  name=+"Partida.txt";
  archive.open(name);
  if(archive.fail()){
    cout << "No se pudo abrir el archivo.";
    exit(1);
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      archive<<tablero[i][j]<<" ";
    }
    archive << endl;
  }
}

void Tablero::modificarElemento(int x, int y, int valor)
{
  tablero[x][y]= valor;
}