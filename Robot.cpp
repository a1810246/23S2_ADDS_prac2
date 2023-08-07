#include "Robot.h"

Robot::Robot(): Move("Robot")
{

}

void Robot::compare(Move* move)
{
    if(move->getName() == "Ninja" || move->getName() == "Zombie")
    {
        flag = 1;
    }
    /*if(move->getName() == "Robot")
    {
        flag = 2;
    }*/
}