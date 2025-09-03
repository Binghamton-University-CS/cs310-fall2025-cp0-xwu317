#include <iostream>
using namespace std;

#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(Animal animalObject) {
	animal = animalObject;
	numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo() {
	numAnimals = 0;
}

void AnimalsInZoo::display() {
	if(numAnimals > 0) {
		animal.display();
	}
	cout << "Number of Animal: " << numAnimals << endl;
}


