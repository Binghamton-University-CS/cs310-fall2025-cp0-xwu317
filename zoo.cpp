#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Animal.h"
#include "AnimalsInZoo.h"

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Maldives Damselfish", 2024);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();

   delete animal1;

   Animal animal4("Megamouth Shark", 1983);
   AnimalsInZoo numOfAnimal4(animal4);
   numOfAnimal4.display();

}
