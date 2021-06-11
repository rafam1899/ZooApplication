/*
 * Staff.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_MODEL_STAFF_H_
#define HEADERS_MODEL_STAFF_H_

#include <string>

using namespace std;

class Staff {

	private:
		static int NUMBER;
		string name;
		int number;

	public:
		Staff();
		Staff(string& name);
		string getName();
		int getNumber();

		bool operator == (const Staff& staff);
		bool operator == (int nr);
};


#endif /* HEADERS_MODEL_STAFF_H_ */
