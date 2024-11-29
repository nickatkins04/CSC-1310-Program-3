#ifndef POKEMON_H
#define POKEMON_H

class Pokemon
{
	private:
		string name;
		int idNum;
		string type;
		string ability;

	public:
		//constructor/destructor
		Pokemon();

		~Pokemon();

		//setters
		void setName(string name);

		void setIdNum(int idNum);

		void setType(string type);

		void setAbility(string ability);

		//getters
		string getName();

		int getIdNum();

		string getType();

		string getAbility();

		//overloaded operators for class to class and class to int
		friend ostream& operator<<(ostream& os, const Pokemon& pokemonData)
		{
			os << "\n\nPokemon Data:\n"
			<< "Name: " << pokemonData.name << endl
			<< "ID Number: " << pokemonData.idNum << endl
			<< "Type: " << pokemonData.type << endl
			<< "Ability: " << pokemonData.ability << endl;
			return os;
		}

		bool operator<(const Pokemon& other)
		{
			return idNum < other.idNum;
		}

		bool operator<(const int& num)
		{
			return idNum < num;
		}

		bool operator>(const Pokemon& other)
		{
			return idNum > other.idNum;
		}

		bool operator>(const int& num)
		{
			return idNum > num;
		}

		bool operator==(const Pokemon& other)
		{
			return idNum == other.idNum;
		}

		bool operator==(const int& num)
		{
			return idNum == num;
		}

		bool operator!=(const Pokemon& other)
		{
			return idNum != other.idNum;
		}

		bool operator!=(const int& num)
		{
			return idNum != num;
		}
};

#endif