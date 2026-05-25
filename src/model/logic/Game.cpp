#include "model/logic/Game.h"
#include "model/logic/Player.h"
#include <SFML/Graphics/Color.hpp>
Game::Game(){
    
}
Game::~Game(){

}

void Game::startGame(int nbPlayer){
    listPlayer = {};
    for (int i=0 ; i<nbPlayer ; i++){
        PLayer* tmpPlayer = new PLayer(sf::Color::Black);
        listPlayer.push_back(tmpPlayer);
    }
    actualPlayer=listPlayer.front();

}