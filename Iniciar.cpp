#include <sstream>
#include "Tablero.h"
using namespace std;
#include "Iniciar.h"

Iniciar::Iniciar()
{
  PartidaGuardada.resize(0);
}
Iniciar::~Iniciar()
{
  //destructor
}

//Muestra el menú en cosola.
void Iniciar::Menu()
{
  cout<<"  ~*BIENVENIDO AL JUEGO*~  "<<endl;
  cout<<"---------------------------"<<endl;
  cout<<"Selecciona una opcion:        "<<endl<<endl;
  
  cout<<"1.Iniciar juego        "<<endl;
  cout<<"2.Cargar partida       "<<endl;
  cout<<"3.Guardar partida"<<endl;
  cout<<"4.Mostrar tablero y avatares"<<endl;
  cout<<"5.Cerrar juego         "<<endl;  
  
  
  cin>>a;
  
  cout<<"---------------------------"<<endl;
  EscojeOpcion();
  
  
}
void Iniciar::EscojeOpcion()
{
  
  switch(a)
  {
    case 1:  cout<<"Tablero ImprimirTablero()"; break;
    case 2: CargarPartida("PartidaGuardada.txt");cout<<"Inicia el juego"<<endl;;break;
    case 5: cout<<"GRACIAS POR JUGAR        "<<endl;break;
    case 3: GuardarDatos("PartidaGuardada.txt");
    cout<< "Su partida fue guarda satisfatoriamente" <<endl <<endl; Menu();break; 
    case 4:ImprimirDatos("Tablero.txt");Menu();break;
    default:cout<<"<Opcion no identificada        "<<endl;
    EscojeOpcion();
  }
  cout<<"---------------------------"<<endl;

}

/*void Iniciar::GuardarDatos(string rutaArchivo)
{
  ofstream outputfile;
  outputfile.open(rutaArchivo.c_str());
  if(outputfile.fail())
  cout<<"el archivo no se abrio correctamente"<<endl;

  
  outputfile.close();
}*/

void Iniciar:: CargarPartida(string rutaArchivo)
{ifstream fileinput(rutaArchivo.c_str());

  string datoAux;

  string dato;

  while(fileinput>>datoAux)
  {
    stringstream aux(datoAux);
    aux>>dato;

    PartidaGuardada.push_back(dato);
  }
}  

//Esta función permitirá, cargar el tablero para poder jugar
void Iniciar::ImprimirDatos(string rutaArchivo)
{
   ifstream archi;
  string texto;
  archi.open(rutaArchivo.c_str());
  if(archi.fail()){
    cout<<"no se pudo cargar el tablero"<<endl;
    exit(1);
   }
  
   while(!archi.eof()){
     
     getline(archi,texto);
     
     cout<<texto<<endl;
     }
}

//Guarda los datos de una partida
void Iniciar::GuardarDatos(string rutaArchivo)
{
   ofstream outputfile;
  outputfile.open(rutaArchivo.c_str());
  if(outputfile.fail())
  cout<<"El archivo no abrio correctamente"<<endl;

  vector<string>::iterator iterador;

  for(iterador=PartidaGuardada.begin(); iterador!=PartidaGuardada.end();iterador++)
  {
    outputfile<<*iterador<<endl;
  }
  outputfile.close();
}