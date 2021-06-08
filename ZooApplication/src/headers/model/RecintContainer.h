/*
 * RecintContainer.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_MODEL_RECINTCONTAINER_H_
#define HEADERS_MODEL_RECINTCONTAINER_H_

#include <list>
#include "Recint.h"
#include "StaffContainer.h"
using namespace std;

class RecintContainer{
private:
	list<Recint> recint;
	list<Recint>::iterator search(int number);
	StaffContainer  staff;
public:
	list<Recint> getAll();
	Recint get(int number);
	void add(Recint& recint);
	void remove(int number);

	void setStaff(StaffContainer staff);
};



#endif /* HEADERS_MODEL_RECINTCONTAINER_H_ */
