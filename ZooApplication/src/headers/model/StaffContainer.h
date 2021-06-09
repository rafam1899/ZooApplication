/*
 * StaffContainer.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_MODEL_STAFFCONTAINER_H_
#define HEADERS_MODEL_STAFFCONTAINER_H_


#include <list>
#include "Staff.h"
using namespace std;


class StaffContainer{
private:
	list<Staff> staff;
	list<Staff>::iterator search(int number);

public:
	list<Staff> getAll();
	Staff get(int number);
	void add(Staff& staff);
	void remove(int number);
	//void move(int number, RecintContainer& recint);


};



#endif /* HEADERS_MODEL_STAFFCONTAINER_H_ */
