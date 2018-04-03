#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>


class Card{

	public:
		Card(int value,std::string suite);
		std::string getSuite();
		int getValue();
		int getNumber();
		void printCard();
		void setCardValue(int cardValue);
		void printCardValue();

	private:
		int numberOfCard;
		int valueOfCard;
		std::string suiteOfCard;
		
};




#endif//CARD_H