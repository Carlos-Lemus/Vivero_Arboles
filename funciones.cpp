//Hecho por Carlos Alfonso Lemus Rodezno

//Archivo que define las funciones void ErroDato(), void gotoxy(int x, int y) y void clear()

#include <iostream> //libreria estandar necesaria para todo programa en consola de c++
#include <windows.h> //libreria necesaria para utilizar sus funciones 
#include "clases.h" //encabezado que permite usar las funciones del archivo clases

using namespace std; //espacio a usar es el std, nos permite abreviar el codigo

//definicion de las funciones void ErroDato(), void gotoxy(int x, int y) y void clear()

void gotoxy(int x, int y) //funcion que que mueve un texto a cualquier lugar de la pantalla en un plano x,y
{
    //Estas instrucciones permiticra ubicar un texto en el lugar que se desee en la pantalla
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void ErrorDato() //metodo para evitar el ingreso de datos incorrectos
{
		//en caso de un error al ingresar un dato se mostrara un mensaje
		if(cin.fail())	
		{
			cout << "\n\n\t\t\t\t\tHas ingresado un dato erroneo vuelve a ingresarlo\n\n";

			system("pause");
		}

		//ciclo para evitar el ingreso de datos en el programa
		while(cin.fail())
		{
			cin.clear(); //limpia el buffer

			cin.ignore(1000, '\n'); //ignora los primeros 1000 caracteres ingresados
		}
}

void clear() //funcion que limpia el texto de la consola
{
	system("cls"); //funcion que limpia la pantalla
}
