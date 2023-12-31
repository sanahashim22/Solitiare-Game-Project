#include "sqpile.h"


sf::Vector2i squaredPile::getCardPosition(unsigned int) {
	return offset;
}

void squaredPile::draw(sf::RenderWindow& window) {
	if (getSize() == 0)
		drawEmpty(window);
	else
		cards.back().draw(window);
}


squaredPile::squaredPile(sf::Vector2i offset) :pile(offset) {

}

void squaredPile::resetCardPositions() {
	for (unsigned int i = 0; i < getSize(); i++)
		cards[i].setOffset(offset);
}

unsigned int squaredPile::getWidth() const {
	return pileCard::WIDTH;
}

unsigned int squaredPile::getHeight() const {
	return pileCard::HEIGHT;
}

int squaredPile::getCardAt(sf::Vector2i point) {
	if (!containsPoint(point))
		return -2;

	if (getSize() == 0)
		return -1;

	return getSize() - 1;
}
squaredPile::~squaredPile(void) {
}
