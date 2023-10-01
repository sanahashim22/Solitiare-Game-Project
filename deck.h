#pragma once
#include <vector>
#include "pile.h"
#include "card.h"
#include "sharingCard.h"
#include "pilest.h"
#include "cardmake.h"
#include "pilebox.h"

class deck
{
public:
	deck();
	void reset();
	void shuffle();
	std::vector<pile*> getPiles();
	~deck();
private:
	std::vector<card> cards;
};

