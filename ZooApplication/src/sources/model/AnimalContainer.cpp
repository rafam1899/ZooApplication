/*
 * AnimalContainer.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#include <tuple>
#include "DuplicatedDataException.h"
#include "DataConsistencyException.h"
#include "AnimalContainer.h"
using namespace std;

list<Animal>::iterator AnimalContainer::search(int number){
	list<Animal>::iterator it = this->animals.begin();
	for (; it != this->animals.end(); ++it){
		if((*it) == number){
			return it;
		}
	}
	return it;
}

list<Animal> AnimalContainer::getAll(){
	list<Animal> newlist (this->animals);
	return newlist;
}

Animal* AnimalContainer::get(int number){
	list<Animal>::iterator it = search(number);
	if(it != this->animals.end()){
		return &(*it);
	}
	return NULL;
}

void AnimalContainer::add(Animal& obj){
	list<Animal>::iterator it = search(obj.getNumber());

	if(it == this->animals.end()){
			this->animals.push_back(obj);

	}else{
		string msg = "Animal: " + to_string(obj.getNumber());
		throw DuplicatedDataException(msg);
	}

}

void AnimalContainer::remove(int number){

	list<tuple<Animal *, int>> l;
	list<Animal>::iterator it = search(number);

	if(it != this->animals.end()){

		this->animals.erase(it);

	} else {

		string msg = "Animal: " + to_string(number);
		throw DuplicatedDataException(msg);

	}
}

void AnimalContainer::move(int number, int& cage){
	list<Animal>::iterator it = search(number);
	if(it != this->animals.end()){
		it->setCage(cage);
	}
}

list<Animal> AnimalContainer::getAnimalsCage(int nCages) {
	list<Animal> newlist;

	list<Animal>::iterator it = this->animals.begin();

	for (; it != this->animals.end(); ++it){
		if(it->getCage() == nCages){
			newlist.push_back(*it);
		}
	}

	return newlist;

}


