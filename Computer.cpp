#include"Computer.h"
#include"Player.h"
#include"Rock.h"

Computer::Computer() : Player("Computer")
{

}

Computer::COmputer(std::string name) : Player(name)
{

}

Move* COmputer::makeMove()
{
    return new Rock();
}