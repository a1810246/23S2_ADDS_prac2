#ifndef SCISSORS_H
#define SCISOSRS_H

#include"Move.h"

class Scissors : public Move
{
    public:
        Scissors();
        void compare(Move* move);
};

#endif