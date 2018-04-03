#ifndef PLAYER_H
#define PLAYER_H
#include "Deck.h"
#include <iostream>

class Player{

	public:
		Player();
		void hit(Card* newCardInHand);
		void calculateHandValue();
		void printPlayerHand();
		void printHandValue();
		int getHandValue();
		int bustHand();


	protected:
		std::vector<Card*> currentHand;
		int handValue;




};

#endif