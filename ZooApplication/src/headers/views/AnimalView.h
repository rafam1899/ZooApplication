/*
 * AnimalView.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_VIEWS_ANIMALVIEW_H_
#define HEADERS_VIEWS_ANIMALVIEW_H_

#include <list>
#include "Animal.h"
#include "CageContainer.h"

class AnimalView {

	public:
		Animal getAnimal(CageContainer &container);
		void printAnimal(Animal *animal);
		void printAnimals(list<Animal>& animals);
		void printRemoveAnimal(Animal* animal, Cage* cage);
		void printSucess(CageContainer &container, int cage);
		void printError(string msg);
		void printMove();
};


#endif /* HEADERS_VIEWS_ANIMALVIEW_H_ */
