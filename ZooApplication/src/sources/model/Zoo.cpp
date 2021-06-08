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
