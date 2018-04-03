#ifndef DEALER_H
#define DEALER_H
#include "Player.h"

class Dealer: public Player{
	
public:
	Dealer();
	void dealerHitTilDone(Deck* BlackJackDeck, Player* player);
	void printDealerHand();


private:


};

#endif