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


Animal AnimalView::getAnimal(){

	Animal animal("temporary", "temporary");
	CageView cageview;
	CageContainer container;
	list<Cage> cages = container.getAll();
	bool flag = false;
	do{

		try{

			flag = false;
			cout<<"Animal"<<endl;
			string gender = Utils::getString("Gender");
			string specie = Utils::getString("Specie");
			cageview.printCages(cages);
			int cage = Utils::getNumber("Cage");
			animal.setGender(gender);
			animal.setSpecie(specie);
			animal.setCage(cage);

		}catch(InvalidDataException& e){
			flag = true;
		}

	}while(flag == true);

	return animal;
}

void AnimalView::printAnimal(Animal *animal){

	cout << animal->getNumber() << " : " << animal->getSpecie() << " : " << animal->getGender() << " : " << animal->getCage() << endl;

}

void AnimalView::printAnimals(list<Animal>& animals){

	for (list<Animal>::iterator it=animals.begin(); it != animals.end(); ++it){
		printAnimal(&*it);
	}

}

