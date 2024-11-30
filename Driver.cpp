#include <iostream>
#include "Pokemon.h"
#include "Tree.h"

using namespace std;

int main()
{
    //declaring variables
    int selection, pokemonIDNum;
    string pokemonName, pokemonType, pokemonAbility;

    Pokemon obj;
    Tree pokedex;

    //intro dialogue
    cout << "\n\nYou obtained a POKEDEX!\n\n";

    cout << "This will give you a place to log the Pokemon you cross paths with.\n\n";

    cout << "Now, off on your way you go!\n\n";
    cout << "Be safe, and have a wonderful time getting to know the creatures this region has to offer!\n\n\n";

    cout << "\n\nWelcome to your Pokedex!\n\n";
    cout << "Here, you can enter the name, number index (ID Number), type, and ability of the Pokemon you just caught.\n";
    
    //user input menu
    do
    {
        cout << "What would you like to do?\n\n";
        cout << "1. Add a Pokemon.\n";
        cout << "2. Delete a Pokemon.\n";
        cout << "3. Display pokemon entry.\n";
        cout << "4. Display entire list of Pokemon.\n\n";
        cout << "5. Close Pokedex.\n";

        cin >> selection;

        cout << endl
             << endl;

        switch (selection)
        {
        //adding a pokemon
        case 1:
            cout << "Pokemon's NAME: ";
            cin >> pokemonName;
            obj.setName(pokemonName);

            cout << "\nPokemon's ID NUMBER: ";
            cin >> pokemonIDNum;
            obj.setIdNum(pokemonIDNum);

            cout << "\nPokemon's TYPE: ";
            cin >> pokemonType;
            obj.setType(pokemonType);

            cout << "\nPokemon's ABILITY: ";
            cin >> pokemonAbility;
            obj.setAbility(pokemonAbility);

            pokedex.insertNode(obj);

            break;
        //deleting a pokemon (by ID number)
        case 2:
            cout << "Enter ID NUMBER of the Pokemon you would like to delete:";
            cin >> pokemonIDNum;
            pokedex.remove(pokemonIDNum);
            
            break;
        //displaying information for a single pokemon
        case 3:
            cout << "Enter ID NUMBER of the Pokemon entry you would like to see:";
            cin >> pokemonIDNum;
            pokedex.printNode(pokemonIDNum);

            break;

        //displaying information for entire list of pokemon in order by ID number
        case 4:
            pokedex.displayInOrder();

            break;

        case 5:
            break;

        //input invalidation 
        default:
            cout << "This is not an option.\n";
        }
    } while (selection != 5);

    return 0;
}