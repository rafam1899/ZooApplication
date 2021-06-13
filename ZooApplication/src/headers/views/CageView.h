/*
 * CageView.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_VIEWS_CAGEVIEW_H_
#define HEADERS_VIEWS_CAGEVIEW_H_

#include <list>
#include "../model/Cage.h"

class CageView {

public:
	Cage getCage(RecintContainer &container);
	void printCage(Cage *cage);
	void printCages(list<Cage>& cages);
	void printRemoveCage(Cage* cage, Recint* recint);
	void printCageAnimals(list<Animal>& animals, Cage cage);
};



#endif /* HEADERS_VIEWS_CAGEVIEW_H_ */
