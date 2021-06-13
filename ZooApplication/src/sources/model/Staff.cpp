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
	this->recint = 0;
}

Staff::Staff(string name) {
	this->name = name;
	this->number = ++NUMBER;
	this->recint = 0;
}

string Staff::getName() {
	return this->name;
}

int Staff::getNumber() {
	return this->number;
}

int Staff::getRecint() {
	return this->recint;
}

void Staff::setName(string name) {
	this->name = name;
}

void Staff::setRecint(int recint) {
	this->recint = recint;
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
