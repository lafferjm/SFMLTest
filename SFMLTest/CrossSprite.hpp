#ifndef CrossSprite_hpp
#define CrossSprite_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

class CrossSprite
{
public:
    CrossSprite(int, int);
    sf::Vector2f getOrigin();
    sf::Vector2f getPosition();
    sf::Sprite getSprite();
    void rotateSprite(float);
private:
    sf::Sprite m_sprite;
    sf::Texture m_texture;
    sf::Vector2f m_position;
    sf::Vector2f m_origin;
};

#endif /* CrossSprite_hpp */
