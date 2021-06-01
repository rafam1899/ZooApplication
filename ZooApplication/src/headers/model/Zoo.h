/*
 * Zoo.h
 *
 *  Created on: 01/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_ZOO_H_
#define HEADERS_ZOO_H_

#include <string>
using namespace std;

class Zoo {
	private:
		string name;
	public:
		Zoo(string name);
		const string& getName();
};



#endif /* HEADERS_ZOO_H_ */
