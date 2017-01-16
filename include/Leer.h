#ifndef LEER_H
#define LEER_H


#include "Juego.h"


class Leer
{
    public:
        Leer(sf::RenderWindow& w): w(w){};
        std::string leer(std::string mensaje);



    protected:

    private:
        sf::RenderWindow& w;
        sf::Font fuente;

};

#endif // LEER_H
