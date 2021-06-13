/*
 * Client.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */


#include "Client.h"

int Client::NUMBER = 0;

Client::Client(int recint) {
	this->number = ++NUMBER;
	this->recintVisited = recint;

}

Date Client::getDate() {
	return date;
}

void Client::setDate(int day, int month, int year) {
	this->date;
}

int Client::getRecintVisited() {
	return recintVisited;
}

void Client::setRecintVisited(int recint) {
	this->recintVisited = recint;
}
