#include "Paper.h"

Paper::Paper() : move("Paper")
{

}

void Paper::compare(Move* move)
{
    if(move->getName()=="Rock")
    {
        flag = 1;
    }
}