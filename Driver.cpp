#include <iostream>
#include "Pokemon.h"
#include "Tree.h"

using namespace std;

int main()
{
    int selection; 

    cout << "Welcome to the beautiful region of Kanto!\n";
    cout << "As a young Pokemon trainer, you're going to want this.\n\n";

    cout << "You obtained a POKEDEX!\n\n";

    cout << "This will give you a place to log the Pokemon you cross paths with.\n\n";

    cout << "Now, off on your way you go!\n";
    cout << "Be safe, and have a wonderful time getting to know the creatures this region has to offer!\n\n\n";

    system("CLS");
    
    cout << "Welcome to your Pokedex!\n\n";
    cout << "Here, you can enter the name, number index (ID Number), type, and ability of the Pokemon you just caught.\n";
    cout << "What would you like to do?\n\n";
    cout << "1. Add a Pokemon.\n";
    cout << "2. Delete a Pokemon.\n";
    cout << "3. Display entire list of Pokemon.\n\n";

    cin >> selection;

    cout << endl << endl;
    
    switch (selection)
    {
        case 1:
            cout << "Pokemon's NAME: ";

            cout << "Pokemon's ID NUMBER: ";

            cout << "Pokemon's TYPE: ";

            cout << "Pokemon's ABILITY: ";
    }

	return 0;
}