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

using namespace std;

class Animal {

	private:
		string name;
		string specie;
		string gender;
		static int NUMBER;
		int number;
		Cage cage;

	public:
		Animal(const string& specie, const string& gender, const string& name);
		int getNumber();
		Cage getCage();
		void setCage(Cage& cage);
		string getSpecie();

		bool operator == (const Animal& animal);
		bool operator == (int nr);

};



#endif /* HEADERS_MODEL_ANIMAL_H_ */
