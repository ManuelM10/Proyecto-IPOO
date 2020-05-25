#include <iostream>
#include "Tablero.h"
#include "Movimientos.h"
#include "Mago.h"
#include "Luchador.h"
#include "Tirador.h"

int main() {
  
  Tablero tablero;
  Movimientos mover;
  
  char opcion;
 
  cout<<"****ASALTO A LA TORRETA*****"<<endl;
  cout<<"** 1.Iniciar juego      ****"<<endl;
  cout<<"** 2.Cargar juego       ****"<<endl;
  cout<<"** 3.Instrucciones      ****"<<endl;
  cout<<"** 4.Mostrar el tablero ****"<<endl;
  cout<<"****************************"<<endl;
  cout<<endl;

  
  cout<<"Elija la opcion ";
  cin>>opcion;
  
  switch(opcion)
  {
    case '1':
    system("clear");
    tablero.mostrarInstrucciones("Avatares.txt");
    cout<<"Elija sus avatares jugador 1: "<<endl;
    mover.insertarAvatares1();
    system("clear");

    cout<<"Elija sus avatares jugador 2: "<<endl;
    tablero.mostrarInstrucciones("Avatares.txt");
    mover.insertarAvatares2();
   
   mover.organizarPersonajes();
   mover.totalPoder();
   mover.totalMana();
   mover.setTablero("Tablero.txt");   
   mover.mostrarTablero();
   mover.mostrarPosicion();
   mover.moverEjercito();
   
   mover.guardarPartida("Partida_Guardada1.txt");
   mover.guardarTablero();
   main();
   
  
  break;

  case '2':
  mover.setTablero("Partida_Guardada.txt");
  //mover.cargarPartida("Partida_Guardada1.txt");   
  mover.moverEjercito();
  break;

  case '3':
  system("clear");
  tablero.mostrarInstrucciones("Instrucciones.txt");
  main();
  break;

  case '4':
  cout<<endl;
  mover.setTablero("Tablero.txt");
  mover.mostrarPosicion();
  mover.mostrarTablero();
  main();
  cout<<endl;
  break;

  }
  
  
}
