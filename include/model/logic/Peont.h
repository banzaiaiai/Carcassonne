#ifndef PEONT_HPP
#define PEONT_HPP


#include "model/logic/Tuile.h"
class Peont{
    bool poser;
    Tuile* tuile;
    int nmPose;

    public:
        Peont();
        ~Peont();
};
#endif