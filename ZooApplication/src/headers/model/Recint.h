/*
 * Recint.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_MODEL_RECINT_H_
#define HEADERS_MODEL_RECINT_H_

#include <string>
#include "Staff.h"
#include "Cage.h"

using namespace std;

class Recint {

	private:
		static int NUMBER;
		string name;
		int visits;
		int number;
		int staff;
		int nCages;

	public:
		Recint();
		Recint(string& name);
		int getStaff();
		void setStaff(int& staff);
		int getVisits();
		int getNumber();
		string getName();
		void setName(string name);
		int getNumCages();
		void setNumCages(int& num);

		bool operator == (const Recint& recint);
		bool operator == (int nr);
};



#endif /* HEADERS_MODEL_RECINT_H_ */
