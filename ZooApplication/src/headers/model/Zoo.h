/*
 * Zoo.h
 *
 *  Created on: 01/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_ZOO_H_
#define HEADERS_ZOO_H_

#include <string>
#include "AnimalContainer.h"
#include "CageContainer.h"
#include "RecintContainer.h"
#include "StaffContainer.h"
using namespace std;

class Zoo {
	private:
		string name;
		AnimalContainer animals;
		CageContainer cages;
		RecintContainer recints;
		StaffContainer staff;
	public:
		Zoo();
		Zoo(string name);
		string getName();

		AnimalContainer & getAnimalContainer();
		CageContainer & getCageContainer();
		RecintContainer & getRecintContainer();
		StaffContainer & getStaffContainer();
};



#endif /* HEADERS_ZOO_H_ */
