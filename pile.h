#pragma once
#include <vector>
#include "loader.h"
#include "size.h"
#include "pileOfcard.h"

class stickyPile;

class pile
{
public:
	pile(sf::Vector2i = sf::Vector2i(0, 0));
	~pile(void);
	unsigned int getSize() const;
	sf::Vector2i getOffset() const;
	void appendPile(const pile&);
	card getCard(unsigned int) const;
	virtual stickyPile* splitPile(const sf::Vector2i&);
	virtual void draw(sf::RenderWindow&) = 0;
	virtual void resetCardPositions() = 0;
	virtual unsigned int getWidth() const = 0;
	bool containsPoint(const sf::Vector2i&);
	bool isOverlapping(const pile&);
	void setPosition(sf::Vector2i);
	virtual sf::Vector2i getCardPosition(unsigned int) = 0;
	virtual bool canSplit(unsigned int) = 0;
	virtual unsigned int getHeight() const = 0;
	virtual int getCardAt(sf::Vector2i) = 0;
	virtual bool canAppend(const pile&) = 0;
	friend class borrowPile;
	friend class stockPile;
	friend class stickyPile;
	friend class deck;
protected:
	std::vector<pileCard> cards;
	sf::Vector2i offset;
	bool commonSplitTest(unsigned int);
	bool commonAppendTest(const pile&) const;
	void drawEmpty(sf::RenderWindow&);
	void appendCard(pileCard);

private:
	sf::Sprite emptyCard;
	sf::Texture emptyCardTexture;
};

