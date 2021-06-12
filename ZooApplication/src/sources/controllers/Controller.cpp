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
			CageContainer& CageContainer = this->zoo.getCageContainer();
			Animal animal = this->animalView.getAnimal(CageContainer);
			int cage = animal.getCage();
			if(CageContainer.get(cage)->getNumAnimals() > CageContainer.get(cage)->getCapacity()) {
				cout << "Cage is full" << endl;
			} else {
				AnimalContainer& container = this->zoo.getAnimalContainer();
				container.add(animal);
			}

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
				CageContainer& CageContainer = this->zoo.getCageContainer();
				int number = Utils::getNumber("Enter the Animal Number");
				AnimalContainer& container = this->zoo.getAnimalContainer();
				Animal* animal = container.get(number);
				int cage = animal->getCage();
				container.remove(number);
				this->animalView.printRemoveAnimal(animal, CageContainer.get(cage));
			}catch(DataConsistencyException& e){
				string str(e.what());
				cout<<str<<endl;
			}
		}
		break;
		case 4: {

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
		case 1: {
			Cage cage = this->cageView.getCage();
			CageContainer& container = this->zoo.getCageContainer();
			container.add(cage);
		}
		break;
		case 2: {
			try{
				int number = Utils::getNumber("Enter the Cage Number");
				CageContainer& container = this->zoo.getCageContainer();
				Cage* cage = container.get(number);
				container.remove(number);
				this->cageView.printRemoveCage(cage);
			}catch(DataConsistencyException& e){
				string str(e.what());
				cout<<str<<endl;
			}
		}
		break;
		case 3: {
			CageContainer& container = this->zoo.getCageContainer();
			list<Cage> cages = container.getAll();
			this->cageView.printCages(cages);
		}

		break;
		case 4: {
			try{
				int number = Utils::getNumber("Enter the Cage Number");
				CageContainer& container = this->zoo.getCageContainer();
				Cage *cage = container.get(number);
				AnimalContainer& containerAnimal = this->zoo.getAnimalContainer();
				list<Animal> animals = containerAnimal.getAnimalsCage(number);
				this->cageView.printCageAnimals(animals, *cage);
			}catch(DataConsistencyException& e){
				string str(e.what());
				cout<<str<<endl;
			}
		}
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
		case 1: {
			Recint recint = this->recintView.getRecint();
			RecintContainer& container = this->zoo.getRecintContainer();
			container.add(recint);
		}
		break;
		case 2: {
			try{
				int number = Utils::getNumber("Enter the Recint Number");
				RecintContainer& container = this->zoo.getRecintContainer();
				Recint* recint = container.get(number);
				container.remove(number);
				this->recintView.printRemoveRecint(recint);
			}catch(DataConsistencyException& e){
				string str(e.what());
				cout<<str<<endl;
			}
		}
		break;
		case 3: {
			RecintContainer& container = this->zoo.getRecintContainer();
			list<Recint> recints = container.getAll();
			this->recintView.printRecints(recints);
		}
		break;
		case 4: {
			try{
				int number = Utils::getNumber("Enter the Recint Number");
				RecintContainer& container = this->zoo.getRecintContainer();
				container.get(number);
			}catch(DataConsistencyException& e){
				string str(e.what());
				cout<<str<<endl;
			}
		}
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
		case 1: {
			Staff staff = this->staffView.getStaff();
			StaffContainer& container = this->zoo.getStaffContainer();
			container.add(staff);
		}
		break;
		case 2: {
			int recint;
			int number = Utils::getNumber("Enter the Staff Number");
			string name =  Utils::getString("Enter the Staff Name");
			StaffContainer& container = this->zoo.getStaffContainer();
			container.move(number,recint);
		}
		break;
		case 3: {
			try{
				int number = Utils::getNumber("Enter the Staff Number");
				StaffContainer& container = this->zoo.getStaffContainer();
				Staff* staff = container.get(number);
				container.remove(number);
				this->staffView.printRemoveStaff(staff);
			}catch(DataConsistencyException& e){
				string str(e.what());
				cout<<str<<endl;
			}
		}
		break;
		case 4: {
			StaffContainer& container = this->zoo.getStaffContainer();
			list<Staff> staff = container.getAll();
			this->staffView.printStaffs(staff);
		}
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


