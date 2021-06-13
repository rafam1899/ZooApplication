/*
 * AnimalContainer.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_MODEL_ANIMALCONTAINER_H_
#define HEADERS_MODEL_ANIMALCONTAINER_H_

#include <list>
#include "Animal.h"
#include "CageContainer.h"

using namespace std;

class AnimalContainer{
private:
	list<Animal> animals;
	list<Animal>::iterator search(int number);
	CageContainer * cage;
public:
	list<Animal> getAll();
	Animal* get(int number);
	void add(Animal& animal);
	void remove(int number);
	void move(int number, int& cage, Cage* oldCage, Cage* newCage);
	list<Animal> getAnimalsCage(int nCage);

	void setCage(CageContainer *cages);
};

#endif /* HEADERS_MODEL_ANIMALCONTAINER_H_ */
