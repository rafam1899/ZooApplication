/*
 * Controller.cpp
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#include <iostream>
#include <string>
#include <tuple>
#include "Controller.h"
#include "Utils.h"
#include "DataConsistencyException.h"
#include "Zoo.h"

using namespace std;

Controller::Controller(Zoo& zoo){
	this->zoo = zoo;
}

void Controller::run(){
	int op = -1;
	do{
		op=this->view.menuZoo();
		switch(op){
		case 1:runAnimals();
		break;
		case 2:runCages();
		break;
		case 3:runRecints();
		break;
		case 4:runStaff();
		break;
		case 5:runStatistics();
				break;
		default:
			break;
		}
	}while(op!=0);

}

void Controller::runAnimals(){


}

void Controller::runCages(){
	int op = -1;
		do{
			op=this->view.menuCages();
			switch(op){
			case 1:
			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
			break;
			default:
				break;
			}
		}while(op!=0);


}

void Controller::runRecints(){


}

void Controller::runStaff(){


}

void Controller::runStatistics(){


}


