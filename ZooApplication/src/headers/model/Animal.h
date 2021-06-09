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
		string specie;
		string gender;
		static int NUMBER;
		int number;
		int cage;

	public:
		Animal(const string& specie, const string& gender);
		int getNumber();
		int getCage();
		void setCage(int& cage);
		void setGender(string& gender);
		void setSpecie(string& specie);
		string getSpecie();
		string getGender();


		bool operator == (const Animal& animal);
		bool operator == (int nr);

};



#endif /* HEADERS_MODEL_ANIMAL_H_ */
