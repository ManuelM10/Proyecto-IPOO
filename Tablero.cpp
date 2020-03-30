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
  
   int k=0; 
  //imprime fila 1 (de cero a nueve).
  for (int i=0;i<10;i++){
    if (i==0){
      cout<<"     ";
    }
    cout<<i<<"    ";
  }
  cout<<"\n\n";
  // i recorre las filas.
   // j recorre las columnas
  for(int i=0;i<10;i++){
    cout<<k<<"   "; // imprime columna 1 (de cero a nueve).
    k++;
    for(int j=0;j<10;j++){
      cout<<"["<<tablero[i][j]<<"]  ";
    }
    cout<<"\n\n";
  }

}

void Tablero::modificarElemento(int x, int y, int valor)
{
  tablero[x][y]= valor;
}
int Tablero:: obtenerPunto(int x, int y)
{
  return tablero[x][y];
}