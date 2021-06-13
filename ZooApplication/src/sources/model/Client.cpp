/*
 * Client.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */


#include "Client.h"

int Client::NUMBER = 0;


Client::Client(Date& date) {
	this->number = ++NUMBER;

}

Date Client::getDate() {
	return date;
}

void Client::setDate(int day, int month, int year) {
	this->date;
}
