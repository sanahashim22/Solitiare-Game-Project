
#include "sharingCard.h"


void borrowPile::addToStock(stockPile& p) {
	while (waste.getSize() > 0) {
		p.appendCard(waste.cards.back());
		waste.cards.pop_back();
	}
}


bool borrowPile::canSplit(unsigned int cardIndex) {
	return stackPile::canSplit(cardIndex);
}



borrowPile::borrowPile(sf::Vector2i offset, sf::Vector2f visibility)
	: waste(nullptr), pile(offset), fannedPile(offset, fannedPile::RIGHT, visibility), stackPile(offset) {
}


bool borrowPile::canAppend(const pile& p) {
	return false;
}

void borrowPile::sendAllToWaste() {
	for (unsigned int i = 0; i < getSize(); i++) {
		cards[i].flip();
		waste.appendCard(cards[i]);
	}
	cards.clear();
}

borrowPile::~borrowPile(void) {
}
