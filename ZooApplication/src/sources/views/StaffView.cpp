/*
 * StaffView.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#include <list>
#include "StaffView.h"
#include "RecintContainer.h"
#include "RecintView.h"
#include <iostream>
#include "Utils.h"
#include "InvalidDataException.h"
using namespace std;


Staff StaffView::getStaff(){

	Staff staff;

	bool flag = false;
	do{

		try{

			flag = false;
			cout<<"Staff created"<<endl;

		}catch(InvalidDataException& e){
			flag = true;
		}

	}while(flag == true);

	return staff;
}

void StaffView::printStaff(Staff *staff){

	cout << staff->getNumber() << " : " << endl;

}

void StaffView::printStaffs(list<Staff>& staffs){

	for (list<Staff>::iterator it=staffs.begin(); it != staffs.end(); ++it){
		printStaff(&*it);
	}

}
