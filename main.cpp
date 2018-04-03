
#include "Dealer.h"

int main(){

	int keepPlaying=1;
	int hitOrStay;
	std::cout<<"Welcome to the Table, Ready to Play Some BlackJack?\n\n";

	while(keepPlaying==1){//Keep playing until the play decides to stop playing
		
			Deck* BlackJackDeck=new Deck();//create new deck
			Player* Gambler= new Player();//creat new player
			Dealer* TheBestDealer= new Dealer();//create new dealer
			BlackJackDeck->addCardsToDeck();//Populate the deck with cards 
			for(int i =0;i<rand()%200+50;i++){//shuffle the deck a random amount of times to ensure is as random as possible
				BlackJackDeck->shuffleDeck();
			}
			Gambler->hit(BlackJackDeck->drawCard());//draw initial cards Player
			Gambler->hit(BlackJackDeck->drawCard());
			TheBestDealer->hit(BlackJackDeck->drawCard());//draw initial cards Dealer
			TheBestDealer->hit(BlackJackDeck->drawCard());
			Gambler->calculateHandValue();
			TheBestDealer->calculateHandValue();
			Gambler->printPlayerHand();
			if(Gambler->getHandValue()==21){//If your initial hand is 21, You have Blackjack and win
				std::cout<<"BLACKJACK!!! YOU WIN!!!\n";
				exit(0);
			}
			std::cout<<"Your current hand value is ";//print the hand value underneath the cards in your hand
			Gambler->printHandValue();
			std::cout<<"\n";

			
			while(Gambler->getHandValue()<21){//while not busted or at optimal score give the option to hit
				std::cout<<"Hit(1) or Stay(0)?\n";
				std::cin>>hitOrStay;
				if(hitOrStay==1){
					Gambler->hit(BlackJackDeck->drawCard());
				} 
				else break;
				Gambler->calculateHandValue();// recalculate player hand value everytime a card is added
				Gambler->printPlayerHand();
				std::cout<<"Your current hand value is ";
				Gambler->printHandValue();
				std::cout<<"\n";

			}
				if(Gambler->bustHand()==0){//as long as the player hasn't busted check what the dealer has for cards
					TheBestDealer->dealerHitTilDone(BlackJackDeck,Gambler);
			std::cout<<"Lets see what the Dealer has\n\n";
			TheBestDealer->printDealerHand();
			TheBestDealer->printHandValue();
			if(TheBestDealer->bustHand()==0){
				if(TheBestDealer->getHandValue()==Gambler->getHandValue()){
					std::cout<<"TIE, Push to next game\n";
				}
				if(TheBestDealer->getHandValue()>Gambler->getHandValue()){
					std::cout<<"The dealer had a better hand, you LOSE hahah\n";
				}
				if(TheBestDealer->getHandValue()<Gambler->getHandValue()){
					std::cout<<"You have the better hand, you WIN!\n";
				}
			}
			else std::cout<<"Dealer Busted! You win!!!\n";

			}
				else	std::cout<<"You Busted!! The casino is taking all of your money, too bad... \n";


		//}while(1);

	std::cout<<"Keep Playing? (yes(1)/no(0))\n";
	std::cin>>keepPlaying;
	}
}
