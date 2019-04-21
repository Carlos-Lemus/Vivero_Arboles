#ifndef CLASES_H
#define CLASES_H

#include <iostream> //libreria estandar necesaria para todo programa en consola de c++
#include <cstring> //libreria que nos permite manejar y manipular cadenas de texto

using namespace std; //espacio a usar es el std, nos permite abreviar el codigo

//*******	FUNCIONES *******

void ErrorDato(); ////declaracion de funcion que evita el ingreso de datos erroneos
void gotoxy(int x, int y); //declaracion de funcion que que mueve un texto a cualquier lugar de la pantalla en un plano x,y
void clear(); //funcion que limpia el texto de la consola

//=======	CLASES	========

class Raiz //clase raiz contiene los metodos que usara la clase arbol
{
    private:
        string suelo; //tipo de suelo de la raiz
        string tipoR; //tipo de raiz
        float profund; //profundidad de la raiz

	public:

		//cada atributo de la clase posee un metodo set para ingresar su valor y tambien un metodo get para retornar su valor

        void setSuelo(string s);
        string getSuelo();

        void setTipoRaiz(string tr);
        string getTipoRaiz();

        void setProfunR(float p);
        float getProfunR();

};

class Tallo //clase tallo contiene los metodos que usara la clase arbol
{
	private:
	    string tipoTallo; //tipo de tallo
		float longTallo; //longitud del tallo
		float anchoTallo; //anchura del tallo
	public:

		//cada atributo de la clase posee un metodo set para ingresar su valor y tambien un metodo get para retornar su valor

        void setTipoTa(string ttallo);
        string getTipoTa();

		void setlongT(float lt);
		float getlongT();

		void setAnchTa(float anchot);
		float getAnchTa();

};

class Hoja //clase hoja contiene los metodos que usara la clase arbol
{
	private:
		float longHoja; //longitud de la hoja
		string forma; //forma de la hoja
		string uso; //uso de la hoja


	public:

		//cada atributo de la clase posee un metodo set para ingresar su valor y tambien un metodo get para retornar su valor

		void setlongH(float longH);
		float getlongH();

		void setf(string form);
        string getforma();

        void setUso(string u);
        string getUso();

};

/* clase arbol que usa todos loes elementos de acceso publico de la clase raiz, clase tallo y de la
 clase hoja, utilizando lo que se conoce como relaciones de dependencia y  agregacion
 entre clases */
class Arbol
{
	public:

		string nombre; //nombre del arbol
		string NomCien; //Nombre cientifico del arbol
		string familia; //familiza del arbol
		string ambiente; //ambiente en que esta el arbol
		float TamArbol; //tama�o del arbol

        Raiz *raiz; //Dependencia
		Hoja hoja; //Agregacion
		Tallo *tallo; //Depedencia

		Arbol(); //Constructor
		~Arbol(); //Destructor

        //cada atributo de la clase posee un metodo set para ingresar su valor y tambien un metodo get para retornar su valor


        void setRaiz(string sr, string tr, float pr);

        void setTallo(string tp, float lt, float ancht);

		void setHoja(float l, string f, string u);


		void setnom(string nom);
		string getnom();

		void setnomcien(string NC);
		string getnomcien();

		void setfamilia(string fam);
		string getfamilia();

		void setAmb(string a);
		string getAmb();

		void setTamArbol(float ta);
		float getTamArbol();

};

//clase que se encargar de instanciar los objetos es decir de crearlos
class Factory
{
    private:

    	float profund;
		float longTallo;
		float anchoTallo;
		float longHoja;
		float TamArbol;
		string suelo;
        string tipoR;
		string tipoTallo;
		string forma;
		string uso;
		string nombre;
		string NomCien;
		string familia;
		string ambiente;

        int opcion; //permite elejir opciones del programa
        int indice = 0; //este sera el indice del elemnto del arreglo que se tome en el metodo ingresar
		int seguir; //almacena la opcion de seguir ingresando o elimando arboles del vivero

		//verificara si el arreglo de arbol es null para proceder a eliminar uno
		bool verificar;

		Arbol *arbol[20];

    public:

		Factory(); //construtor
		~Factory(); //destructor
        void CrearArboles(); //metodo que instanciara todos los objetos de tipo arbol y donde se ejecutara este programa
        void IngresarArbol();
        void MostrarArboles();
        void BuscarArboles();
        void EliminarArbol();
        int ArbolVacio();
        bool vacio();
        bool lleno();
        void texto(int opcion); //Metodo que imprime texto
};

#endif // CLASES_H


