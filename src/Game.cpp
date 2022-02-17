#include <SFML/Graphics.hpp>
#include "Game.hpp"


void Game::initWindow()
{
    window.create(sf::VideoMode(900, 700), "Flappy Bird", sf::Style::Titlebar | sf::Style::Close);
    window.setFramerateLimit(60);
}

void Game::setBG()
{
    if (!this->bgTexture.loadFromFile("C:\\Users\\Vaibh\\Documents\\myproj\\build\\images\\flappy_bird_assests\\sprites\\bgGood.png"))
    {
        std::cout << "Unable to load [Backgroung texture]" << std::endl;
    }
    this->bg.setTexture(bgTexture);
}


Game::Game()
{
    this->initWindow();
    this->Update();
    this->Render();
    this->setBG();
}

Game::~Game()
{

}


void Game::MainLoop()
{
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            window.close();
        }

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            pipe.SpawnTopPipe(this->window);
            pipe.SpawnBottomPipe(this->window);
        }
        
    }
}

void Game::Update()
{
    // Handles events
    pipe.Movepipes();
    MainLoop();
    
}

void Game::Render()
{
    window.clear();
    // render stuff
    window.draw(bg);
    pipe.DrawPipes(this->window);
    
    window.display();
}
