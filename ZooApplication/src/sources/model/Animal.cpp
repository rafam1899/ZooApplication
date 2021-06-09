/*
 * Animal.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#include "Animal.h"

int Animal::NUMBER = 0;

Animal::Animal(const string& specie, const string& gender) {
	this->number = ++NUMBER;
	this->specie = specie;
	this->gender = gender;
	this->cage = 0;
}

void Animal::setCage(int& c) {
	this->cage = c;
}


void Animal::setGender(string& gender) {
	this->gender = gender;
}

void Animal::setSpecie(string& specie) {
	this->specie = specie;
}

int Animal::getNumber() {
	return this->number;
}

string Animal::getSpecie() {
	return this->specie;
}

string Animal::getGender() {
	return this->gender;
}

int Animal::getCage() {
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
