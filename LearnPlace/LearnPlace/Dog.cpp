#include "Dog.h"

using namespace std;

int Dog::DogsCreated = 20;

void Dog::PrintAndPause(string StuffToPrint) {
	cout << StuffToPrint << endl;
	system("pause");

}





void Dog::SetHealth(int NewHealth, int MaxHealth) 
{
	if (MaxHealth == NULL) {
		MaxHealth = this->MaxHealth;
	}


	this->Health = NewHealth;
	this->MaxHealth = MaxHealth;
}

void Dog::SetName(string NewName)
{
	this->Name = NewName;
}

void Dog::SetAge(int NewAge)
{
	this->Age = NewAge;
}
void Dog::SetID(int NewID)
{
	this->ID = NewID;
}

int Dog::GetID() {
	return this->ID;
}

int Dog::GetAge() {
	return this->Age;
}
string Dog::GetName() {
	return this->Name;
}

int Dog::GetHealth()
{
	return this->Health;
}

int Dog::GetMaxHealth()
{
	return this->Health;
}