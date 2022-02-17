#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <vector>
#include <string>
#include <iostream>
#define PIPE_MOVEMENT_SPEED 10.0f


class Pipe
{
private:
    std::vector<sf::Sprite> spritePipes;
    
public:
    void SpawnTopPipe(sf::RenderTarget& target);
    void SpawnBottomPipe(sf::RenderTarget& target);
    void DrawPipes(sf::RenderTarget& target);
    void Movepipes();

    Pipe();
    ~Pipe();
   
};

