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
  
  cout<<"3.Mostrar tablero y avatares"<<endl;
  cout<<"4.Cerrar juego         "<<endl;  
  
  
  cin>>a;
  
  cout<<"---------------------------"<<endl;
  EscojeOpcion();
}

void Iniciar::Menu1()
{
  cout<<"---------------------------"<<endl;
  cout<<"Selecciona una opcion:        "<<endl<<endl;
  
  cout<<"5.Hacer un movimiento " << endl;
  cout<<"6.Guardar partida y cerrar " <<endl;

  cin>>a;
  cout<<"---------------------------"<<endl;
  EscojeOpcion();
}  
  
void Iniciar::EscojeOpcion()
{
  Tablero tablero;
  Fichas fichas;
  char b;
  switch(a)
  {
    case 1: cout<<"Elija los avatares: "<<endl;
             ImprimirDatos("avatares.txt");
             cout << "luchador = l, tirador = t, mago = m" << endl;
             cin>>b;
             if(b=='l')
             b=fichas.luchador("ataque");
             if(b=='t')
             b=fichas.tirador("ataque");
             if(b=='m')
             b=fichas.mago("ataque");         
    tablero.leerArchivo();tablero.modificarElemento(4, 4, fichas.torre());tablero.modificarElemento(0, 0, b);tablero.imprimirTablero();Menu1(); break; 

    case 2: CargarPartida("PartidaGuardada.txt");cout<<"Inicia el juego"<<endl;break;
    
    case 3:tablero.leerArchivo();tablero.imprimirTablero();ImprimirDatos("avatares.txt");Menu();break;

    case 4: cout<<"GRACIAS POR JUGAR        "<<endl;break;

    case 5: cout << "Proximamente... " << endl;break;

    case 6:
     GuardarDatos("PartidaGuardada.txt");
    cout <<"Su partida se guardó satisfatoriamente " <<"\n\n";break;

    default:cout<<"Opcion no identificada        "<<endl;

    EscojeOpcion();break;
  }
  cout<<"---------------------------"<<endl;

}

void Iniciar:: CargarPartida(string rutaArchivo)
{ifstream fileinput(rutaArchivo.c_str());

  string datoAux;

  int dato;

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

  vector<int>::iterator iterador;

  for(iterador=PartidaGuardada.begin(); iterador!=PartidaGuardada.end();iterador++)
  {
    outputfile<<*iterador<<endl;
  }
  outputfile.close();
  }
   
