#include <iostream>
#include "Pokemon.h"
#include "Tree.h"

using namespace std;

int main()
{
    int input1, input2, selection, pokemonIDNum; 
    string pokemonName, pokemonType, pokemonAbility;

    Pokemon obj;
	Tree pokedex;

    cout << "\n\nWelcome to the beautiful region of Kanto!\n";
    cout << "As a young Pokemon trainer, you're going to want this.\n\n";
    cout << "Press anything, then enter.\n";

    cin >> input1;

    cout << "\n\nYou obtained a POKEDEX!\n\n";

    cout << "This will give you a place to log the Pokemon you cross paths with.\n\n";

    cout << "Now, off on your way you go!\n";
    cout << "Be safe, and have a wonderful time getting to know the creatures this region has to offer!\n\n\n";

    cout << "Press anything, then enter.\n";

    cin >> input2;

    
    system("CLS");

    cout << "\n\nWelcome to your Pokedex!\n\n";
    cout << "Here, you can enter the name, number index (ID Number), type, and ability of the Pokemon you just caught.\n";
    cout << "What would you like to do?\n\n";
    cout << "1. Add a Pokemon.\n";
    cout << "2. Delete a Pokemon.\n";
	cout << "3. Display pokemon entry.\n";
    cout << "4. Display entire list of Pokemon.\n\n";

    cin >> selection;

    cout << endl << endl;
    
    switch (selection)
    {
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
		
		case 2:
			cout << "Enter ID NUMBER of the Pokemon you would like to delete:";
			cin >> pokemonIDNum;
			pokedex.remove(pokemonIDNum);

		case 3:
			cout << "Enter ID NUMBER of the Pokemon entry you would like to see:";
			cin >> pokemonIDNum;
			pokedex.printNode(pokemonIDNum);

		case 4:
			pokedex.displayInOrder();
    }

	return 0;
}