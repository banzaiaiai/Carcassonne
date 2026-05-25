#ifndef BOARD_HPP
#define BOARD_HPP
#include "model/logic/Tuile.h"
#include <list>
#include <mutex>
class Board{
    std::list<Tuile> listTuile;

    // Singleton
    static Board* instancePtr;
    static std::mutex mtx;
    Board();
    public : 
        ~Board();
        Board(const Board& obj) = delete;
        static Board* getInstance() {
            if (instancePtr == nullptr) {
                std::lock_guard<std::mutex> lock(mtx);
                if (instancePtr == nullptr) {
                    instancePtr = new Board();
                }
            }
            return instancePtr;
        }
       
};
#endif