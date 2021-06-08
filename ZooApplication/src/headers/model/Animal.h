/*
 * Animal.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_MODEL_ANIMAL_H_
#define HEADERS_MODEL_ANIMAL_H_

#include <string>
#include "Cage.h"

class Animal {

private:
	string name;
	string specie;
	string gender;
	int number;
	Cage cage;

public:
	Animal(string& specie, string& gender, string& name);
	Animal(string& specie, string& gender, string& name, Cage& cage);
	int getNumber();
	Cage getCage();
	void setCage(Cage& cage);

};



#endif /* HEADERS_MODEL_ANIMAL_H_ */
