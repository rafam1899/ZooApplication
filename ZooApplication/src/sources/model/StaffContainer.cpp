/*
 * StaffContainer.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */



#include <tuple>
#include "DuplicatedDataException.h"
#include "DataConsistencyException.h"
#include "StaffContainer.h"
using namespace std;

list<Staff>::iterator StaffContainer::search(int number){
	list<Staff>::iterator it = this->staff.begin();
	for (; it != this->staff.end(); ++it){
		if((*it) == number){
			return it;
		}
	}
	return it;
}

list<Staff> StaffContainer::getAll(){
	list<Staff> newlist (this->staff);
	return newlist;
}

Staff* StaffContainer::get(int number){
	list<Staff>::iterator it = search(number);
	if(it != this->staff.end()){
		return &(*it);
	}
	return NULL;
}

void StaffContainer::add(Staff& obj){
	list<Staff>::iterator it = search(obj.getNumber());
	if(it == this->staff.end()){
		this->staff.push_back(obj);
		//this->recint->addStaff();

	}else{
		string msg = "Staff: " + to_string(obj.getNumber());
		throw DuplicatedDataException(msg);
	}
}

void StaffContainer::remove(int number){

	list<tuple<Staff *, int>> l;
	list<Staff>::iterator it = search(number);

	if(it != this->staff.end()){

		this->staff.erase(it);
		//this->recint->removeStaff();

	} else {

		string msg = "Staff: " + to_string(number);
		throw DuplicatedDataException(msg);

	}
}

void StaffContainer::move(int number, int& recint){
	list<Staff>::iterator it = search(number);
	if(it != this->staff.end()){
		it->setRecint(recint);
	}
}
