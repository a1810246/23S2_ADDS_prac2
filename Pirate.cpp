#include"Pirate.h"

Pirate::Pirate() : Move("Pirate")
{

}

void Pirate::compare(Move* move)
{
    if(move->getName() == "Robot" || move->getName() == "Monkey")
    {
        flag = 1;
    }
    /*if(move->getName() == "Pirate")
    {
        flag = 2;
    }*/
}