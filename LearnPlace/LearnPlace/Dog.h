#include <iostream>
#include <string>

using namespace std;
class Dog {

	const int NeverChanges = 10;
	static int OneForAll;
private:

	int Size;
	int Health;
	int MaxHealth;
	string Breed = "";

public:

	Dog() {

		this->HelloWorld();
	}

	Dog(int NewHealth, int NewSize){

		
		this->Health = this->MaxHealth = NewHealth;
		
		this->Size = NewSize;
		this->HelloWorld();
	}
	~Dog() {
		this->Breed = "";
		cout << "deletin: " << endl;
	}

	int CanSeeThis = 2000;

	void HelloWorld();

	void SetHealth(int NewHealth, int MaxHealth);
	int GetHealth();
	int GetMaxHealth();

};

class GermanShephard : public Dog {

};