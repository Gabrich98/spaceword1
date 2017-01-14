#include "Puntaje.h"
#include <iostream>
#include <string>
#include <nave.h>


Puntaje::Puntaje()
{
    //ctor
}

Puntaje::Puntaje(std::istream& l)
{
    leer(l);
}

Puntaje::Puntaje(std::string n, int p):nombre(n),punta(p)
{
    //Constructor
}
void Puntaje::leer(std::istream& l){
    nombre.clear();
    while(1)
    {
        char curr;
        l.read(&curr,sizeof(char));
        if(curr==0) break;
        nombre.push_back(curr);
    }
    l.read((char*)&punta,sizeof(int));
}


void Puntaje::guardar(std::ostream& l)
{
    for(std::string::iterator i=nombre.begin();i!=nombre.end();i++)
    {
        l.write((char*)&(*i), sizeof(char));
    }
    {
        char end=0;
        l.write(&end,sizeof(char));

    }
        l.write((char*)&punta,sizeof(int));
    }


std::string Puntaje::GetNombre()
{
    return nombre;
}

int Puntaje::GetPuntaje()
{
    return punta;
}
