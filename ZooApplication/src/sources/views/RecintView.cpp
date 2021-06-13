/*
 * RecintView.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */


#include <list>
#include "AnimalView.h"
#include "RecintContainer.h"
#include "RecintView.h"
#include <iostream>
#include "Utils.h"
#include "InvalidDataException.h"
using namespace std;


Recint RecintView::getRecint(){

	Recint recint;

	bool flag = false;
	do{

		try{

			flag = false;
			cout<<"\n** Insert recint details **\n"<<endl;
			string name = Utils::getString("Name");
			recint.setName(name);
			cout<<"** Recint created **"<<endl;

		}catch(InvalidDataException& e){
			flag = true;
		}

	}while(flag == true);

	return recint;
}

void RecintView::printRecint(Recint *recint){

	cout << recint->getNumber() << " | " << recint->getName() << " | " << recint->getStaff() << " | " << recint->getVisits() << " | " << recint->getNumCages() << endl;

}

void RecintView::printRecints(list<Recint>& recints){
	cout<< "\n" << endl;
	cout << "ID | NAME | STAFF | VISITS | Nº CAGES" << endl;
	cout << "---------------------------" << endl;
	for (list<Recint>::iterator it=recints.begin(); it != recints.end(); ++it){
		printRecint(&*it);
	}

}

void RecintView::printRemoveRecint(Recint *recint){

	cout << "** Recint " << recint->getNumber() << " removed **" << endl;

}

void RecintView::printRecintCages(list<Cage>& cages, Recint recint) {

	if(cages.empty()) {
		cout << "\n** Recint: " << recint.getName() << " **" << endl;
		cout << "Staff working: " << recint.getStaff() << endl;
		cout << "Nº cages associated: " << recint.getNumCages() << endl;
		cout << "Visits: " << recint.getVisits() << endl;
		cout << "\n** Recint has no cages associated **"<< endl;
		return;
	}
	cout << "\n** Recint: " << recint.getName() << " **" << endl;
	cout << "Staff working: " << recint.getStaff() << endl;
	cout << "Nº cages associated: " << recint.getNumCages() << endl;
	cout << "Visits: " << recint.getVisits() << endl;
	cout<< "\n ** List of cages associated **\n" << endl;

	cout << "ID | CAPACITY | Nº ANIMALS" << endl;
	cout << "---------------------------" << endl;
	for (list<Cage>::iterator it=cages.begin(); it != cages.end(); ++it){
		cout << it->getNumber() << " | " << it->getCapacity() << " | " << it->getNumAnimals() << endl;
	}

}
