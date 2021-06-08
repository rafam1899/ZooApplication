/*
 * StaffView.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_VIEWS_STAFFVIEW_H_
#define HEADERS_VIEWS_STAFFVIEW_H_

#include <list>
#include "../model/Staff.h"

class StaffView {

public:
	Staff getStaff();
	void printStaff(Staff *staff);
	void printStaffs(list<Staff>& staffs);
};



#endif /* HEADERS_VIEWS_STAFFVIEW_H_ */
