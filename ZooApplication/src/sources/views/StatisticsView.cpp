/*
 * StatisticsView.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */


#include <list>
#include "StatisticsView.h"
#include "RecintContainer.h"
#include "RecintView.h"
#include <iostream>
#include "Utils.h"
#include "InvalidDataException.h"
using namespace std;

void StatisticsView::printVisitsPerRecint(list<Recint>& recints){
	cout<< "\n" << endl;
	cout << "ID | NAME | VISITS" << endl;
	cout << "---------------------------" << endl;
	for (list<Recint>::iterator it=recints.begin(); it != recints.end(); ++it){
		cout << it->getNumber() << " | " << it->getName() << " | " << it->getVisits() << endl;
	}

}

void StatisticsView::printClientsPerDay() {
	cout<< "\n" << endl;
	cout << "DATE | Nº CLIENTS" << endl;
	cout << "---------------------------" << endl;

}


