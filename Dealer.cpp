#include "Dealer.h"

Dealer::Dealer():Player(){
	

}

void Dealer::dealerHitTilDone(Deck* BlackJackDeck, Player* player){//AI for dealer, to optimize chances for winning
while(/*this->getHandValue()<18||*/this->getHandValue()<player->getHandValue()){
				this->hit(BlackJackDeck->drawCard());
				this->calculateHandValue();
				}
}

void Dealer::printDealerHand(){
	std::cout<<"The Dealers Hand:\n";
	std::cout<<"--------------\n";
	for(Card* i:currentHand){
		i->printCard();
		std::cout<<"--------------\n";
	}

}


