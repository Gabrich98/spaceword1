#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <iostream>
#include <fstream>

class Archivo
{
    public:

        void  escribir_archivo();
        int leer_archivo();
        void set_pun(int p);
        Archivo();

    protected:

    private:

        std::string punta;

};


#endif // ARCHIVO_H
