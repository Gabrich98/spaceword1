#ifndef JUEGO_H
#define JUEGO_H
#include <SFML/Graphics.hpp>
#include "Nave.h"
#include "AST.h"
#include "Bala.h"
#include "Puntaje.h"
#include "Leer.h"
#include <vector>
#include <list>
#include "Entidad.h"


using namespace std;
class Juego
{
    public:
        Juego(sf::RenderWindow&);
        void loop();
        void disparar(sf::Vector2f);
        void game_over();
        bool vivo;
        AST* colision_con_asteroide(sf::FloatRect);
        AST* colision_con_nave(sf::FloatRect);

    protected:
        int nivel;

    private:
        int puntaje;
        int contador;
        void pintar(sf::RenderWindow&);
        Nave nave;
        Puntaje p;
        Leer l;
        sf::RenderWindow& window;
        sf::Font fuente;
        list<Bala*> balas;
        list<AST*> AST_V;
        typedef list<Bala*>::iterator ibalas;
        typedef list <AST*>::iterator iast;
};

#endif // JUEGO_H
