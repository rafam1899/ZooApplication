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
	int capacity;
	int number;
	Recint recint;

public:
	Cage(int& capacity,Recint& recint);

};


#endif /* HEADERS_MODEL_CAGE_H_ */
