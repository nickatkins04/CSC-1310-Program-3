#include <iostream>
#include <string>
#include "Pokemon.h"

using namespace std;

Pokemon::Pokemon()
{
    string n, t, a;
    int idN;

    name = n;
    idNum = idN;
    type = t;
    ability = a;
}

Pokemon::~Pokemon()
{

}

void Pokemon::setName(string name)
{
    this->name = name;
}

void Pokemon::setIdNum(int idNum)
{
    this->idNum = idNum;
}

void Pokemon::setType(string type)
{
    this->type = type;
}

void Pokemon::setAbility(string ability)
{
    this->ability = ability;
}

string Pokemon::getName()
{
    return name;
}

int Pokemon::getIdNum()
{
    return idNum;
}

string Pokemon::getType()
{
    return type;
}

string Pokemon::getAbility()
{
    return ability;
}