/*
 * StatisticsView.h
 *
 *  Created on: 08/06/2021
 *      Author: Tiago Oliveira
 */

#ifndef HEADERS_VIEWS_STATISTICSVIEW_H_
#define HEADERS_VIEWS_STATISTICSVIEW_H_

#include <list>
#include "../model/Recint.h"
#include "../model/Client.h"

class StatisticsView {

public:

	Client getClient(Client *client);
	void printVisitsPerRecint(list<Recint>& recint);
	void printClientsPerDay(list<Client>& clients);
}




#endif /* HEADERS_VIEWS_STATISTICSVIEW_H_ */
