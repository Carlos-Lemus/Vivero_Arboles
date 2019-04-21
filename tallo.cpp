//Hecho por Carlos Alfonso Lemus Rodezno

//Archivo que define los metodos de la clase tallo

#include <iostream> //libreria estandar necesaria para todo programa en consola de c++
#include <cstring> //libreria necesaria para utilizar sus funciones
#include "clases.h" //encabezado que permite usar los metodos del archivo clases

using namespace std; //espacio a usar es el std, nos permite abreviar el codigo

//definicion de los metodos de la clase Tallo

void Tallo::setTipoTa(string ttallo)
{
    this->tipoTallo = ttallo;
}

string Tallo::getTipoTa()
{
    return this->tipoTallo;
}

void Tallo::setlongT(float lt)
{
    this->longTallo = lt;
}

float Tallo::getlongT()
{
    return this->longTallo;
}

void Tallo::setAnchTa(float anchot)
{
    this->anchoTallo = anchot;
}

float Tallo::getAnchTa()
{
    return this->anchoTallo;
}
