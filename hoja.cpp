//Hecho por Carlos Alfonso Lemus Rodezno

//Archivo que define los metodos de la clase hoja

#include <iostream> //libreria estandar necesaria para todo programa en consola de c++
#include <cstring> //libreria necesaria para utilizar sus funciones
#include "clases.h" //encabezado que permite usar los metodos del archivo clases

using namespace std; //espacio a usar es el std, nos permite abreviar el codigo

//definicion de los metodos de la clase Hoja

void Hoja::setlongH(float longH)
{
    this->longHoja = longH;
}

float Hoja::getlongH()
{
    return this->longHoja;
}

void Hoja::setf(string form)
{
    this->forma = form;
}

string Hoja::getforma()
{
    return this->forma;
}

void Hoja::setUso(string u)
{
    this->uso = u;
}

string Hoja::getUso()
{
    return this->uso;
}

