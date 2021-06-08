/*
 * InvalidDataException.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */



#include <InvalidDataException.h>


InvalidDataException::InvalidDataException(string data){
	this->data = data;
}

const char* InvalidDataException::what(){
	string msg = "Error: ["+ data + "] is not valid!!";
			return msg.c_str();
}
