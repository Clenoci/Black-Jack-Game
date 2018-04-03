all: BlackJack

BlackJack:  Card.cpp main.cpp Deck.cpp Player.cpp Dealer.cpp
	g++ Card.cpp main.cpp Deck.cpp Player.cpp Dealer.cpp -std=c++11 -o BlackJacks
