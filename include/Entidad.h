#ifndef ENTIDAD_H
#define ENTIDAD_H

#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

class Juego;

class Entidad
{
    public:
        Entidad(string obj1, string obj2, string obj3, string obj4, int x, int y);
        virtual void procesar_evento(sf::Event) = 0;
        virtual void accion(Juego&) = 0;
        virtual void pintar(sf::RenderWindow&) = 0;
        bool vivir();
        void matar();

    protected:
        sf::Texture o1;
        sf::Texture o2;
        sf::Texture o3;
        sf::Texture o4;

        sf::Sprite sprite;
        sf::Sprite sprite1;
        sf::Sprite sprite2;
        sf::Sprite sprite3;

    private:
        bool esta_vivo;
};

#endif // ENTIDAD_H
