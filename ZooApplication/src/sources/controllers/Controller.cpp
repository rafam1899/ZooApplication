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

	int op = -1;

	do{
		op=this->view.menuAnimals();
		switch(op){
		case 1: {
			Animal animal = this->animalView.getAnimal();
			AnimalContainer& container = this->zoo.getAnimalContainer();
			container.add(animal);
		}

		break;
		case 2: {
			int cage;
			int number = Utils::getNumber("Enter the Animal Number");
			string name =  Utils::getString("Enter the Animal Name");
			AnimalContainer& container = this->zoo.getAnimalContainer();
			container.move(number,cage);
		}

		break;
		case 3: {
			try{
				int number = Utils::getNumber("Enter the Animal Number");
				AnimalContainer& container = this->zoo.getAnimalContainer();
				container.remove(number);
			}catch(DataConsistencyException& e){
				string str(e.what());
				cout<<str<<endl;
			}
		}
		break;
		case 4: {
			cout<< "*****" << this->zoo.getName() << "*****" <<endl;
			AnimalContainer& container = this->zoo.getAnimalContainer();
			list<Animal> animals = container.getAll();
			this->animalView.printAnimals(animals);

		}
		break;
		default:
			break;
		}

	}while(op!=0);

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

	int op = -1;

	do{
		op=this->view.menuRecints();
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

void Controller::runStaff(){

	int op = -1;

	do{
		op=this->view.menuStaff();
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

void Controller::runStatistics(){

	int op = -1;

	do{
		op=this->view.menuStatistics();
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


