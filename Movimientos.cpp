#include "Movimientos.h"
#include "Tablero.h"

using namespace std;

/*
ejercito1[1] = 0 (quiere decir que el ejercito ha sido derrotado, y muestra 0, en pantalla)
torreta[1] = 3 (Quiere decir que la torre, ha sido destruiada)
*/
Movimientos::Movimientos()
{
  
 ejercito1[1] = 0;
 ejercito1[0] = 1;
 ejercito2[1] = 0;
 ejercito2[0] = 2;
 torreta[0] = 5;
 torreta[1] = 3;
 p = 0;
 
 
}

Movimientos::~Movimientos(){
}

void Movimientos::mostrarPosicion(){
 x1 = 0;
 y1 = 4;
 x2 = 9;
 y2 = 4;
  
 tablero[x1][y1] = ejercito1[0];
 
 tablero[x2][y2] = ejercito2[0];
 
 tablero[4][4] = torreta[0];
}


void Movimientos::moverEjercito()
{
  
  //Borra todo lo que se ha mostrado en pantalla, hasta llegar a el
  system("clear");
  
  do { 
  mostrarTablero();

  //cout << "Se mueve a la derecha con d " << endl;
  cout<<"ejercito 1"<<"  "<<"   ejercito 2"<<endl;
  cout<<"w = arriba"<<"  "<<"   i = arriba"<<endl;
  cout<<"s = abajo"<<"  "<<"    k = abajo "<<endl;
  cout<<"a = derecha"<<"  "<<"  j = derecha"<<endl;
  cout<<"d = izquierda"<<"  "<<"l = izquierda"<<endl;
  cout<<"movimiento: ";
  cin >> value;
  value = tolower(value);
  
  
  
  switch (value) {
    
    case 'd':
    
  if ((y1 + 1) <= 9 && tablero[x1][y1+1] != torreta[0] && tablero[x1][y1+1] != ejercito2[0]) {
        tablero[x1][y1] = 0;
                y1++;
            if (tablero[x1][y1] == 4) 
                ejercito1[1] = ejercito1[1] + 1;
                tablero[x1][y1] = ejercito1[0];
                
  }break;
    case 'a':
  if((y1 - 1) >= 0 && tablero[x1][y1-1] != torreta[0] && tablero[x1][y1-1] != ejercito2[0]) {
      tablero[x1][y1] = 0;
        y1--;
          if (tablero[x1][y1] == 4) 
                ejercito1[1] = ejercito1[1] + 1;
                tablero[x1][y1] = ejercito1[0];
       
   
            
  }break;
    case 's':
  if((x1 + 1) <= 9 && tablero[x1+1][y1] != torreta[0] && tablero[x1+1][y1] != ejercito2[0]) {
      tablero[x1][y1] = 0;
        x1++;
          if (tablero[x1][y1] == 4) 
                ejercito1[1] = ejercito1[1] + 1;
                tablero[x1][y1] = ejercito1[0];
       
   
            
  }break;
    case 'w':
  if((x1 - 1) >= 0 && tablero[x1-1][y1] != torreta[0] && tablero[x1-1][y1] != ejercito2[0]) {
      tablero[x1][y1] = 0;
        x1--;
          if (tablero[x1][y1] == 4) 
                ejercito1[1] = ejercito1[1] + 1;
                tablero[x1][y1] = ejercito1[0];
       
   
            
  }break;
   case 'l':
  if ((y2 + 1) <= 9  && tablero[x2][y2+1]  != torreta[0] && tablero[x2][y2+1]  != ejercito1[0] && p!=4) {
        tablero[x2][y2] = 0;
                y2++;
            if (tablero[x2][y2] == 4) 
                ejercito2[1] = ejercito2[1] + 1;
                tablero[x2][y2] = ejercito2[0];
                
  }break;
    case 'j':
  if((y2 - 1) >= 0 && tablero[x2][y2-1] != torreta[0]  && tablero[x2][y2-1] != ejercito1[0] && p!=4) {
      tablero[x2][y2] = 0;
        y2--;
          if (tablero[x2][y2] == 4) 
                ejercito2[1] = ejercito2[1] + 1;
                tablero[x2][y2] = ejercito2[0];
       
   
            
  }break;
    case 'k':
  if((x2 + 1) <= 9 && tablero[x2+1][y2] != torreta[0] && tablero[x2+1][y2] != ejercito1[0] && p!=4) {
      tablero[x2][y2] = 0;
        x2++;
          if (tablero[x2][y2] == 4) 
                ejercito1[1] = ejercito2[1] + 1;
                tablero[x2][y2] = ejercito2[0];
       
   
            
  }break;
    case 'i':
  if((x2 - 1) <= 9 && tablero[y2][x2-1] != torreta[0] && tablero[y2][x2-1] != ejercito1[0] && p!=4) {
      tablero[x2][y2] = 0;
        x2--;
          if (tablero[x2][y2] == 4) 
                ejercito1[1] = ejercito2[1] + 1;
                tablero[x2][y2] = ejercito2[0];

   
            
  } break;
 
  }//cierra el switch
  
  system("clear");
  atacarTorreta();
   if(p == 4){
   cout << "*******GAME OVER*******" << endl;
 }
  }/*se cierra el do*/while ( (tablero[4][4] != torreta[1]) && (value == 'a' || value == 'd' || value == 's' || value == 'w' || value == 'l' || value == 'i' || value == 'j' || value == 'k'));

   
  
} 
//5,4 - 4,3 - 3,4 - 4,5 
void Movimientos::atacarTorreta()
{   
  if(tablero[5][4]==ejercito2[0] || tablero[4][3]== ejercito2[0] || tablero[3][4]==ejercito2[0] || tablero[4][5] == ejercito2[0])
  {
    p=p+1;
    cout<<"la torreta ha resivido "<<p<<" golpes"<<endl;
    
  }
  if(p == 4){
    tablero[4][4]= torreta[1];
    cout<<"*******LA TORRETA SE DETRUYO*******"<<endl; 
  }else{
    tablero[4][4]= torreta[0];
  }

}

void Movimientos::batallaAMuerteConCuchillo(){
  

}
      