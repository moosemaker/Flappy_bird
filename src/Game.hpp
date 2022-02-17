#pragma once
#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include <iostream>
#include "Pipe.hpp"

class Game
{
private:
    sf::RenderWindow window;
    sf::Event event;
    sf::Sprite bg;
    sf::Texture bgTexture;
    Pipe pipe;
    void initWindow();
    void setBG();
public:
    Game();
    ~Game();

    bool getWinOpened() {return window.isOpen();}
    void MainLoop();
    void Update();
    void Render();
};