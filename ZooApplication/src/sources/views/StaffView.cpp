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


Staff StaffView::getStaff(RecintContainer &container){

	Staff staff;
	RecintView recintView;
	list<Recint> recints = container.getAll();

	bool flag = false;
	do{

		try{

			flag = false;
			cout<<"\n** Insert staff details **\n"<<endl;
			string name = Utils::getString("Name");
			staff.setName(name);
			recintView.printRecints(recints);
			int recint = Utils::getNumber("Recint");
			staff.setRecint(recint);
			int num = staff.getNumber();
			container.get(recint)->setStaff(num);
			cout<<"** Staff created **"<<endl;

		}catch(InvalidDataException& e){
			flag = true;
		}

	}while(flag == true);

	return staff;
}

void StaffView::printStaff(Staff *staff){

	cout << staff->getNumber() << " | " << staff->getName() << " | " << staff->getRecint() << endl;

}

void StaffView::printStaffs(list<Staff>& staffs){
	cout<< "\n" << endl;
	cout << "ID | NAME | RECINT" << endl;
	cout << "---------------------------" << endl;
	for (list<Staff>::iterator it=staffs.begin(); it != staffs.end(); ++it){
		printStaff(&*it);
	}

}

void StaffView::printRemoveStaff(Staff *staff){

	cout << "** Staff " << staff->getNumber() << " removed **" << endl;

}
