#include "AST.h"


AST::AST(/*int tam*/) : Entidad("a_1.png","","","", rand()%1366, rand()%50)
{
    sprite.setRotation(180);
    sprite.setScale(0.6,0.6);
    vel=3 + rand()%4;
    //Constructor
}

void AST::procesar_evento(sf::Event)
{
}

sf::FloatRect AST::devolver_cuadrado()
{
        return sprite.getGlobalBounds();
}

void AST::accion(Juego&)
{
    sprite.move(0,vel);
    if (sprite.getPosition().y>768) sprite.setPosition(rand()%1366, rand()%100);
}

void AST::pintar(sf::RenderWindow& w)
{
    w.draw(sprite);
}
