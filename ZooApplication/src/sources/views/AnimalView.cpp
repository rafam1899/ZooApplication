/*
 * AnimalView.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#include "AnimalView.h"
#include <iostream>
#include "Utils.h"
#include "InvalidDataException.h"
using namespace std;


Animal AnimalView::getAnimal(){

	Cage cage;
	Animal animal("ola", "olsa", "olssa");

	bool flag = false;
	do{

		try{

			flag = false;
			cout<<"Animal"<<endl;
			string name = Utils::getString("Name");
			animal.setCage(cage);

		}catch(InvalidDataException& e){
			flag = true;
		}

	}while(flag == true);

	return animal;
}

void AnimalView::printAnimal(Animal *animal){

	cout << animal->getNumber() << " : " << animal->getSpecie() << " : " <<endl;

}

void AnimalView::printAnimals(list<Animal>& animals){

	for (list<Animal>::iterator it=animals.begin(); it != animals.end(); ++it){
		printAnimal(&*it);
	}

}

