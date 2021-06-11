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
		int recint;

	public:
		Staff();
		Staff(string& name);
		string getName();
		int getNumber();
		int getRecint();
		void setName(string name);
		void setRecint(int recint);

		bool operator == (const Staff& staff);
		bool operator == (int nr);
};


#endif /* HEADERS_MODEL_STAFF_H_ */
