/*
 * View.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#include <iostream>

#include <list>
#include "View.h"
#include "Utils.h"
#include "InvalidDataException.h"
using namespace std;

View::View(){
}

int View::menuZoo() {
	int op = -1;
	do{
		cout<<"\n\n********** Menu Zoo **********\n";
		cout<<"1 - Animals\n";
		cout<<"2 - Cages\n";
		cout<<"3 - Recints\n";
		cout<<"4 - Staff\n";
		cout<<"5 - Statistics\n";
		cout<<"\n0 - Exit\n";
		op = Utils::getNumber("Option");

	}while(op < 0 || op > 4);
	return op;
}


