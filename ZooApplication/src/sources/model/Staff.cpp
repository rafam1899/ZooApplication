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
