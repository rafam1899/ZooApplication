/*
 * Client.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_MODEL_CLIENT_H_
#define HEADERS_MODEL_CLIENT_H_

#include "Date.h"

class Client {
private:
	Date date;
	int number;

public:
	Client(Date& date);
};



#endif /* HEADERS_MODEL_CLIENT_H_ */
