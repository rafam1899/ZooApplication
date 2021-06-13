/*
 * Recint.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#include "Recint.h"

int Recint::NUMBER = 0;

Recint::Recint() {
	this->number = ++NUMBER;
	this->visits = 0;
	this->staff = 0;
	this->nCages = 0;
}

Recint::Recint(string name) {
	this->name = name;
	this->number = ++NUMBER;
	this->visits = 0;
	this->staff = 0;
	this->nCages = 0;
}

void Recint::setStaff(int& staff) {
	this->staff = staff;
}
void Recint::setVisits(int visits) {
	this->visits = visits;
}

int Recint::getStaff() {
	return this->staff;
}

void Recint::setNumCages(int num) {
	this->nCages = num;
}

int Recint::getNumCages() {
	return this->nCages;
}

int Recint::getVisits() {
	return this->visits;
}

int Recint::getNumber() {
	return this->number;
}

void Recint::setName(string name) {
	this->name = name;
}

string Recint::getName() {
	return this->name;
}

bool Recint::operator == (const Recint& obj){
	if(this->number == obj.number){
		return true;
	}
	return false;
}


bool Recint::operator == (int nr){
	if(this->number == nr){
		return true;
	}
	return false;
}
