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
	static int NUMBER;

public:
	Client(Date& date);
	Date getDate();
	void setDate(int day, int month, int year);
};



#endif /* HEADERS_MODEL_CLIENT_H_ */
