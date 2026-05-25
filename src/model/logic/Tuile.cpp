#include "model/logic/Tuile.h"

Tuile::Tuile(std::string name,std::list<BoardType> bord,BoardType center)
{
    this->name = name;
    this->listBord = bord;
    this->center = center;
}

Tuile::~Tuile()
{

}
