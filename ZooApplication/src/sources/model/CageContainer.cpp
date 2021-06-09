/*
 * CageContainer.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#include "CageContainer.h"

void CageContainer::removeAnimal() {
	this->nAnimals = this->nAnimals - 1;
}

void CageContainer::addAnimal() {
	this->nAnimals = this->nAnimals + 1;
}
