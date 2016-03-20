#include "CrossSprite.hpp"
#include <SFML/Graphics.hpp>
#include "ResourcePath.hpp"
#include <iostream>

CrossSprite::CrossSprite(int x, int y)
{
    m_texture.loadFromFile(resourcePath() + "Cross.png");
    
    m_origin.x = m_texture.getSize().x / 2;
    m_origin.y = m_texture.getSize().y / 2;
    
    m_position.x = x;
    m_position.y = y;
    
    m_sprite.setPosition(x, y);
    m_sprite.setOrigin(m_origin);
    
}

sf::Vector2f CrossSprite::getPosition()
{
    return m_position;
}

sf::Vector2f CrossSprite::getOrigin()
{
    return m_origin;
}

sf::Sprite CrossSprite::getSprite()
{
    m_sprite.setTexture(m_texture);
    return m_sprite;
}

void CrossSprite::rotateSprite(float rotateAmount)
{
    m_sprite.rotate(rotateAmount);
}