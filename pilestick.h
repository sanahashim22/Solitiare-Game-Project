#pragma once
#include "cardpile.h"

class stickyPile : public fannedPile
{
public:
	stickyPile(pile*, unsigned int, sf::Vector2i = sf::Vector2i(0, 0), sf::Vector2f = sf::Vector2f(30.0, 15.0));
	~stickyPile(void);
	bool canAppend(const pile&);
	void onMouseUp(const vector<pile*>& piles);
	bool canSplit(unsigned int);
private:
	void returnCards();
	pile* parentPile;
};

