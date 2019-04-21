//Hecho por Carlos Alfonso Lemus Rodezno

//Archivo que define los metodos de la clase raiz

#include <iostream> //libreria estandar necesaria para todo programa en consola de c++
#include <windows.h> //libreria necesaria para utilizar sus funciones
#include "clases.h" //encabezado que permite usar los metodos del archivo clases

using namespace std; //espacio a usar es el std, nos permite abreviar el codigo

//definicion de los metodos de la clase raiz

void Raiz::setSuelo(string s)
{
    this->suelo = s;
}

string Raiz::getSuelo()
{
    return this->suelo;
}

void Raiz::setTipoRaiz(string tr)
{
    this->tipoR = tr;
}

string Raiz::getTipoRaiz()
{
    return this->tipoR;
}

void Raiz::setProfunR(float p)
{
    this->profund = p;
}

float Raiz::getProfunR()
{
    return this->profund;
}
