// include/Animal.h
#ifndef TUILE_HPP
#define TUILE_HPP

#include <list>
#include <string>

enum BoardType{
    road,
    field,
    town
};
class Tuile
{

    /* data */
    std::string name ;
    std::list<BoardType> listBord;
    BoardType center;
    public:
        Tuile(std::string name,std::list<BoardType> bord,BoardType center);
        ~Tuile();

        /* geteur*/
        std::string getName() {return this->name;}
};
#endif 
