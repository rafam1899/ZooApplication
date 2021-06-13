/*
 * Cage.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */


#include "Cage.h"

int Cage::NUMBER = 0;

Cage::Cage() {
	this->number = ++NUMBER;
	this->capacity = 0;
	this->recint = 0;
	this->nAnimals = 0;
}

Cage::Cage(int capacity, int recint) {
	this->capacity = capacity;
	this->recint = recint;
	this->number = ++NUMBER;
	this->nAnimals = 0;
}

void Cage::setCapacity(int& cpy) {
	this->capacity = cpy;
}

void Cage::setRecint(int& recint) {
	this->recint = recint;
}

void Cage::setNumAnimals(int& num) {
	this->nAnimals = num;
}

int Cage::getCapacity() {
	return this->capacity;
}

int Cage::getNumAnimals() {
	return this->nAnimals;
}

int Cage::getNumber() {
	return this->number;
}

int Cage::getRecint() {
	return this->recint;
}

bool Cage::operator == (const Cage& obj){
	if(this->number == obj.number){
		return true;
	}
	return false;
}


bool Cage::operator == (int nr){
	if(this->number == nr){
		return true;
	}
	return false;
}
