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
}

Cage::Cage(int& capacity, Recint& recint) {
	this->capacity = capacity;
	this->recint = recint;
	this->number = ++NUMBER;
}

void Cage::setCapacity(int& cpy) {
	this->capacity = cpy;
}

void Cage::setRecint(Recint& recint) {
	this->recint = recint;
}

int Cage::getCapacity() {
	return this->capacity;
}

Recint Cage::getRecint() {
	return this->recint;
}
