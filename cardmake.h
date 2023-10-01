#include "stpile.h"
#include "sqpile.h"



class foundationPile : public stackPile, public squaredPile
{
public:
	foundationPile(sf::Vector2i = sf::Vector2i(0, 0));
	~foundationPile(void);
	bool canAppend(const pile&);
	bool canSplit(unsigned int);
};
