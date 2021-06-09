/*
 * DuplicatedDataException.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_EXCEPTIONS_DUPLICATEDDATAEXCEPTION_H_
#define HEADERS_EXCEPTIONS_DUPLICATEDDATAEXCEPTION_H_

#include <exception>
#include <string>
using namespace std;

class DuplicatedDataException :public exception{
private:
	string data;
public:
	DuplicatedDataException(string data);
	//override what function
	const char* what();
};



#endif /* HEADERS_EXCEPTIONS_DUPLICATEDDATAEXCEPTION_H_ */
