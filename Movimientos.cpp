#include "Personajes.h"
#include "Mago.h"
#include "Luchador.h"
#include "Tirador.h"
#include "Movimientos.h"
#include "Tablero.h"

using namespace std;

/*
ejercito1[1] = 0 (quiere decir que el ejercito ha sido derrotado, y muestra 0, en pantalla)
torreta[1] = 3 (Quiere decir que la torre, ha sido destruiada)
*/
Movimientos::Movimientos()
{
  //Ejercito atacante
  
  
  poderTotal1 = 0;
  manaTotal1 = 0;
  poderTotal2 = 0;
  manaTotal2 = 0; 
  vida1 = 0;
  vida2 = 0;

  ejercito1[1] = 0;
  ejercito1[0] = 1;
  ejercito2[1] = 0;
  ejercito2[0] = 2;
  torreta[0] = 5;
  torreta[1] = 3;
  p = 0;
  v1 = 2;
  v2 = 2;
  c = 0.5;
  k=0;
  
}

Movimientos::~Movimientos()
{ 
}

void Movimientos::mostrarPosicion()
{

 x1 = 0;
 y1 = 4;
 x2 = 9;
 y2 = 4;
  
 tablero[x1][y1] = ejercito1[0];
 
 tablero[x2][y2] = ejercito2[0];
 
 tablero[4][4] = torreta[0];

}

//este metodo es para mover los ejercitos por el mapa y el resto de acciones como atacar y recargar la vida

void Movimientos::moverEjercito()
{
  
  //Borra todo lo que se ha mostrado en pantalla, hasta llegar a el
  system("clear");
  
  
  do { 
    k++;
    //organizarPersonajes();
    mostrarTablero();
  
    cout<<"ejercito 1"<<"     "<<"ejercito 2"<<endl;
    cout<<"w = arriba"<<"     "<<"i = arriba"<<endl;
    cout<<"s = abajo"<<"      "<<"k = abajo"<<endl;
    cout<<"a = izquierda"<<"  "<<"l = derecha"<<endl;
    cout<<"d = derecha"<<"    "<<"j = izquierda"<<endl;
    cout<<"1. guardar la partida "<<endl;
    cout<<"movimiento: ";
    cin >> value;
    value = tolower(value);
  
  
  
    if(k%2==1){
      cout<<"turno del ejercito 1"<<endl;
      atacarTorreta();
      switch (value) {
    
        case 'd':
    
        if ((y1 + 1) <= 9 && tablero[x1][y1+1] != torreta[0] && tablero[x1][y1+1] != ejercito2[0] && tablero[x1][y1+1] != 8){
          tablero[x1][y1] = 0;
          y1++;
            if (tablero[x1][y1] == 4) 
                ejercito1[1] = ejercito1[1] + 1;
                tablero[x1][y1] = ejercito1[0];                
        }break;

        case 'a':
        if((y1 - 1) >= 0 && tablero[x1][y1-1] != torreta[0] && tablero[x1][y1-1] != ejercito2[0] && tablero[x1][y1-1] != 8) {
          tablero[x1][y1] = 0;
          y1--;
          if (tablero[x1][y1] == 4) 
              ejercito1[1] = ejercito1[1] + 1;
              tablero[x1][y1] = ejercito1[0];                   
        }break;

        case 's':
        if((x1 + 1) <= 9 && tablero[x1+1][y1] != torreta[0] && tablero[x1+1][y1] != ejercito2[0] && tablero[x1+1][y1] != 8) {
          tablero[x1][y1] = 0;
          x1++;
          if (tablero[x1][y1] == 4) 
              ejercito1[1] = ejercito1[1] + 1;
              tablero[x1][y1] = ejercito1[0];
        }break;

        case 'w':
        if((x1 - 1) >= 0 && tablero[x1-1][y1] != torreta[0] && tablero[x1-1][y1] != ejercito2[0] && tablero[x1-1][y1] != 8) {
          tablero[x1][y1] = 0;
          x1--;
          if (tablero[x1][y1] == 4) 
              ejercito1[1] = ejercito1[1] + 1;
              tablero[x1][y1] = ejercito1[0];                      
        }break;
      }//cierre del primer switch
    }//cierre del primer if
  
    if(k%2==0){ 
      cout<<"turno del ejercito 2"<<endl;
      switch(value){

        case 'l':
        if ((y2 + 1) <= 9  && tablero[x2][y2+1]  != torreta[0] && tablero[x2][y2+1] != ejercito1[0] && p!=4 &&    tablero[x2][y2+1]!=8){
             tablero[x2][y2] = 0;
              y2++;
            if (tablero[x2][y2] == 4) 
                ejercito2[1] = ejercito2[1] + 1;
                tablero[x2][y2] = ejercito2[0];
        }break;

        case 'j':
        if((y2 - 1) >= 0 && tablero[x2][y2-1] != torreta[0]  && tablero[x2][y2-1] != ejercito1[0] && p!=4 &&tablero[x2][y2-1] != 8){
          tablero[x2][y2] = 0;
          y2--;
          if (tablero[x2][y2] == 4) 
                ejercito2[1] = ejercito2[1] + 1;
                tablero[x2][y2] = ejercito2[0];                      
        }break;

        case 'k':
        if((x2 + 1) <= 9 && tablero[x2+1][y2] != torreta[0] && tablero[x2+1][y2] != ejercito1[0] && p!=4 && tablero[x2+1][y2] != 8) {
          tablero[x2][y2] = 0;
          x2++;
          if (tablero[x2][y2] == 4) 
                ejercito2[1] = ejercito2[1] + 1;
                tablero[x2][y2] = ejercito2[0];                      
        }break;
  
        case 'i':
        if((x2 - 1) >= 0 && tablero[x2-1][y2] != torreta[0] && tablero[x2-1][y2]  != ejercito1[0] && p!=4 && tablero[x2-1][y2]!= 8) {
          tablero[x2][y2] = 0;
          x2--;
          if (tablero[x2][y2] == 4) 
                ejercito2[1] = ejercito2[1] + 1;
                tablero[x2][y2] = ejercito2[0];
        }break;
  
   
      }//cierra del segundo switch
    }//cierre del segundo if
  
  system("clear");
 
  if(k%2==0)
  {
    cout<<"TURNO DEL EJERCITO 1"<<endl;
    cout<<endl;
  }

  if(k%2==1)
  {
    cout<<"TURNO DEL EJERCITO 2"<<endl;
    cout<<endl;
  }

  cout<<"Poder total del ejercito 1: "<< poderTotal1 << endl 
  << "Mana total del ejercito 1: " << manaTotal1 << endl;
  
  cout<<"Poder total del ejercito 2: " << poderTotal2 << endl 
  <<"Mana del ejercito 2: "<<manaTotal2 << endl << endl;
  
  cout<<"La torreta ha resivido " << p << " golpes" <<endl;
  
  batalla();
  cout<< "vida del personaje " <<v1+1<< " del ejercito 1: " <<vida1<<endl;
  cout<< "vida del personaje " <<v2+1<< " del ejercito 2: " <<vida2<<endl;  
  
  if(k%4==0 && k<120)
  {
    colocarBonus();
  }

  recargarVida();
  
  //Se cierra el do
  }while((p != 4) && (value == 'a' || value == 'd' || value == 's' || value == 'w' || value == 'l' || value == 'i' || value == 'j' || value == 'k') && (poderTotal1 > 0 && poderTotal2 > 0 && (value != '1')));

  system("clear");
  
  if(p == 4 || poderTotal1 <= (ejercito_1[0] -> getPoder())){
   cout << "¡¡¡¡¡¡¡¡¡¡EL EJERCITO 2 GANA!!!!!!!!" << endl;
   tablero[4][4]= torreta[0];
  }

  if( poderTotal2 <= (ejercito_2[0] -> getPoder())){
   cout << "¡¡¡¡¡¡¡¡¡¡EL EJERCITO 1 GANA!!!!!!!!" << endl;
  }
} 

//METODO PARA ATACAR LA TORRETA POR CUATRO LADOS DIFERENTES 
void Movimientos::atacarTorreta()
{   
 
  if(tablero[5][4]==ejercito2[0])
  { 
    tablero[5][4]= 8;
    system("clear");
    x2=9;
    y2=4;    
    p++;
  }
  
  if(tablero[4][3]==ejercito2[0])
  { 
    tablero[4][3]= 8;
    system("clear");
    x2=9;
    y2=4;    
    p++;
  }
  
  if(tablero[3][4]==ejercito2[0])
  { 
    tablero[3][4]= 8;
    system("clear");
    x2=9;
    y2=4;    
    p++;
  }

  if(tablero[4][5]==ejercito2[0])
  { 
    tablero[4][5]= 8;
    system("clear");
    x2=9;
    y2=4;    
    p++;
  }
}

//Esta funcion, se encarga de ordernar los personajes en el vector de mayor a menor segun su cantidad de vida
void Movimientos::organizarPersonajes()
{
  
  Personajes *aux;

  //organiza el ejercito 1
  for(int i=0;i<2;i++)
  {
    
    for(int j=i+1;j<3;j++)
    { 
      
      if((ejercito_1[i] -> getVida())<(ejercito_1[j] -> getVida()))
       
        {aux = ejercito_1[i];
        ejercito_1[i] = ejercito_1[j];
        ejercito_1[j] = aux;}
    }//cierre del segundo for
    
  }//cierre del primer for
  vida1= ejercito_1[v1]-> getVida();

    //organiza el ejercito 2
     for(int i=0;i<2;i++)  
     {
    
    for(int j=i+1;j<3;j++)
     { 
      
      if((ejercito_2[i] -> getVida())<(ejercito_2[j] -> getVida()))
       
        {aux = ejercito_2[i];
        ejercito_2[i]=ejercito_2[j];
        ejercito_2[j]= aux;}
     }//cierre del segundo for
   }//cierre del primer for
  vida2=ejercito_2[v2]-> getVida();
      
}


//Esta función, se encarga de calcular el poder total, del ejercito
void Movimientos::totalPoder()
{
    
//Total poder ejercito 1 
  for(int i=0; i<3;i++)
  {
    poderTotal1= ejercito_1[i] -> getPoder() + poderTotal1;
    
  }
    //cout<<poderTotal1<<endl;
  
  
//Total poder ejercito 2
  for(int i=0; i<3;i++)
  {
    poderTotal2= ejercito_2[i]-> getPoder() + poderTotal2;
    
    
  }
    //cout<<poderTotal2<<endl;
}


//EL METODO QUE SUMA EL MANA TOTAL DE TODOS LOS AVATARES
void Movimientos::totalMana()
{
 
 //total mama del ejercito 1
  for(int i=0; i<3;i++){
    manaTotal1= ejercito_1[i]-> getMana() + manaTotal1;
  }
    //cout<<manaTotal1<<endl;

  //total mana del ejercito 2
  for(int i=0; i<3;i++){
    manaTotal2= ejercito_2[i]-> getMana() + manaTotal2;
  }
    //cout<<manaTotal2<<endl;
}

//
//EL METODO PARA LA BATALLA ENTRE EJERCITOS
void Movimientos::batalla()
{
  

  
    //EJercito 1 ataca 

if(value == 'w' || value == 's' || value == 'a' || value == 'd'){
   
  if(tablero[x1][y1+1] == ejercito2[0] || tablero[x1][y1-1] == ejercito2[0] || tablero[x1+1][y1] == ejercito2[0] || tablero[x1-1][y1] == ejercito2[0] ){ 

    //cuando el poder del ejercito 1 supera el mana del ejercito 2
    if(poderTotal1 > manaTotal2){
        
        //si la vida del avatar es superior a cero
        if(vida2 > 0){  
          
          vida2 = vida2 - 0.5;
          
        }
        if(vida2 <= 0 ){
          
          poderTotal2 = poderTotal2 - (ejercito_2[v2] -> getPoder());
          manaTotal2 = manaTotal2 - (ejercito_2[v2] -> getMana()); 
            if(v2 >0){
              v2=v2-1;
            }
            vida2=ejercito_2[v2] -> getVida();
                
        }
    }
    
    //cuando el mana del ejercito 2 supera al poder del ejercito 1
    if(poderTotal1 < manaTotal2){
    //si la vida del avatar es superior a cero
        if(vida1 > 0){  
          vida1 = vida1 - 0.5;
      
        }
    
        if(vida1 <= 0 ){
          poderTotal1 = poderTotal1 - (ejercito_1[v1] -> getPoder());
          manaTotal1 = manaTotal1 - (ejercito_1[v1] -> getMana()); 
        if(v1 >0){
          v1=v1-1;
        }
          vida1=ejercito_1[v1] -> getVida();
        //cout << manaTotal2 << endl;                
    }
  }
  //cuando el poder del ejercito 1 y el mana del ejercito 2 son iguales
  if(poderTotal1 == manaTotal2){
        if(vida1 > 0 && vida2 > 0){  
        vida1 = vida1 - 0.2;
        vida2 = vida2 - 0.2;
      
      }
    
        if(vida1 <= 0){
        poderTotal1 = poderTotal1 - (ejercito_1[v1] -> getPoder());
        manaTotal1 = manaTotal1 - (ejercito_1[v1] -> getMana()); 
        if(v1 > 0){
          v1=v1-1;
        }
        vida1=ejercito_1[v1] -> getVida();
        if(vida2 <= 0 ){
        poderTotal2 = poderTotal2 - (ejercito_2[v2] -> getPoder());
        manaTotal2 = manaTotal2 - (ejercito_2[v2] -> getMana()); 
        if(v2 >0){
          v2=v2-1;
        }
        vida2=ejercito_2[v2] -> getVida();     
        
        }  
      }  
    }
  }
}  
//////////////////////////////////////////////////////////////////

  //EJERCITO 2 ATACA
  if(value == 'i' || value == 'k' || value == 'j' || value == 'l' ){
    if(tablero[x2][y2+1] == ejercito1[0] || tablero[x2][y2-1] == ejercito1[0] || tablero[x2+1][y2] == ejercito1[0] || tablero[x2-1][y2] == ejercito1[0] ){ 
        
        //cuando el poder del ejercito 2 supera al mana del ejercito 1
        if(poderTotal2 > manaTotal1){
        
        //si la vida del avatar es superior a cero
        if(vida1 > 0){  
          
          vida1 = vida1 - 0.5;
          
        }
        if(vida1 <= 0 ){
          
          poderTotal1 = poderTotal1 - (ejercito_1[v1] -> getPoder());
          manaTotal1 = manaTotal1 - (ejercito_1[v1] -> getMana()); 
            if(v1 > 0){
              v1=v1-1;
            }
            vida1=ejercito_1[v1] -> getVida();
                
        }
    }
    
  //cuando el mana del ejercito 1 supera al poder del ejercito 2
  if(poderTotal2 < manaTotal1){
    //si la vida del avatar es superior a cero
    if(vida2 > 0){  
      vida2 = vida2 - 0.5;
      
    }
    
    if(vida2 <= 0 ){
      poderTotal2 = poderTotal2 - (ejercito_2[v2] -> getPoder());
      manaTotal2 = manaTotal2 - (ejercito_2[v2] -> getMana()); 
        if(v2 >0){
          v2=v2-1;
        }
                vida2=ejercito_2[v2] -> getVida();
                //cout << manaTotal2 << endl;                
    }
  }
  //cuando el poder del ejercito 2 y el mana del ejercito 2 son iguales
  if(poderTotal2 == manaTotal1){
      if(vida2 > 0 && vida1 > 0){  
      vida1 = vida1 - 0.2;
      vida2 = vida2 - 0.2;
      
    }
    
    if(vida1 <= 0){
      poderTotal1 = poderTotal1 - (ejercito_1[v1] -> getPoder());
      manaTotal1 = manaTotal1 - (ejercito_1[v1] -> getMana()); 
        if(v1 >0){
          v1=v1-1;
        }
          vida1=ejercito_1[v1] -> getVida();
     if(vida2 <= 0 ){
      poderTotal2 = poderTotal2 - (ejercito_2[v2] -> getPoder());
      manaTotal2 = manaTotal2 - (ejercito_2[v2] -> getMana()); 
        if(v2 >0){
          v2=v2-1;
        }
          vida2=ejercito_2[v2] -> getVida();     
        
        }  
      }  
    }    
    } 
  }
}

//este metodo inserta los avatares escogidos al ejercito 1
void Movimientos::insertarAvatares1()
{
  
  
   char q;
   Personajes *p;
   //añade avatares al ejercito 1
   for(int i =0; i<3; i++){
     cout<<"Ejercito 1"<<" " << "personaje " << i+1<<endl;
     cin>>q;
     switch(q){
       case '1': 
       p = new Luchador;
       cout<<"Posicion "<<i+1<<" Luchador"<<endl;
       break;

       case '2': 
       p = new Tirador;
       cout<<"Posicion "<<i+1<<" Tirador"<<endl;
       break;

       case '3': 
       p= new Mago; 
       cout<<"Posicion "<<i+1<<" Mago"<<endl;
       break;
     }
     

     ejercito_1[i] = p;
   }
    
}
// este metodo inserta los avatares escogidos al ejercito 2
void Movimientos::insertarAvatares2()
{
  char q;
  Personajes *p;
  //añade avatares al ejercito 2
   for(int i =0; i<3; i++)
   {
     cout<<"Ejercito 2"<<" " << "personaje " << i+1<<endl;
     cin>>q;
     switch(q)
     {
       case '1': 
       p = new Luchador;
       cout<<"posicion "<<i+1<<" Luchador"<<endl;
       break;

       case '2': 
       p = new Tirador;
       cout<<"posicion "<<i+1<<" Tirador"<<endl;
       break;

       case '3': 
       p= new Mago;
       cout<<"posicion "<<i+1<<" Mago"<<endl; 
       break;
     }
     
     ejercito_2[i] = p;
   }//fin del for
  
}


  /*
CONTRATO: GuardarPartida: Texto -> Vacío.
PROPÓSITO: Reescribe o guarda en un documento plano los cambios hechos a los datos almacenados en la matriz tablero y el estado de los ejércitos.
CABECERA:*/
void Movimientos::guardarPartida(string Ruta2) 
{
/*
ofstream outputFile;
outputFile.open(Ruta2.c_str());
if(outputFile.fail()) {
cout << "el Archivo no abrio correctamente" << endl;
}*/

/*for (int I = 0; I < Tamano; I ++) {
for (int J = 0; J < Tamano; J ++) {
if (J == 9) {
outputFile<< tablero[I][J]<<" "<<endl;
}
else {
outputFile << tablero[I][J] << "-";
}
}
}*/
/*

int N = 0;

for (int I = 0; I < ejercito1.size(); I ++) {
if (I == (ejercito1.size() - 1)) {
outputFile << ejercito1[N] << endl;
}
else {
outputFile << ejercito1[N] << "-" ;
}
N ++;
}
N = 0;

for (int I = 0; I < ejercito2.size(); I ++) {
if (I == (ejercito2.size() - 1)) {
outputFile << ejercito2[N] << endl;
}
else {
outputFile << ejercito2[N] << "-";
}
N ++;
}

N = 0;

for (int I = 0; I < posicion1.size(); I ++) {
if (I == (posicion1.size() - 1)) {
outputFile << posicion1[N] << endl;
}
else {
outputFile << posicion1[N] << "-";
}
N ++;
}

N = 0;

for (int I = 0; I < posicion2.size(); I ++) {
if (I == (posicion2.size() - 1)) {
outputFile << posicion2[N] << endl;
}
else {
outputFile << posicion2[N] << "-";
}
N ++;
}

}

EJEMPLO:
Tablero[10][10];
ejercito1[4];
ejercito2[4];
Objeto.GuardarPartida();

PartidaGuardad.txt :
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 2 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 3 3 0 0 0 0
0 0 0 0 3 3 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0
L M T T
L M M T

(El método no retorna valores, el método solo guarda datos en un archivo plano).*/

}




//Esta funcion reparte las bonus por todo el tablero
void Movimientos::colocarBonus()
{
  int x,y;
  srand(time(NULL));
  x=rand()%10;
  y=rand()%10; 

  if(tablero[x][y]==0){
  tablero[x][y] = 6;
  }         
}

//recargar la vida cuando estan en un bonus
void Movimientos::recargarVida()
{
  if((tablero[x1+1][y1]== 6 || tablero[x1][y1+1]== 6 || tablero[x1-1][y1]== 6 || tablero[x1][y1-1]== 6) && vida1<(ejercito_1[v1]->getVida()) )
  {
    
   if(tablero[x1+1][y1]==5 || tablero[x1+1][y1]==ejercito2[0]|| tablero[x1+1][y1]==8)
    {tablero[x1][y1+1]= 0;}
    else
    {
      tablero[x1+1][y1]=0;
    }
   
   if(tablero[x1][y1+1]==5 || tablero[x1][y1+1]==ejercito2[0]|| tablero[x1][y1+1]==8) 
    {tablero[x1+1][y1]= 0;}
    else
    {
      tablero[x1][y1+1]=0;
    }
   
   if(tablero[x1-1][y1]==5 || tablero[x1-1][y1]==ejercito2[0]|| tablero[x1-1][y1]==8)
    {tablero[x1][y1+1]= 0;}
    else
    {
      tablero[x1-1][y1]=0;
    }
   
   if(tablero[x1][y1-1]==5 || tablero[x1][y1-1]==ejercito2[0]|| tablero[x1][y1-1]==8)
    {tablero[x1-1][y1]= 0;}
    else
    {
      tablero[x1][y1-1]=0;
    }

    vida1=ejercito_1[v1]->getVida();
   
  }

  if((tablero[x2+1][y2]== 6 || tablero[x2][y2+1]== 6 || tablero[x2-1][y2]== 6 || tablero[x2][y2-1]== 6) && vida2<(ejercito_2[v2]->getVida()))
  {  
    if(tablero[x2+1][y2]==5 || tablero[x2+1][y2]==ejercito1[0] || tablero[x2+1][y2]==8)
    {tablero[x2][y2+1]= 0;}
    else
    {
      tablero[x2+1][y2]=0;
    }
   
   if(tablero[x2][y2+1]==5 || tablero[x2][y2+1]==ejercito1[0] || tablero[x2][y2+1]==8) 
    {tablero[x2+1][y2]= 0;}
    else
    {
      tablero[x2][y2+1]=0;
    }
   
   if(tablero[x2-1][y2]==5 || tablero[x2-1][y2]==ejercito1[0] || tablero[x2-1][y2]==8)
    {tablero[x2][y2+1]= 0;}
    else
    {
      tablero[x2-1][y2]=0;
    }
   
   if(tablero[x2][y2-1]==5 || tablero[x2][y2-1]==ejercito1[0]|| tablero[x2][y2-1]==8)
    {tablero[x2-1][y2]= 0;}
    else
    {
      tablero[x2][y2-1]=0;
    }

     vida2=ejercito_2[v2]->getVida();
    
  }
}