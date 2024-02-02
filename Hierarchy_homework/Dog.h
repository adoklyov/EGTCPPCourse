#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal
{
public:

	//Constructor
	Dog(string name);

	//Method
	void speak() override;
};

#endif