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
			cout<<"Recint created"<<endl;

		}catch(InvalidDataException& e){
			flag = true;
		}

	}while(flag == true);

	return recint;
}

void RecintView::printRecint(Recint *recint){

	cout << recint->getNumber() << " : " << endl;

}

void RecintView::printRecints(list<Recint>& recints){

	for (list<Recint>::iterator it=recints.begin(); it != recints.end(); ++it){
		printRecint(&*it);
	}

}
