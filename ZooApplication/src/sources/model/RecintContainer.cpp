/*
 * RecintContainer.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */



#include "RecintContainer.h"
#include <tuple>
#include "DuplicatedDataException.h"
#include "DataConsistencyException.h"
using namespace std;

list<Recint>::iterator RecintContainer::search(int number){
	list<Recint>::iterator it = this->recint.begin();
	for (; it != this->recint.end(); ++it){
		if((*it) == number){
			return it;
		}
	}
	return it;
}

list<Recint> RecintContainer::getAll(){
	list<Recint> newlist (this->recint);
	return newlist;
}

Recint* RecintContainer::get(int number){
	list<Recint>::iterator it = search(number);
	if(it != this->recint.end()){
		return &(*it);
	}
	return NULL;
}

void RecintContainer::add(Recint& obj){
	list<Recint>::iterator it = search(obj.getNumber());
	if(it == this->recint.end()){
		this->recint.push_back(obj);

	}else{
		string msg = "Recint: " + to_string(obj.getNumber());
		throw DuplicatedDataException(msg);
	}
}

void RecintContainer::remove(int number){

	list<tuple<Recint *, int>> l;
	list<Recint>::iterator it = search(number);

	if(it != this->recint.end()){

		this->recint.erase(it);

	} else {

		string msg = "Recint: " + to_string(number);
		throw DuplicatedDataException(msg);

	}
}
