#include "Dog.h"

using namespace std;



void Dog::HelloWorld() {
	cout << "Hello world!" << endl;
	cout << "My Health is: " + to_string(this->Health) << endl;
	cout << "My Max Health is: " + to_string(this->MaxHealth) << endl;


}



int Dog::GetHealth()
{
	return this->Health;
}

int Dog::GetMaxHealth()
{
	return this->Health;
}

void Dog::SetHealth(int NewHealth, int MaxHealth) 
{
	if (MaxHealth == NULL) {
		MaxHealth = this->MaxHealth;
	}


	this->Health = NewHealth;
	this->MaxHealth = MaxHealth;
}