#pragma once

#include "cardpile.h"
#include "stpile.h"
#include "pilest.h"



class borrowPile : public stackPile, public fannedPile
{
private:
	stockPile waste;
public:

	borrowPile(sf::Vector2i = sf::Vector2i(0, 0), sf::Vector2f = sf::Vector2f(30.0, 15.0));
	bool canSplit(unsigned int);
	void addToStock(stockPile&);
	void sendAllToWaste();
	bool canAppend(const pile&);
	~borrowPile(void);

};

