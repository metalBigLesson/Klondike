#pragma once

#include<iostream>
#include<tchar.h>
#include<string.h>
#include<string>

using namespace std;

enum Suit { Spade, Heart, Diamond, Club };

class CardType {
private:
	int rank;
	Suit suit;
	bool isFront;
	CardType* under;
	string rankStr() {
		switch (rank)
		{
		case 1: return "A ";
		case 10: return "10";
		case 11: return "J ";
		case 12: return "Q ";
		case 13: return "K ";
		default:
			return to_string(rank) + " ";
		}
	}
	string suitStr() {
		switch (suit)
		{
		case Spade: return "Sp";
		case Heart:return "He";
		case Diamond:return "Di";
		case Club:return "Cl";
		}
	}
public:
	CardType() {
	}
	CardType(int r, Suit s) {
		init(r, s);
	}
	void init(int r, Suit s) {
		rank = r;
		suit = s;
		isFront = false;
		under = nullptr;
	}
	void flip(bool front = true) {
		isFront = front;
	}
	void print() {
		if (!isFront) {
			cout << "????\t";
		}
		else
			cout << rankStr() << suitStr() << '\t';
	}
	bool isBlack() {
		switch (suit)
		{
		case Spade: case Club:
			return true; break;
			return false;
		}
	}
};

struct CardNode {
	CardType card;
	CardNode* next;
};