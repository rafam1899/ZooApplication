/*
 * Staff.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_MODEL_STAFF_H_
#define HEADERS_MODEL_STAFF_H_

#include <string>

class Staff {

private:
	string name;
	int number;


public:
	Staff(string& name);
	string getName();
	int getNumber();

};


#endif /* HEADERS_MODEL_STAFF_H_ */
