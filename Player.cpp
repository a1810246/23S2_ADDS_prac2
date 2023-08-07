#include<iostream>
#include<string>

#include "Player.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"

using namespace std;

Player::Player()
{
    name = "";
}

Player::Player(string name):name(name){

}

string Player::getName()
{
    return name;
}

void Player::SetName(string name)
{
    this->name = name;
}

Move* Player::returnMove(string moveName)
{
    if(moveName == "Rock")
    {
        return new Rock();
    }
    else if(moveName == "Scissors")
    {
        return new Scissors();
    }
    else if(moveName == "Paper")
    {
        return new Paper();
    }
    else if(moveName == "Monkey")
    {
        return new Monkey();
    }
    else if(moveName == "Pirate")
    {
        return new Pirate();
    }
    else if(moveName == "Ninja")
    {
        return new Ninja();
    }
    else if(moveName == "Robot")
    {
        return new Robot();
    }

    //return nullptr;
}

