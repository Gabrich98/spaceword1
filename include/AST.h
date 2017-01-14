#ifndef AST_H
#define AST_H

#include <Entidad.h>

class Juego;

class AST : public Entidad
{
    public:
        AST();
        void procesar_evento(sf::Event);
        void pintar(sf::RenderWindow&);
        void accion(Juego&);
        sf::FloatRect devolver_cuadrado();

    protected:

    private:
        int vel;
};

#endif // AST_H
