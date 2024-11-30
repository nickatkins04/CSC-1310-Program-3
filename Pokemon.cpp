#include <iostream>
#include <string>
#include "Pokemon.h"

using namespace std;

Pokemon::Pokemon()
{
    
}

Pokemon::Pokemon(string pokemonName, string pokemonType, string pokemonAbility, int pokemonIDNum)
{
    name = pokemonName;
    idNum = pokemonIDNum;
    type = pokemonType;
    ability = pokemonAbility;
}

Pokemon::~Pokemon()
{

}

void Pokemon::setName(string n)
{
    this->name = n;
}

void Pokemon::setIdNum(int idN)
{
    this->idNum = idN;
}

void Pokemon::setType(string t)
{
    this->type = t;
}

void Pokemon::setAbility(string a)
{
    this->ability = a;
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