#include "Pipe.hpp"

void Pipe::SpawnTopPipe(sf::RenderTarget& target)
{
    sf::Sprite sprite;
    sf::Texture topPipeText;
    if(!topPipeText.loadFromFile("C:\\Users\\Vaibh\\Documents\\myproj\\build\\images\\flappy_bird_assests\\sprites\\pipe-green-up.png"))
    {
        std::cout << "Error[Up]" << std::endl;
    }
    sprite.setTexture(topPipeText);
    sprite.setPosition(target.getSize().x, 0.0f);
    sprite.setColor(sf::Color::Black);
    spritePipes.push_back(sprite);
}

void Pipe::SpawnBottomPipe(sf::RenderTarget& target)
{
    sf::Sprite sprite;
    sf::Texture bottomPipeText;
    bottomPipeText.loadFromFile("C:\\Users\\Vaibh\\Documents\\myproj\\build\\images\\flappy_bird_assests\\sprites\\pipe-green.png");
    sprite.setTexture(bottomPipeText);
    sprite.setPosition(target.getSize().x, target.getSize().y - sprite.getGlobalBounds().height);
    sprite.setColor(sf::Color::Black);
    spritePipes.push_back(sprite);
}

void Pipe::Movepipes()
{
    for (int i = 0; i < this->spritePipes.size(); i++)
    {
        sf::Vector2f position = spritePipes[i].getPosition();
        spritePipes[i].move(-PIPE_MOVEMENT_SPEED, 0.0f);
    }
}

void Pipe::DrawPipes(sf::RenderTarget& target)
{
    for (int i = 0; i < this->spritePipes.size(); i++)
    {
        target.draw(spritePipes[i]);
    }
    
}

Pipe::Pipe(/* args */)
{

}

Pipe::~Pipe()
{

}
