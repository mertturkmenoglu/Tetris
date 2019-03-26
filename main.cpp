/*
 * Tetris Game
 * 
 * Start date: March 26, 2019 23:18 (GMT+3)
 * End date: ???
 * 
 * Original content: https://www.youtube.com/watch?v=zH_omFPqMO4
 * To compile and run:
 * g++ -c main.cpp
 * g++ main.o -o tetris -lsfml-graphics -lsfml-window -lsfml-system
 * ./tetris
 */

#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 600), "TETRIS");

    sf::Texture texture;
    texture.loadFromFile("images/tiles.png");
    
    sf::Sprite sprite(texture);

    // Game loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::White);
        window.draw(sprite);
        window.display();
    }
    
    return EXIT_SUCCESS;
}