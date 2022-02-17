#pragma once
#include <SFML/Graphics.hpp>


class Player
{
private:
    sf::Sprite sprite;
    sf::Texture texture;

    void initPlayer();
    void initTexture();

public:
    Player();
    ~Player();

};

