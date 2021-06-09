/*
 * DataConsistencyException.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */


#include <DataConsistencyException.h>


DataConsistencyException::DataConsistencyException(string data){
	this->data = "Error: ["+ data + "] consistency!!";
}

const char* DataConsistencyException::what(){
	return this->data.c_str();
}

