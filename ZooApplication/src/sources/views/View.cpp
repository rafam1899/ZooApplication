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

	}while(op < 0 || op > 5);
	return op;
}

int View::menuAnimals() {
	int op = -1;
		do{
			cout<<"\n\n********** Menu Animals **********\n";
			cout<<"1 - Add Animal\n";
			cout<<"2 - Move Animal\n";
			cout<<"3 - Remove Animal\n";
			cout<<"4 - Animal List\n";
			cout<<"\n0 - Exit\n";
			op = Utils::getNumber("Option");
		}while(op < 0 || op > 4);
		return op;
}


int View::menuCages() {
	int op = -1;
		do{
			cout<<"\n\n********** Menu Cages **********\n";
			cout<<"1 - Add Cage\n";
			cout<<"2 - Remove Cage\n";
			cout<<"3 - Cage List\n";
			cout<<"4 - See Cage\n";
			cout<<"\n0 - Exit\n";
			op = Utils::getNumber("Option");

		}while(op < 0 || op > 4);
		return op;
}

int View::menuRecints() {
	int op = -1;
		do{
			cout<<"\n\n********** Menu Recints **********\n";
			cout<<"1 - Add Recint\n";
			cout<<"2 - Remove Recint\n";
			cout<<"3 - Recint List\n";
			cout<<"4 - See Recint\n";
			cout<<"\n0 - Exit\n";
			op = Utils::getNumber("Option");
		}while(op < 0 || op > 4);
		return op;
}

int View::menuStaff() {
	int op = -1;
		do{
			cout<<"\n\n********** Menu Staff **********\n";
			cout<<"1 - Add Staff\n";
			cout<<"2 - Move Staff\n";
			cout<<"3 - Remove Staff\n";
			cout<<"4 - Recint List\n";
			cout<<"\n0 - Exit\n";
			op = Utils::getNumber("Option");
		}while(op < 0 || op > 4);
		return op;
}

int View::menuStatistics() {
	int op = -1;
		do{
			cout<<"\n\n********** Menu Statistics **********\n";
			cout<<"1 - Visits per Recint\n";
			cout<<"2 - Number of clients per day\n";
			cout<<"\n0 - Exit\n";
			op = Utils::getNumber("Option");
		}while(op < 0 || op > 2);
		return op;
}
