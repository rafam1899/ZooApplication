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

int Cage::getNumber() {
	return this->number;
}

Recint Cage::getRecint() {
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
