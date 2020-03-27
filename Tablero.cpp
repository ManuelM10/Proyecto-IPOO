#include "Tablero.h"
using namespace std;
using std::string;
#include <fstream>

Tablero::Tablero()
{

}

Tablero::~Tablero()
{

}
//Carga el archivo Tablero.txt.
void Tablero::leerArchivo()
{
  ifstream archivo;
  string texto;
  archivo.open("Tablero.txt", ios::in);
  if(archivo.fail()){
    cout<<"no se pudo cargar el tablero"<<endl;
    exit(1);
   }
   int cont=0;
   while(!archivo.eof()){
     
     getline(archivo,texto);
     
     istringstream f(texto);
     string s;
     int i=0;
     while(getline(f, s, '\t')){
       tablero[cont][i]=stoi(s);//stoi(): coje un vector y devuelve un entero.
       i++;
     }
     cont = cont + 1;
   }
   archivo.close();
 
}

//Permite mostrar el tablero en consola.
void Tablero::imprimirTablero()
{
   int conti=0;
  int contj=0;

  for (int i=0; i<10; i++){
    if(contj>0 && contj<9)
    {cout<<" "<<contj;}
    else if(contj==0)
    {cout<<"  "<<contj;}
    else if(contj==9)
    {cout<<" "<<contj<<" ";}
    contj+=1;
  }
  cout<<endl;

  for(int i=0;i< SIZE; i++){
    cout<<conti<<" ";
    for(int j=0; j< SIZE; j++){
      cout<<tablero[i][j]<<" ";

    }
    cout<<endl;
    conti+=1;
  }

}
/*void Tablero::modificarElementio(int x, int y, int valor)
{
  tablero[x][y]= valor;
}
int Tablero:: obtenerPunto(int x, int y)
{
  return tablero[x][y];
}*/