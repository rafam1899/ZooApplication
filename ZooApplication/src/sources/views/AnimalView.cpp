/*
 * AnimalView.cpp
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


Animal AnimalView::getAnimal(CageContainer &container){

	Animal animal("temporary", "temporary");
	CageView cageview;
	list<Cage> cages = container.getAll();
	bool flag = false;
	do{

		try{

			flag = false;
			cout<<"\n** Insert animal details **\n"<<endl;
			string gender = Utils::getString("Gender");
			string specie = Utils::getString("Specie");
			cageview.printCages(cages);
			int nCage = Utils::getNumber("Cage");
			animal.setGender(gender);
			animal.setSpecie(specie);
			animal.setCage(nCage);


		}catch(InvalidDataException& e){
			flag = true;
		}

	}while(flag == true);

	return animal;
}

void AnimalView::printAnimal(Animal *animal){

	cout << animal->getNumber() << " | " << animal->getSpecie() << " | " << animal->getGender() << " | " << animal->getCage() << endl;

}

void AnimalView::printAnimals(list<Animal>& animals){
	cout<< "\n" << endl;
	cout << "ID | SPECIE | GENDER | CAGE" << endl;
	cout << "---------------------------" << endl;
	for (list<Animal>::iterator it=animals.begin(); it != animals.end(); ++it){
		printAnimal(&*it);
	}

}

void AnimalView::printRemoveAnimal(Animal *animal, Cage *cage){

	cout << "** Animal " << animal->getNumber() << " removed **" << endl;
	int num = cage->getNumAnimals() - 1;
	cage->setNumAnimals(num);

}

void AnimalView::printSucess(CageContainer &container, int cage) {

	int numAnimals = container.get(cage)->getNumAnimals() + 1;
	container.get(cage)->setNumAnimals(numAnimals);
	cout << "** Animal Added **" << endl;
}

void AnimalView::printError(string msg) {
	cout << msg << endl;
}

