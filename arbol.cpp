//Hecho por Carlos Alfonso Lemus Rodezno

//Archivo que define los metodos de la clase Arbol

#include <iostream> //libreria estandar necesaria para todo programa en consola de c++
#include <windows.h> //libreria necesaria para utilizar sus funciones
#include "clases.h" //encabezado que permite usar los metodos del archivo clases

using namespace std; //espacio a usar es el std, nos permite abreviar el codigo

//definicion de los metodos de la clase Arbol

Arbol::Arbol() //Constructor
{
    raiz = new Raiz(); //Reserva espacio en la memoria

    tallo = new Tallo(); //reserva espacio en la memoria
}


Arbol::~Arbol() //Destructor
{
    delete raiz; //reserva espacio en la memoria

    delete tallo; //reserva espacio en la memoria
}


void Arbol::setRaiz(string sr, string tr, float pr)
{
    this->raiz->setSuelo(sr);

    this->raiz->setTipoRaiz(tr);

    this->raiz->setProfunR(pr);
}

void Arbol::setTallo(string tp, float lt, float ancht)
{
    this->tallo->setTipoTa(tp);

    this->tallo->setlongT(lt);

    this->tallo->setAnchTa(ancht);
}

void Arbol::setHoja(float l, string f, string u)
{
    this->hoja.setlongH(l);

    this->hoja.setf(f);

    this->hoja.setUso(u);
}


void Arbol::setnom(string nom)
{
    this->nombre = nom;
}

string Arbol::getnom()
{
    return this->nombre;
}

void Arbol::setnomcien(string NC)
{
    this->NomCien = NC;
}

string Arbol::getnomcien()
{
    return this->NomCien;
}

void Arbol::setfamilia(string fam)
{
    this->familia = fam;
}

string Arbol::getfamilia()
{
    return this->familia;
}

void Arbol::setAmb(string a)
{
    this->ambiente = a;
}

string Arbol::getAmb()
{
    return this->ambiente;
}

void Arbol::setTamArbol(float ta)
{
    this->TamArbol = ta;
}

float Arbol::getTamArbol()
{
    return this->TamArbol;
}
