#include "Card.h"
//hello
Card::Card(int value,std::string suite){
	numberOfCard=value;
	suiteOfCard= suite;

	if(value>10){
		valueOfCard=10;
	}
	else valueOfCard=value;

}


std::string Card::getSuite(){
return this->suiteOfCard;
}

void Card::printCard(){

	if(numberOfCard==1){
		std::cout<<"Card: Ace"<<"\nSuite: "<<this->suiteOfCard<<"\n";
	}
	if(numberOfCard==11){
	std::cout<<"Card: Jack"<<"\nSuite: "<<this->suiteOfCard<<"\n";
	}
	if(numberOfCard==12){

		std::cout<<"Card: Queen"<<"\nSuite: "<<this->suiteOfCard<<"\n";
	}
	if(numberOfCard==13){

		std::cout<<"Card: King"<<"\nSuite: "<<this->suiteOfCard<<"\n";
	}
	if(numberOfCard>1&&numberOfCard<11){
		std::cout<<"Card: "<<this->numberOfCard<<"\nSuite: "<<this->suiteOfCard<<"\n";
	}

}

void Card::setCardValue(int cardValue){

	this->valueOfCard=cardValue;
}
void Card::printCardValue(){
	std::cout<<this->valueOfCard;
}
int Card::getNumber(){
	return this->numberOfCard;
}
int Card::getValue(){
return this->valueOfCard;	

}
