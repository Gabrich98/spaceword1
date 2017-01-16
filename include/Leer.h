#ifndef LEER_H
#define LEER_H
#include <SFML/Graphics.hpp>



class Leer
{
    public:
        Leer(sf::RenderWindow& w);
        std::string leer(std::string mensaje);



    protected:

    private:
        sf::RenderWindow& w;
        sf::Font fuente;

};

#endif // LEER_H
