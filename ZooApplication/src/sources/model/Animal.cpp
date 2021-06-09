/*
 * Animal.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#include "Animal.h"

int Animal::NUMBER = 0;

Animal::Animal(const string& specie, const string& gender, const string& name) {
	this->number = ++NUMBER;
	this->specie = specie;
	this->gender = gender;
	this->name = name;
}

void Animal::setCage(Cage& c) {
	this->cage = c;
}

int Animal::getNumber() {
	return this->number;
}

string Animal::getSpecie() {
	return this->specie;
}

Cage Animal::getCage() {
	return this->cage;
}

bool Animal::operator == (const Animal& obj){
	if(this->number == obj.number){
		return true;
	}
	return false;
}


bool Animal::operator == (int nr){
	if(this->number == nr){
		return true;
	}
	return false;
}
