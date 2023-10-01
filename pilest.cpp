#include "pilest.h"
#include "sharingCard.h"


stockPile::stockPile(borrowPile* _bPile, sf::Vector2i _offset) : pile(_offset), squaredPile(_offset), bPile(_bPile) {

}

bool stockPile::canSplit(unsigned int) {
	return false;
}

bool stockPile::canAppend(const pile&) {
	return false;
}

stockPile::~stockPile(void) {
}


stickyPile* stockPile::splitPile(const sf::Vector2i& mouseCoord) {
	if (containsPoint(mouseCoord))
	{
		bPile->sendAllToWaste();
		if (getSize() == 0)
			bPile->addToStock(*this);
		else {                                       //idhar 3 krnaa hai for 3 card 
			for (unsigned int i = 0; getSize() > 0 && i < 1; i++) {
				cards.back().flip();
				bPile->appendCard(cards.back());
				cards.pop_back();
			}
		}
	}
	return nullptr;
}
