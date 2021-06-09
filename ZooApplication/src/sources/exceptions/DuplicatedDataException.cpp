/*
 * DuplicatedDataException.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */


#include <DuplicatedDataException.h>


DuplicatedDataException::DuplicatedDataException(string data){
	this->data = "Error: ["+ data + "] duplicated!!";
}

const char* DuplicatedDataException::what(){
	return this->data.c_str();
}



