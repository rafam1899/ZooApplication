/*
 * DataConsistencyException.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_EXCEPTIONS_DATACONSISTENCYEXCEPTION_H_
#define HEADERS_EXCEPTIONS_DATACONSISTENCYEXCEPTION_H_

#include <exception>
#include <string>
using namespace std;

class DataConsistencyException :public exception{
private:
	string data;
public:
	DataConsistencyException(string data);
	//override what function
	const char* what();
};



#endif /* HEADERS_EXCEPTIONS_DATACONSISTENCYEXCEPTION_H_ */
