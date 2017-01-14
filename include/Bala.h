#ifndef BALA_H
#define BALA_H

#include <Entidad.h>

class Juego;

class Bala : public Entidad
{
    public:
        Bala(sf::Vector2f& pos_ini);
        void procesar_evento(sf::Event);
        void accion(Juego&);
        void pintar(sf::RenderWindow&);

    protected:

    private:
};

#endif // BALA_H
