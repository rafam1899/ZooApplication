/*
 * Controller.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_CONTROLLERS_CONTROLLER_H_
#define HEADERS_CONTROLLERS_CONTROLLER_H_
#include"Zoo.h"
#include"View.h"
#include"AnimalView.h"
#include"RecintView.h"
#include"StaffView.h"
#include"CageView.h"
#include"StatisticsView.h"

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
