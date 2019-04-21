#include <iostream> //libreria estandar necesaria para todo programa en consola de c++
#include <windows.h> //libreria necesaria para utilizar sus funciones
#include <cstring>
#include <stdio.h>
#include "clases.h" //encabezado que permite usar los metodos del archivo clases

using namespace std; //espacio a usar es el std, nos permite abreviar el codigo

Factory::Factory() //constructor que inicializa los el arreglo de arboles en null
{

    //se inicializa los 20 arboles en null
	for(int i = 0; i < 19; i++)
	{
		arbol[i] = NULL;
	}

}

Factory::~Factory() //libera los espacios en la memoria ocupado por los arboles
{
	//se libera los espacio que ocupan los 20 arboles
	for(int i = 0; i < 19; i++)
	{
		 delete arbol[i];
	}

}

void Factory::CrearArboles()
{

	do { //ciclo que permite la continuidad del programa

		system("color 4A"); //funcion que le da color al texto y fondo de la consola

		do { //ciclo para evitar el ingreso de datos incorrectos en el programa

			clear(); //funcion que limpia el texto de la consola

			texto (1);

            gotoxy(48, 12); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "1.Ingresar Arbol" << endl;
            gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "2.Mostrar Arboles" << endl;
            gotoxy(48, 14); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "3.Buscar Arbol" << endl;
            gotoxy(48, 15); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "4.Eliminar Arbol" << endl;
            gotoxy(48, 16); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "5.Salir" << endl;

            gotoxy(48, 18); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "Ingrese una opcion: ";
            cin >> opcion;
			ErrorDato(); //funcion que evita datos erroneos

		} while (opcion < 1 || opcion > 5 || opcion == cin.fail());

		switch(opcion)
		{
			case 1:

                indice = ArbolVacio();
				IngresarArbol(); //metodo para ingresar arboles
				break;

			case 2:

				MostrarArboles(); //metodo para	mostrar arboles
				break;

			case 3:

				BuscarArboles(); //metodo que busca un arbol en el vivero
				break;

			case 4:

				EliminarArbol(); //metodo para eliminar arboles
				break;

			case 5:

				clear(); //funcion que limpia el texto de la consola

				gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
           		cout << "Esta Saliendo del programa" << endl << endl;
				system("pause");
				break;
		}

	} while (opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4);
}

//metodo que ingresa los datos de los arboles
void Factory::IngresarArbol()
{
 	if (lleno())
	{

		/* las variables string no poesen un ciclo que evite errores debido a que los string aceptan todos
		  los caracteres */

		arbol[indice] = new Arbol(); //se reserva espacio en la memoria

        clear(); //funcion que limpia la pantalla de la consola de los texto

        texto(2); //funcion que imprime texto

        gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
        cout << "Ingresa El nombre del arbol: ";
        fflush(stdin); //funcion que limpia el buffer
        cin >> nombre;


			do { //ciclo que evita el ingreso de un dato erroneo

				clear(); //funcion que limpia la pantalla de la consola de los texto

				texto(2); //funcion que imprime texto

				gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
				cout << "Ingresa la profundidad de la raiz: ";
				fflush(stdin); //funcion que limpia el buffer
				cin >> profund;
				ErrorDato(); //funcion utilizado para evitar el ingreso de datos erroneo

			} while(profund == cin.fail());

			do { //ciclo que evita el ingreso de un dato erroneo

				clear(); //funcion que limpia la pantalla de la consola de los texto

				texto(2); //funcion que imprime texto

				gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
				cout << "Ingresa la longitud del tallo: ";
				fflush(stdin); //funcion que limpia el buffer
				cin >> longTallo;
				ErrorDato(); //funcion utilizado para evitar el ingreso de datos erroneo

			} while(longTallo == cin.fail());

			do { //ciclo que evita el ingreso de un dato erroneos

				clear(); //funcion que limpia la pantalla de la consola de los texto

				texto(2); //funcion que imprime texto

				gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
				cout << "Ingresa el ancho del tallo: ";
				fflush(stdin); //funcion que limpia el buffer
				cin >> anchoTallo;
				ErrorDato(); //funcion utilizado para evitar el ingreso de datos erroneo

			} while(anchoTallo == cin.fail());

			do { //ciclo que evita el ingreso de un dato erroneo

				clear(); //funcion que limpia la pantalla de la consola de los texto

				texto(2); //funcion que imprime texto

				gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
				cout << "Ingresa la longitud de la hoja: ";
				fflush(stdin); //funcion que limpia el buffer
				cin >> longHoja;
				ErrorDato(); //funcion utilizado para evitar el ingreso de datos erroneo

			} while(longHoja == cin.fail());

			do { //ciclo que evita el ingreso de un dato erroneo

				clear(); //funcion que limpia la pantalla de la consola de los texto

				texto(2); //funcion que imprime texto

				gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
				cout << "Ingresa la longitud del Arbol: ";
				fflush(stdin); //funcion que limpia el buffer
				cin >> TamArbol;
				ErrorDato(); //funcion utilizado para evitar el ingreso de datos erroneo

			} while(TamArbol == cin.fail());

			clear(); //funcion que limpia la pantalla de la consola de los texto

			texto(2); //funcion que imprime texto

			gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
			cout << "Ingresa el nombre cientifio del arbol: ";
			fflush(stdin); //funcion que limpia el buffer
			cin >> NomCien;

			clear(); //funcion que limpia la pantalla de la consola de los texto

			texto(2); //funcion que imprime texto

			gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
			cout << "Ingresa La familia del arbol: ";
			fflush(stdin); //funcion que limpia el buffer
			cin >> familia;

			clear(); //funcion que limpia la pantalla de la consola de los texto

			texto(2); //funcion que imprime texto

			gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
			cout << "Ingresa el ambiente del arbol: ";
			fflush(stdin); //funcion que limpia el buffer
			cin >> ambiente;

			clear(); //funcion que limpia la pantalla de la consola de los texto

			texto(2); //funcion que imprime texto

			gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
			cout << "Ingresa el tipo de suelo: ";
			fflush(stdin); //funcion que limpia el buffer
			cin >> suelo;

			clear(); //funcion que limpia la pantalla de la consola de los texto

			texto(2); //funcion que imprime texto

			gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
			cout << "Ingresa el tipo de raiz: ";
			fflush(stdin); //funcion que limpia el buffer
			cin >> tipoR;

			clear(); //funcion que limpia la pantalla de la consola de los texto

			texto(2); //funcion que imprime texto

			gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
			cout << "Ingresa el tipo de tallo: ";
			fflush(stdin); //funcion que limpia el buffer
			cin >> tipoTallo;

			clear(); //funcion que limpia la pantalla de la consola de los texto

			texto(2); //funcion que imprime texto

			gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
			cout << "Ingresa la forma de la hoja: ";
			fflush(stdin); //funcion que limpia el buffer
			cin >> forma;

			clear(); //funcion que limpia la pantalla de la consola de los texto

			texto(2); //funcion que imprime texto

			gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
			cout << "Ingresa el uso de la hoja: ";
			fflush(stdin); //funcion que limpia el buffer
			cin >> uso;


			//*******************************************************************************

			//Ingreso de datos al objeto

			arbol[indice]->setRaiz(suelo, tipoR, profund);
			arbol[indice]->setTallo(tipoTallo, longTallo, anchoTallo);
			arbol[indice]->setHoja(longHoja, forma, uso);
			arbol[indice]->setnom(nombre);
			arbol[indice]->setnomcien(NomCien);
			arbol[indice]->setfamilia(familia);
			arbol[indice]->setAmb(ambiente);
			arbol[indice]->setTamArbol(TamArbol);

			system("pause");

	}

	else {

		clear(); //funcion que limpia la pantalla de la consola de los texto

		texto(2); //funcion que imprime texto

		gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
		cout << "Ya no hay espacio en el Vivero de Arboles" << endl;

		system("pause");

	}
}

void Factory::MostrarArboles() //metodo que mostrara los objetos del tipo arbol disponible
{

	clear(); //funcion que limpia la pantalla de la consola de los texto

	texto(3); //funcion que imprime texto

	if(vacio())
	{
		for(int i = 0; i < 20; i++)
		{
			if(arbol[i] != NULL) //si el objeto arbol es nulo se ejecutara el bloque else
			{

				cout << "\n\t\t\t\tNombre de arbol: " << arbol[i]->getnom() << endl;
				cout << "\t\t\t\tNombre cientifico: " << arbol[i]->getnomcien() << endl;
				cout << "\t\t\t\tFamilia del arbol: " << arbol[i]->getfamilia() << endl;
				cout << "\t\t\t\tAmbiente: " << arbol[i]->getAmb() << endl;
				cout << "\t\t\t\tLongitud del arbol: " << arbol[i]->getTamArbol() << endl;
				cout << "\t\t\t\tTipo del suelo de la raiz: " << arbol[i]->raiz->getSuelo() << endl;
				cout << "\t\t\t\tTipo de raiz: " << arbol[i]->raiz->getTipoRaiz() << endl;
				cout << "\t\t\t\tProfundidad de la raiz: " << arbol[i]->raiz->getProfunR() << endl;
				cout << "\t\t\t\tTipo de tallo: " << arbol[i]->tallo->getTipoTa() << endl;
				cout << "\t\t\t\tLongitud del tallo: " << arbol[i]->tallo->getlongT() << endl;
				cout << "\t\t\t\tAncho de tallo: " << arbol[i]->tallo->getAnchTa() << endl;
				cout << "\t\t\t\tLongitud de la hoja: " << arbol[i]->hoja.getlongH() << endl;
				cout << "\t\t\t\tForma de la hoja: " << arbol[i]->hoja.getforma() << endl;
				cout << "\t\t\t\tUso de la hoja: " << arbol[i]->hoja.getUso() << endl << endl;

			}
		}
	}

	else //si el arbol es null mostrara un mensaje
	{
		clear(); //funcion que limpia la pantalla de la consola de los texto

		texto(3); //funcion que imprime texto

		gotoxy(53, 12); //funcion que mueve un texto a cualquier lugar de la pantalla
		cout << "No hay registros" << endl;

	}

	system("pause");

}

void Factory::BuscarArboles() //metodo que busca un arbol en el arreglo de tipo arbol
{
	clear(); //funcion que limpia la pantalla de la consola de los texto

	texto(4); //funcion que imprime texto

	if(vacio())
	{
	    int ContArbol = 0; //contador de tipos de arboles
        bool verificar2 = false;

		gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
		cout << "Ingresa El nombre del arbol: ";
		fflush(stdin); //funcion que limpia el buffer
		cin >> nombre;
        ErrorDato(); //funcion que evita datos erroneos

		for(int i = 0; i < 20; i++)
		{
			/*si la condicion se cumple y el elemento del arreglo arbol evaluado es null
		    continue detiene la iteracion actual y se salta a la siguiente*/
		    if(arbol[i] == NULL)
            {
                continue;
            }

            /*el metodo compare compara dos cadenas string y devuelve cero si son iguales
            debido a esto la funcion se ejecutara si es distinto a cero*/
			if(!(arbol[i]->getnom().compare(nombre)))
			{

                ContArbol++;

                verificar2 = true;

                cout << "\n\t\t\t\tNombre de arbol: " << arbol[i]->getnom() << endl;
				cout << "\t\t\t\tNombre cientifico: " << arbol[i]->getnomcien() << endl;
				cout << "\t\t\t\tFamilia del arbol: " << arbol[i]->getfamilia() << endl;
				cout << "\t\t\t\tAmbiente: " << arbol[i]->getAmb() << endl;
				cout << "\t\t\t\tLongitud del arbol: " << arbol[i]->getTamArbol() << endl;
				cout << "\t\t\t\tTipo del suelo de la raiz: " << arbol[i]->raiz->getSuelo() << endl;
				cout << "\t\t\t\tTipo de raiz: " << arbol[i]->raiz->getTipoRaiz() << endl;
				cout << "\t\t\t\tProfundidad de la raiz: " << arbol[i]->raiz->getProfunR() << endl;
				cout << "\t\t\t\tTipo de tallo: " << arbol[i]->tallo->getTipoTa() << endl;
				cout << "\t\t\t\tLongitud del tallo: " << arbol[i]->tallo->getlongT() << endl;
				cout << "\t\t\t\tAncho de tallo: " << arbol[i]->tallo->getAnchTa() << endl;
				cout << "\t\t\t\tLongitud de la hoja: " << arbol[i]->hoja.getlongH() << endl;
				cout << "\t\t\t\tForma de la hoja: " << arbol[i]->hoja.getforma() << endl;
				cout << "\t\t\t\tUso de la hoja: " << arbol[i]->hoja.getUso() << endl << endl;



			}

		}

		//si verificar es true mostrara este mensaje al final del ciclo
		if(verificar2)
        {
            cout << "\t\t\t\tHay " << ContArbol << " arboles de " << nombre << endl << endl;

            system("pause");

            return;


        }

		//si no se encuentra el arbol deseado imprimira un mensaje

		gotoxy(53, 15); //funcion que mueve un texto a cualquier lugar de la pantalla
        cout << "No existe ese arbol" << endl;

	}

	else {

		gotoxy(53, 12); //funcion que mueve un texto a cualquier lugar de la pantalla
		cout << "No hay registros" << endl;
	}

    system("pause");
}

void Factory::EliminarArbol() //metodo que eliminara un objeto del arreglo de tipo arbol
{
    clear(); //funcion que limpia la pantalla de la consola de los texto

    texto(5); //funcion que imprime texto

	if(vacio())
	{

		gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
		cout << "Ingresa El nombre del arbol: ";
		fflush(stdin); //funcion que limpia el buffer
		//cin >> nombre;
		getline(cin,nombre);
		ErrorDato(); //funcion que evita datos erroneos


		for(int i = 0; i < 20; i++)
		{
		    /*si la condicion se cumple y el elemento del arreglo arbol evaluado es null
		    continue detiene la iteracion actual y se salta a la siguiente*/
		    if(arbol[i] == NULL)
            {
                continue;
            }

            /*el metodo compare compara dos cadenas string y devuelve cero si son iguales
            debido a esto la funcion se ejecutara si es distinto a cero*/
			if(!(arbol[i]->getnom().compare(nombre)))
			{

			    clear(); //funcion que limpia la pantalla de la consola de los texto

                texto(5); //funcion que imprime texto

				arbol[i] = NULL;

				gotoxy(48, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
				cout << "Se ha eliminado el arbol exitosamente" << endl;

				system("pause");

                return;

            }

		}

		//si no se encuentra el arbol deseado imprimira un mensaje

        gotoxy(53, 15); //funcion que mueve un texto a cualquier lugar de la pantalla
        cout << "No existe ese arbol" << endl;

	}

	else {

		gotoxy(53, 12); //funcion que mueve un texto a cualquier lugar de la pantalla
		cout << "No hay registros" << endl;

	}

	system("pause");
}

/*primero aclarar que este metodo solo se utilizara al momento de querer ingrear otro elemento en el arreglo arbol,
este metodo verificara cual es el primer elemento vacio en el arreglo una vez hallado retornara ese i que sera el indice de i
*/

int Factory::ArbolVacio()
{

	//ciclo que verificara el primer elemento del arreglo de tipo arbol que se null es decir que este vacio
	for(int i = 0; i < 20; i++)
	{
		//si el objeto arbol no es null entonces la funcion devolvera  true
		if (arbol[i] == NULL)
		{

            return i;

		}

	}

    return -1;
}

//metodo que verifica si hay un elemento en el arreglo arbol si es asi devolvera true
bool Factory::vacio()
{
	//ciclo que comprobara si el arreglo de arbol tiene algun elimento
	for(int i = 0; i < 20; i++)
	{
		//si el objeto arbol no es null entonces la funcion devolvera  true
		if (arbol[i] != NULL)
		{
			verificar = true;

			return verificar;
		}

		else {
			verificar = false;
		}

	}

	return verificar;
}

/* metodod lleno que verificara si un un arbol del arreglo es null de este modo si es asi entonces
significa que se puede crear otro objeto del arreglo arbol */
bool Factory::lleno()
{
	//ciclo que comprobara si el arreglo de arbol tiene algun elimento
	for(int i = 0; i < 20; i++)
	{
		//si el objeto arbol es null entonces la funcion devolvera true
		if (arbol[i] == NULL)
		{
			return true;
		}

	}

	return false;
}

//metodo que imprime texto
void Factory::texto(int opcion)
{
	gotoxy(48, 4); //funcion que mueve un texto a cualquier lugar de la pantalla
    cout << "*****************************" << endl;
    gotoxy(48, 5); //funcion que mueve un texto a cualquier lugar de la pantalla
    cout << "*                           *" << endl;
	gotoxy(48, 6); //funcion que mueve un texto a cualquier lugar de la pantalla
    cout << "*     VIVERO DE ARBOLES     *" << endl;
	gotoxy(48, 7); //funcion que mueve un texto a cualquier lugar de la pantalla
    cout << "*                           *" << endl;
    gotoxy(48, 8); //funcion que mueve un texto a cualquier lugar de la pantalla
    cout << "*****************************" << endl;

	switch(opcion)
		{

		case 1:

			gotoxy(42, 10); //funcion que mueve un texto a cualquier lugar de la pantalla
   			cout << "*** Vivero de un espacio para 20 Arboles ***" << endl;

			break;

		case 2:

			gotoxy(46, 10); //funcion que mueve un texto a cualquier lugar de la pantalla
   			cout << "*** Ingresa un Arbol al Vivero ***" << endl;

			break;

		case 3:

			gotoxy(44, 10); //funcion que mueve un texto a cualquier lugar de la pantalla
   			cout << "*** Listado de Arboles en el Vivero ***" << endl;

			break;

		case 4:

			gotoxy(47, 10); //funcion que mueve un texto a cualquier lugar de la pantalla
   			cout << "*** Busca un Arbol del Vivero ***" << endl;

			break;

		case 5:

			gotoxy(45, 10); //funcion que mueve un texto a cualquier lugar de la pantalla
   			cout << "*** Elimina un Arbol del Vivero ***" << endl;

			break;
	}
}


