/*
 * MockData.cpp
 *
 *  Created on: 20/04/2021
 *      Author: Rafael Moreira & Tiago Oliveira
 */

#include "MockData.h"

#include <DuplicatedDataException.h>


void  MockData::insertRecints(RecintContainer& container){
	for (size_t  i = 0; i < this->recints.size();i++){
		Recint obj(this->recints[i]);
		int num = (rand() % 1000) + 1;
		obj.setVisits(num);
		try{
			container.add(obj);
		}catch(DuplicatedDataException& e){
			//do nothing
		}
	}
}

void  MockData::insertCages(CageContainer& container,RecintContainer& containerRecint){

	for (size_t i = 0; i < cages_capacity.size();i++){
		Cage obj(cages_capacity[i], cages_recint[i]);
		Recint* recint = containerRecint.get(cages_recint[i]);
		int recint_id = cages_recint[i];
		obj.setRecint(recint_id);
		int num = recint->getNumCages();
		recint->setNumCages(num);
		try{
			container.add(obj,recint);
		}catch(DuplicatedDataException& e){
			//do nothing
		}

	}
}

void  MockData::insertStaff(StaffContainer& container,RecintContainer& containerRecint){
	for (size_t i = 0; i < name_staff.size();i++){
		Staff obj(name_staff[i]);
		Recint* recint = containerRecint.get(recints_id[i]);
		int recint_id = recints_id[i];
		obj.setRecint(recint_id);
		int staff_id = obj.getNumber();
		recint->setStaff(staff_id);
		try{
			container.add(obj);
		}catch(DuplicatedDataException& e){
			//do nothing
		}
	}
}

void  MockData::insertAnimals(AnimalContainer& container,CageContainer& containerCage){

	for (size_t i = 0; i < animals_gender.size();i++){
		Animal obj(animals_specie[i],animals_gender[i]);
		int cage_id = cages_id[i];
		obj.setCage(cage_id);
		Cage* cage = containerCage.get(cages_id[i]);
		int num = cage->getNumAnimals() + 1;
		cage->setNumAnimals(num);
		try{
			container.add(obj);
		}catch(DuplicatedDataException& e){
			//do nothing
		}

	}
}

void  MockData::generateData(Zoo& zoo){
	insertRecints(zoo.getRecintContainer());
	insertCages(zoo.getCageContainer(),zoo.getRecintContainer());
	insertStaff(zoo.getStaffContainer(),zoo.getRecintContainer());
	insertAnimals(zoo.getAnimalContainer(),zoo.getCageContainer());

}

