#ifndef POKEMON_H
#define POKEMON_H

class Pokemon
{
	private:
		std::string name;
		int idNum;
		std::string type;
		std::string ability;

	public:
		Pokemon();

		Pokemon(std::string pokemonName, std::string pokemonType, std::string pokemonAbility, int pokemonIDNum);
 
		~Pokemon();

		//setters
		void setName(std::string name);

		void setIdNum(int idNum);

		void setType(std::string type);

		void setAbility(std::string ability);

		//getters
		std::string getName();

		int getIdNum();

		std::string getType();

		std::string getAbility();

		//overloaded operators for class to class and class to int
		friend std::ostream& operator<<(std::ostream& os, const Pokemon& pokemonData)
		{
			os << "\n\nPokemon Data:\n"
			<< "Name: " << pokemonData.name << std::endl
			<< "ID Number: " << pokemonData.idNum << std::endl
			<< "Type: " << pokemonData.type << std::endl
			<< "Ability: " << pokemonData.ability << std::endl;
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