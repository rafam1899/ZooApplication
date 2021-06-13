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
			cout<<"\n** Insert cage details **\n"<<endl;
			int capacity = Utils::getNumber("Capacity");
			cage.setCapacity(capacity);
			int recint = Utils::getNumber("Recint");
			cage.setRecint(recint);
			cout<<"** Cage created **"<<endl;

		}catch(InvalidDataException& e){
			flag = true;
		}

	}while(flag == true);

	return cage;
}

void CageView::printCage(Cage *cage){
	cout << cage->getNumber() << " | " << cage->getRecint() << " | " << cage->getCapacity() << " | " << cage->getNumAnimals() << endl;

}

void CageView::printCages(list<Cage>& cages){
	cout<< "\n** Cage List **" << endl;
	cout << "ID | RECINT | CAPACITY | Nº ANIMALS INSIDE" << endl;
	cout << "---------------------------" << endl;
	for (list<Cage>::iterator it=cages.begin(); it != cages.end(); ++it){
		printCage(&*it);
	}

}

void CageView::printRemoveCage(Cage *cage){

	cout << "** Cage " << cage->getNumber() << " removed **" << endl;

}

void CageView::printCageAnimals(list<Animal>& animals, Cage cage) {

	if(animals.empty()) {
		cout << "\nRecint: " << cage.getRecint() << endl;
		cout << "Cage capacity: " << cage.getCapacity() << endl;
		cout << "Number of animals inside: " << cage.getNumAnimals() << endl;
		cout << "\n** Cage has no animals inside **"<< endl;
		return;
	}
	cout << "\nRecint: " << cage.getRecint() << endl;
	cout << "Cage capacity: " << cage.getCapacity() << endl;
	cout << "Number of animals inside: " << cage.getNumAnimals() << endl;
	cout<< "\n ** List of animals inside cage **\n" << endl;

	cout << "ID | SPECIE | GENDER" << endl;
	cout << "---------------------------" << endl;
	for (list<Animal>::iterator it=animals.begin(); it != animals.end(); ++it){
		cout << it->getNumber() << " | " << it->getSpecie() << " | " << it->getGender() << endl;
	}

}

