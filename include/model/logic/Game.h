#ifndef GAME_HPP
#define GAME_HPP

#include <mutex>
#include "model/logic/Player.h"
#include <list>
class Game {
    std::list<PLayer*> listPlayer;
    PLayer* actualPlayer;

    // Singleton
    static Game* instancePtr;
    static std::mutex mtx;
    Game();
    public:
        ~Game();
        Game(const Game& obj) = delete;
        static Game* getInstance() {
            if (instancePtr == nullptr) {
                std::lock_guard<std::mutex> lock(mtx);
                if (instancePtr == nullptr) {
                    instancePtr = new Game();
                }
            }
            return instancePtr;
        }
        void startGame(int nbPlayer);
};
#endif