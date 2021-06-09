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
}

Recint::Recint(string& name) {
	this->name = name;
	this->number = ++NUMBER;
	this->visits = 0;
}

void Recint::setStaff(Staff& staff) {
	this->staff = staff;
}

Staff Recint::getStaff() {
	return this->staff;
}

int Recint::getVisits() {
	return this->visits;
}
