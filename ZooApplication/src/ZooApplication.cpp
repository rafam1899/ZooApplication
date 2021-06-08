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

using namespace std;

int main() {

	Zoo zoo("Quinta");

	Controller controller(zoo);
	controller.run();
	cout << "Application has exited" << endl;

	return 0;
}
