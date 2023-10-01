

#include "card.h"





card::cardSuit card::getSuit() const {
	return suit;
}

card::cardRank card::getDescendent() {
	return cardRank(rank + 1);
}

card::card(cardRank _rank, cardSuit _suit) : rank(_rank), suit(_suit) {
}

card::cardColor card::getColor() {
	return cardColor(suit == DIAMONDS || suit == HEARTS);
}

card::cardRank card::getRank() const {
	return rank;
}

card::~card(void) {
}
