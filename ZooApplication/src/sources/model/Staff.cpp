/*
 * Staff.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */


#include "Staff.h"

int Staff::NUMBER = 0;

Staff::Staff() {
	this->number = ++NUMBER;
}

Staff::Staff(string& name) {
	this->name = name;
	this->number = ++NUMBER;
}

string Staff::getName() {
	return this->name;
}

int Staff::getNumber() {
	return this->number;
}

bool Staff::operator == (const Staff& obj){
	if(this->number == obj.number){
		return true;
	}
	return false;
}


bool Staff::operator == (int nr){
	if(this->number == nr){
		return true;
	}
	return false;
}
