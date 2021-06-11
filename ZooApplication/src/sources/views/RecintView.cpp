/*
 * RecintView.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */


#include <list>
#include "AnimalView.h"
#include "RecintContainer.h"
#include "RecintView.h"
#include <iostream>
#include "Utils.h"
#include "InvalidDataException.h"
using namespace std;


Recint RecintView::getRecint(){

	Recint recint;

	bool flag = false;
	do{

		try{

			flag = false;
			cout<<"\n** Insert recint details **\n"<<endl;
			string name = Utils::getString("Name");
			recint.setName(name);
			cout<<"** Recint created **"<<endl;

		}catch(InvalidDataException& e){
			flag = true;
		}

	}while(flag == true);

	return recint;
}

void RecintView::printRecint(Recint *recint){

	cout << recint->getNumber() << " | " << recint->getName() << " | " << recint->getStaff() << " | " << recint->getVisits() << endl;

}

void RecintView::printRecints(list<Recint>& recints){
	cout<< "\n" << endl;
	cout << "ID | NAME | STAFF | VISITS" << endl;
	cout << "---------------------------" << endl;
	for (list<Recint>::iterator it=recints.begin(); it != recints.end(); ++it){
		printRecint(&*it);
	}

}

void RecintView::printRemoveRecint(Recint *recint){

	cout << "** Recint " << recint->getNumber() << " removed **" << endl;

}
