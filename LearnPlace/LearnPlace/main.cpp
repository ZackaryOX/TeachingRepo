#include <iostream>
#include <string>
#include "Dog.h"


//Bools can be interpreted as 0 or 1 because thats all false or true means
bool ShouldPlayLoop = false;


//Create an integer used for input later
int CaseInput = 0;


//How many bones 
int AmountOfBones = 0;

//How many times should we run the loop that adds Bones?
int TimesToLoop = 10;

string Hello = "";


//Creating a pointer to a memory address * = &
Dog *Newman;

int main() {
	
	{
		//Create the a variable in memory address by using "new" to create(instantiate) an object of the class Dog
		Newman = new Dog(2, 2);

		//Use delete to forcefully delete the memory of the object (otherwise it will be erased automatically once the scope of main ends.
		delete Newman;
	}
	std::cout << "Should The Loop Run? Enter 0 for no and 1 for yes!" << std::endl;
	std::cin >> ShouldPlayLoop;
	
	if (ShouldPlayLoop) {

		//Output to command prompt the string
		std::cout << "Enter the case which you wish to run!" << std::endl;

		//Require input from the user using cin and >> and store it into CaseInput variable
		std::cin >> CaseInput;

		//Switch statement requires a variable like an if statement but will automatically go to the case instead of each if/elseif/else statements in a row
		switch (CaseInput) {
			//First case "1"
		case 1:

			//This is a foor loop, a foor loop can be used to run code a certain amount of times(iterations)
			//The format is for ( VARIABLE ; CONDITION ; ITERATION CHANGE )
			//Variable being used to calculate the condition
			//Condition that must be true in order for the for loop to run
			//Iteration change it can be  --i, ++i, i--, i++, i+=10, i-=10, i*=i, i/=i or any other type of change to i
			for (int i = 0; i <= TimesToLoop; i) {
				//Increase thhe amount of bones!!!!
				AmountOfBones++;
			}

			//break out of the current case
			break;
			
		case 2:

			//What does this do? --Try to comment about or describe it using "//"
			for (int i = 0; i < TimesToLoop; i++) {
				AmountOfBones++;
			}

			break;
		case 3:


			for (int i = 1; i <= TimesToLoop; i++) {
				AmountOfBones++;
			}


			break;
		case 4:

			for (int i = 1; i < TimesToLoop; i++) {
				AmountOfBones++;
			}

			break;
		case 5:
			for (int i = TimesToLoop; i >= 0; i--) {
				AmountOfBones = i;
				std::cout << "Hello I have " << std::to_string(AmountOfBones) << " Apples!" << std::endl;
				std::system("pause");
			}
			break;
		default:
			AmountOfBones = 2000000;
			break;
		}
	}
	else {
		AmountOfBones = 1;
	}

	std::cout << "Hello I have " << std::to_string(AmountOfBones) << " Apples!" << std::endl;
	std::system("pause");
}