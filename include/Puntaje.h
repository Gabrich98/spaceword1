#ifndef PUNTAJE_H
#define PUNTAJE_H
#include <iostream>
#include <string>
#include <nave.h>


class Puntaje
{
    public:
        Puntaje();
        Puntaje(std::istream& l);
        Puntaje(std::string p_nombre, int p_puntaje);
        void leer(std::istream&);
        void guardar(std::ostream&);
        std::string GetNombre();
        int GetPuntaje();

    protected:

    private:
        std::string nombre;
        int punta;
};

#endif // PUNTAJE_H
