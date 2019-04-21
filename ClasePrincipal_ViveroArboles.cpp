//Hecho por Carlos Alfonso Lemus Rodezno

//Archivo que define los metodos de la clase raiz

#include <iostream> //libreria estandar necesaria para todo programa en consola de c++
#include <windows.h> //libreria necesaria para utilizar sus funciones
#include <stdio.h> //libreria necesaria para utilizar sus funciones
#include <cstring> //libreria que nos permite manejar y manipular cadenas de texto
#include "clases.h" //encabezado que permite usar las clases y metodos del archivo clases

using namespace std; //espacio a usar es el std, nos permite abreviar el codigo

int main()
{

	Factory *fac = new Factory(); //reserva espacio en la memoria

	fac->CrearArboles(); //metodo en donde se ejecutra todo el programa

	delete fac; //se libera espacio en la memoria

	system("pause");
	return 0;
}





