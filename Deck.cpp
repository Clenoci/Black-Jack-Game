#include "Deck.h"
#include <ctime>        
#include <cstdlib>


Deck::Deck(){

}

void Deck::addCardsToDeck(){
//create Cards 1-13(11,12,13 for jack, queen, king) of the four different suites
	for(int i=1;i<14;i++){
		currentDeck.push_back(new Card(i,"SPADE"));
	}
	for(int i=1;i<14;i++){
		currentDeck.push_back(new Card(i,"CLUB"));
	}
	for(int i=1;i<14;i++){
		currentDeck.push_back(new Card(i,"DIAMOND"));
	}
	for(int i=1;i<14;i++){
		currentDeck.push_back(new Card(i,"HEART"));
	}
}

void Deck::printDeck(){//print out ever card in the Deck

	for(Card* i:currentDeck){
		i->printCard();
	}
}

Card* Deck::drawCard(){//removes card from deck, then return it
	Card* cardDrawn;
	cardDrawn=currentDeck.back();
	currentDeck.pop_back();
	return cardDrawn;

}

void Deck::shuffleDeck(){//shuffle Deck once 
	std::srand ( unsigned ( std::time(0) ) );
	std::random_shuffle(currentDeck.begin(),currentDeck.end());
}
