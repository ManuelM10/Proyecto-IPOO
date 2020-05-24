#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

#ifndef _TABLERO_H_
#define _TABLERO_H_

#include <string>

using namespace std;

class Tablero{
  public:
    Tablero();
    ~Tablero();
    
    void setTablero(string archivo);
    void mostrarTablero();//muestra el tablero y posicion de las fichas
    void guardarTablero();//guarda la ultima partida jugada
    int tablero[10][10];//Array que representa el tablero
    void cargarPartida(string rutaArchivo);
    void modificarElemento(int x, int y, int valor);//modifica un punto del tablero.
    void mostrarInstrucciones(string a);

  

  private:

 //vector<int>tablero;
    
};

#endif 