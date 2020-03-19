#include "SFML/Graphics.hpp"

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(600,600), "kekeke");

    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}
