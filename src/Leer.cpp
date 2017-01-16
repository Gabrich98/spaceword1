#include "Leer.h"


 Leer::Leer(sf::RenderWindow& w) : w(w)
 {
     fuente.loadFromFile("letra.ttf");
 }

 std::string Leer::leer(std::string mensaje) {

        std::string buffer;

        sf::Text t1;
        sf::Text t2;

        t1.setFont(fuente);
        t2.setFont(fuente);

        t1.setString(mensaje);
        t1.setCharacterSize(48);
        t2.setCharacterSize(32);
        t1.setPosition(128,400);
        t2.setPosition(128,512);

        int i = 0;
        bool cursor = false;
        while(w.isOpen()) {
            sf::Event event;
            while (w.pollEvent(event)) {
                switch (event.type) {
                    case sf::Event::KeyPressed:
                        switch (event.key.code) {
                            case sf::Keyboard::Return:
                                w.close();
                                if (buffer != "") return buffer;
                            break;
                            case sf::Keyboard::BackSpace:
                                if (buffer.size() > 0) buffer.pop_back();
                            break;
                        }
                    break;
                    case sf::Event::TextEntered:
                        if (event.text.unicode >= 32 && event.text.unicode < 128) {
                            buffer.push_back((char)event.text.unicode);
                        }
                    break;
                }
            }
            if (i == 10) {
                i = 0;
                cursor = !cursor;
            }
            i++;

            std::string c = "";
            if (cursor) c = "_";
            t2.setString(buffer + c);

            w.clear(sf::Color::Black);
            w.draw(t1);
            w.draw(t2);
            w.display();
        }
        return buffer;
    };



