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

		//overloaded operators
};

#endif