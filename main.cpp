#include <iostream>
#include "Tablero.h"
#include "Movimientos.h"

int main() {
  Tablero tablero;
  Movimientos mover;

  mover.setTablero("Tablero.txt");
  mover.mostrarTablero();
  mover.mostrarPosicion();
  
  mover.moverEjercito();
  //tablero.guardarPartida("Partida.txt");
  
  
  /*char obcion;
 do{
  cout<<"****ASALTO A LA TORRETA****"<<endl;
  cout<<"* 1.iniciar juego      ****"<<endl;
  cout<<"* 2.cargar juego       ****"<<endl;
  cout<<"* 3.instrucciones      ****"<<endl;
  cout<<"* 4.mostrar el tablero ****"<<endl;
  cout<<"***************************"<<endl;
  cout<<endl;

  
  cout<<"escoja la opcion ";
  cin>>obcion;
  
  switch(obcion)
  {
    case '1':
  mover.setTablero("Tablero.txt");
  mover.mostrarTablero();
  mover.mostrarPosicion();
  mover.moverEjercito();
  mover.atacarTorreta();
  break;

  case '2':
  mover.setTablero("Partida.txt");
  mover.moverEjercito();
  break;

  case '3':
  cout<<"mostrar instrucciones"<<endl;
  break;

  case '4':
  cout<<endl;
  mover.setTablero("Tablero.txt");
  mover.mostrarPosicion();
  mover.mostrarTablero();
  cout<<endl;
  break;

  }
  }
  while( (obcion!=1) || !(obcion!=2));
*/
}