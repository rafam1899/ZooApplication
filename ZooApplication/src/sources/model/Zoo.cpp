/*
 * Zoo.cpp
 *
 *  Created on: 01/06/2021
 *      Author: Tiago Oliveira
 */


#include <string>
#include "Zoo.h"
using namespace std;

Zoo::Zoo() {

}

Zoo::Zoo(string name) {
	this->name = name;
}

string Zoo::getName() {
	return name;
}

AnimalContainer & Zoo::getAnimalContainer(){
	return this->animals;
}

CageContainer & Zoo::getCageContainer(){
	return this->cages;
}

RecintContainer & Zoo::getRecintContainer(){
	return this->recints;
}

StaffContainer & Zoo::getStaffContainer(){
	return this->staff;
}
