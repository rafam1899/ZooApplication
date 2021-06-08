/*
 * Controller.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_CONTROLLERS_CONTROLLER_H_
#define HEADERS_CONTROLLERS_CONTROLLER_H_
#include"../model/Zoo.h"
#include"../views/View.h"
#include"../views/AnimalView.h"
#include"../views/RecintView.h"
#include"../views/StaffView.h"
#include"../views/CageView.h"
#include"../views/StatisticsView.h"

class Controller{

private:
	Zoo zoo;
	View view;
	AnimalView animalView;
	RecintView recintView;
	CageView cageView;
	StaffView staffView;
	StatisticsView statisticsView;
	void runAnimals();
	void runRecints();
	void runCages();
	void runStaff();
	void runStatistics();
public:
	Controller(Zoo& zoo);
	void run();
};



#endif /* HEADERS_CONTROLLERS_CONTROLLER_H_ */
