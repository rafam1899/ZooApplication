/*
 * CageView.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#include <list>
#include "AnimalView.h"
#include "CageContainer.h"
#include "CageView.h"
#include <iostream>
#include "Utils.h"
#include "InvalidDataException.h"
using namespace std;


Cage CageView::getCage(){

	Cage cage;

	bool flag = false;
	do{

		try{

			flag = false;
			cout<<"Cage created"<<endl;

		}catch(InvalidDataException& e){
			flag = true;
		}

	}while(flag == true);

	return cage;
}

void CageView::printCage(Cage *cage){

	cout << cage->getNumber() << " : " << endl;

}

void CageView::printCages(list<Cage>& cages){

	for (list<Cage>::iterator it=cages.begin(); it != cages.end(); ++it){
		printCage(&*it);
	}

}
