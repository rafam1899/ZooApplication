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
	int recintVisited;

public:
	Client(int recint);
	Date getDate();
	void setDate(int day, int month, int year);
	void setRecintVisited(int num);
	int getRecintVisited();
};



#endif /* HEADERS_MODEL_CLIENT_H_ */
