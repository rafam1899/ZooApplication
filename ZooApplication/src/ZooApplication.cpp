//============================================================================
// Name        : ZooApplication.cpp
// Author      : Rafael Moreira & Tiago Oliveira
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#include <iostream>
#include <list>
#include "Controller.h"
#include "View.h"
#include "AnimalView.h"
#include "RecintView.h"
#include "CageView.h"
#include "Zoo.h"
#include "MockData.h"

using namespace std;

int main() {

	Zoo zoo("Quinta");

	MockData mock;
	mock.generateData(zoo);

	Controller controller(zoo);
	controller.run();
	cout << "Application has exited" << endl;

	return 0;
}
