#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>
#include "Game.hpp"


int main(){
    printf("Hello\n");
    Game game;

    while(game.getWinOpened()){
        game.Update();

        game.Render();
    }

    return 0;
}