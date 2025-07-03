#include "KlonCard.h"
#include<iostream>

using namespace std;

int main(){
	CardType* allCards[4][13];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			allCards[i][j]->init(j + 1, static_cast<Suit>(i));
			allCards[i][j]->flip(true);
			allCards[i][j]->print();
		}
		cout << endl;
	}
	

	return 0;
}