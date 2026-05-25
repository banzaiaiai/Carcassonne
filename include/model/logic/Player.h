# ifndef PLAYER_HPP
# define PLAYER_HPP

#include "model/logic/Peont.h"
#include "model/logic/Position.h"
#include "model/logic/Tuile.h"
#include <SFML/Graphics/Color.hpp>
#include <list>
class PLayer {
    sf::Color couleur;
    std::list<Peont> peontPlay; 
    std::list<Peont> peontPlayable;
    Tuile* tuilePlayable; 

    // method
    void instancePeontPlayable();
    public: 
        PLayer(sf::Color couleur);
        ~PLayer();

        void PlaceTuile(Tuile tuile, Position position);
        void PlacePeont(Peont peont, int position);
        

};
# endif