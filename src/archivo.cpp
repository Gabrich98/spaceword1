#include "Archivo.h"
#include <iostream>
#include <fstream>
#include <string.h>
Archivo::Archivo()
{
    //ctor
}

int Archivo::leer_archivo(){

    ofstream archi_l ("Puntaje.dat", ios::Binary)
    archi_l.read(punta);
    return punta

}

void Archivo::escribir_archivo(int p){

    ifstream archi_e ("Puntaje.dat", ios::Binary);
    archi_e.write(p)


}
