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

using namespace std;

class Recint {

	private:
		static int NUMBER;
		string name;
		int visits;
		int number;
		Staff staff;

	public:
		Recint();
		Recint(string& name);
		Staff getStaff();
		void setStaff(Staff& staff);
		int getVisits();
		int getNumber();
};



#endif /* HEADERS_MODEL_RECINT_H_ */
