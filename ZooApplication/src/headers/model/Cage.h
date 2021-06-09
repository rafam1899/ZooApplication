/*
 * Cage.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_MODEL_CAGE_H_
#define HEADERS_MODEL_CAGE_H_

#include "Recint.h"

class Cage {
private:
	static int NUMBER;
	int capacity;
	int number;
	Recint recint;

public:
	Cage();
	Cage(int& capacity,Recint& recint);
	void setCapacity(int& cpy);
	int getCapacity();
	void setRecint(Recint& recint);
	Recint getRecint();
};


#endif /* HEADERS_MODEL_CAGE_H_ */
