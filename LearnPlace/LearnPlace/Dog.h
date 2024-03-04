//PRE PROCESS DIRECTIVES:
#include <iostream>
#include <string>

using namespace std;


class Dog {

	const int NeverChanges = 10;
	
private:

	int ID;
	int Size;
	int Health;
	int MaxHealth;
	string Breed = "";
	int Age;
	string Name;
public:
	static int DogsCreated;
	//Constructor runs whenever an object of the class is created
	Dog() {
		DogsCreated++;
		this->SetID(DogsCreated);
		this->PrintAndPause("Dog Default Constructor");
	}
	//Can pass in multiple variables to the constructor
	Dog(int NewHealth, int NewSize):Dog(){

		
		this->Health = this->MaxHealth = NewHealth;
		
		this->Size = NewSize;
		this->PrintAndPause("Dog override constructor");
	}
	//Deconstructor runs whenever the object of the class is destroyed
	~Dog() {
		this->PrintAndPause("Dog Deconstructor");
	}

	int CanSeeThis = 2000;


	void PrintAndPause(string);

	void SetHealth(int NewHealth, int MaxHealth);
	void SetName(string NewName);
	void SetAge(int NewAge);
	void SetID(int);

	int GetHealth();
	int GetID();
	int GetMaxHealth();
	int GetAge();
	string GetName();


};

class GermanShephard : public Dog {
private:
	int GermanShephardHealth = 30;
	int DefaultSize = 1;
	int DefaultAge = 1;

public:
	GermanShephard() : GermanShephard("German Shephard" + to_string(this->GetID()), DefaultAge) {
		this->PrintAndPause("Printing for derived class default");
	}
	GermanShephard(string Name, int Age) : Dog(GermanShephardHealth, DefaultSize) {
		delete &DefaultAge;
		delete& DefaultSize;
		this->PrintAndPause("Printing for derived class override");
		this->SetName(Name);
		this->SetAge(Age);
	}
	~GermanShephard() {
		this->PrintAndPause("Deconstructing German Shephard");
	}
};