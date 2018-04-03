#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
#include <algorithm>
#include <cstdlib>


class Deck{

	public:
		Deck();
		void addCardsToDeck();
		void printDeck();
		Card* drawCard();
		void shuffleDeck();


	private:
		std::vector<Card*> currentDeck;
		

};


#endif//DECK_H
