#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "Animal.h"

class AnimalsInZoo {
   public:
      AnimalsInZoo(Animal animalObject);
      AnimalsInZoo();
      void display();

   private:
      int numAnimals;
      Animal animal;
};

#endif
