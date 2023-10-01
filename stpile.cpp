#include "stpile.h"


stackPile::stackPile(sf::Vector2i offset) :pile(offset) {
}

stackPile::~stackPile(void) {
}


bool stackPile::canSplit(unsigned int cardIndex) {
	return commonSplitTest(cardIndex) && cardIndex == getSize() - 1;
}
