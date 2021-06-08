/*
 * CageContainer.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_MODEL_CAGECONTAINER_H_
#define HEADERS_MODEL_CAGECONTAINER_H_

#include <list>
#include "Cage.h"
#include "RecintContainer.h"
using namespace std;

class CageContainer{
private:
	list<Cage> cage;
	list<Cage>::iterator search(int number);
	RecintContainer  recint;
public:
	list<Cage> getAll();
	Cage get(int number);
	void add(Cage& cage);
	void remove(int number);

	void setRecint(RecintContainer recints);
};



#endif /* HEADERS_MODEL_CAGECONTAINER_H_ */
