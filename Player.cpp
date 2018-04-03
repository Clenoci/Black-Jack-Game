#include "Player.h"


Player::Player(){
	handValue=0;
}


void Player::hit(Card* newCardInHand){
	//handValue=handValue+newCardInHand->getValue();
	currentHand.push_back(newCardInHand);

}

void Player::printPlayerHand(){
	std::cout<<"YourHand:\n";
	std::cout<<"--------------\n";
	for(Card* i:currentHand){
		i->printCard();
		std::cout<<"--------------\n";
		//std::cout<<"Your Hand Value is "<<this->getHandValue()<<"\n";
	}

}

void Player::calculateHandValue(){
	int handValueHolder=0;//holder to sum up value of all cards in players hand
	for(Card* i:currentHand){
		int thisCardNumber=i->getNumber();
		int thisCardValue=i->getValue();
		//std::cout<<"card value"<<thisCardValue<<"\ncard number"<<thisCardNumber;

		if(thisCardNumber==1&&handValue<11){//if an ace comes up and the players hand is below 11 the ace has a value of 11. Considered a "soft" hand
			i->setCardValue(11);
		}
		if (thisCardNumber==1&&handValue>10){//this checks to see if an ace is present and valued at 11
			i->setCardValue(1);//if so the value of an ace is dropped down to 1 so the player doesnt bust
		}
		handValueHolder=handValueHolder+i->getValue();	
		this->handValue=handValueHolder;
	}
	//this->handValue=handValueHolder;//set the players hand value to the calculated player hand value
}

void Player::printHandValue(){//prints all the cards in a players hand

	std::cout<<this->handValue<<"\n";
}

int Player::getHandValue(){//returns the value of the players hand
	return this->handValue;
}

int Player::bustHand(){//checks to see if a players hand is a bust
	if(this->handValue>21){
		return 1;
	}
	else return 0;
}
