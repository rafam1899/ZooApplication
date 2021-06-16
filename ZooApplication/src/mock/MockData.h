/*
 * MockData.cpp
 *
 *  Created on: 19/04/2021
 *      Author: Rafael Moreira & Tiago Oliveira
 */

#include <time.h>
#include<string>
#include<vector>

#include "Zoo.h"

using namespace std;

class MockData{
private:
	const int ENROLLS_NR = 5;
	const int LECTURES_NR = 5;
	const vector<string> recints = {"Jaula", "Selva", "Lago", "Savana"};
	const vector<int> cages_capacity = {3,2,3,4,5,1,2,3,4,5};
	const vector<int> cages_recint = {1,1,1,2,2,2,3,3,3,4};
	const vector<int> recints_id = {1,2,3,4};
	const vector<int> recints_id2 = {1,2,3,4,1,2,3,4,1,2};
	const vector<int> cages_id = {1,2,3,4,5,6,7,8,9,10};
	const vector<string> name_staff ={"João", "Paula", "Tomé", "Gonçalo"};
	const vector<string> animals_gender = {"macho","femea","femea", "macho","macho", "macho","femea","femea", "macho","macho"};
	const vector<string> animals_specie = {"Macaco","Macaco","Chimpanze", "Tigre","Puma", "Gorila","Hipopotamo","Crocodilo", "Elefante","Leao"};

	void insertRecints(RecintContainer& container);
	void insertCages(CageContainer& container,RecintContainer& containerRecint);
	void insertStaff(StaffContainer& container,RecintContainer& containerRecint);
	void insertAnimals(AnimalContainer& container,CageContainer& containerCage);
public:
	void generateData(Zoo& zoo);

};


