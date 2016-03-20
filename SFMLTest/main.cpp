#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "ResourcePath.hpp"
#include "CrossSprite.hpp"

int main(int argc, char** argv)
{
    std::vector<CrossSprite> crossSpriteVector;
    
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    window.setFramerateLimit(60);
    
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            
            if(event.type == sf::Event::MouseButtonPressed)
            {
                if(event.mouseButton.button == sf::Mouse::Left)
                {
                    CrossSprite sprite(event.mouseButton.x, event.mouseButton.y);
                    crossSpriteVector.push_back(sprite);
                }
            }

            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }
        
        // Clear screen
        window.clear();
        
        for(int i = 0; i < crossSpriteVector.size(); ++i)
        {
            window.draw(crossSpriteVector.at(i).getSprite());
            crossSpriteVector.at(i).rotateSprite(3.0);
        }

        // Update the window
        window.display();

    }

    return EXIT_SUCCESS;
}
