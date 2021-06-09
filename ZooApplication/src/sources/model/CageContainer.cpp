/*
 * CageContainer.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */


#include "CageContainer.h"
#include <tuple>
#include "DuplicatedDataException.h"
#include "DataConsistencyException.h"
using namespace std;

list<Cage>::iterator CageContainer::search(int number){
	list<Cage>::iterator it = this->cages.begin();
	for (; it != this->cages.end(); ++it){
		if((*it) == number){
			return it;
		}
	}
	return it;
}

list<Cage> CageContainer::getAll(){
	list<Cage> newlist (this->cages);
	return newlist;
}

Cage* CageContainer::get(int number){
	list<Cage>::iterator it = search(number);
	if(it != this->cages.end()){
		return &(*it);
	}
	return NULL;
}

void CageContainer::add(Cage& obj){
	list<Cage>::iterator it = search(obj.getNumber());
	if(it == this->cages.end()){
		this->cages.push_back(obj);

	}else{
		string msg = "Cage: " + to_string(obj.getNumber());
		throw DuplicatedDataException(msg);
	}
}

void CageContainer::remove(int number){

	list<tuple<Cage *, int>> l;
	list<Cage>::iterator it = search(number);

	if(it != this->cages.end()){

		this->cages.erase(it);

	} else {

		string msg = "Cage: " + to_string(number);
		throw DuplicatedDataException(msg);

	}
}

void CageContainer::removeAnimal() {
	this->nAnimals = this->nAnimals - 1;
}

void CageContainer::addAnimal() {
	this->nAnimals = this->nAnimals + 1;
}
