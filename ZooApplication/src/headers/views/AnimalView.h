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

class AnimalView {

	public:
		Animal getAnimal();
		void printAnimal(Animal *animal);
		void printAnimals(list<Animal>& animals);
};


#endif /* HEADERS_VIEWS_ANIMALVIEW_H_ */
