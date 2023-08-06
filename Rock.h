#ifndef ROCK_H
#define ROCK_H

#include"Move.h"
class Rock : public Move
{
    public:
        Paper();
        void compare(Move* move);
};

#endif