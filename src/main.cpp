#include <SFML/Graphics.hpp>
#include <iostream>
#include <list>
#include <mutex>
#include "model/logic/Board.h"
#include "model/logic/Game.h"
#include "model/logic/Tuile.h"

// Singelton Board
Board* Board::instancePtr = nullptr;
Game* Game::instancePtr = nullptr;
std::mutex Board::mtx;
std::mutex Game::mtx;

// Var global
int NB_PLAYER = 5;


int main()
{
	//Instance singelton Board
	Board* board = Board::getInstance();
	Game* game = Game::getInstance();
	game->startGame(NB_PLAYER);

	sf::RenderWindow window( sf::VideoMode( { 200, 200 } ), "SFML works!" );
	sf::CircleShape shape( 100.f );
	shape.setFillColor( sf::Color::Green );
	std::list<BoardType> testList = {road,road,road,road};
	Tuile tuile =  Tuile("teste",testList,road);
	std::cout << tuile.getName() << std::endl;
	while ( window.isOpen() )
	{
		while ( const std::optional event = window.pollEvent() )
		{
			if ( event->is<sf::Event::Closed>() )
				window.close();
		}

		window.clear();
		window.draw( shape );
		window.display();
	}
}
