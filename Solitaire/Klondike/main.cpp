#include "KlonCard.h"
#include<iostream>

using namespace std;

int main(){
	CardType card(10, Spade);
	card.printCard();
	CardType card2(7, Diamond);
	card2.printCard();
	return 0;
}