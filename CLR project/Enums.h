#pragma once
//
// Tomasz Szymañski It Tomizon
// program gry w pokera  na zaliczenie
// copyright
//

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


//kolory kart
enum class Suits {
	/*TREFLE*/	CLUBS,
	/*-KARA-*/	DIAMONDS,
	/*-SERCA*/	HEARTS,
	/*-PIKI-*/	SPADES
};


//nawy kart
enum class Cards
{
	TWO = 1,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING,
	ACE
};

//zamiana enumów na stringi
inline String^ CardNameToString(Cards card) {
	switch (card) {
	case Cards::ACE: return "ACE";
	case Cards::TWO: return "TWO";
	case Cards::THREE: return "THREE";
	case Cards::FOUR: return "FOUR";
	case Cards::FIVE: return "FIVE";
	case Cards::SIX: return "SIX";
	case Cards::SEVEN: return "SEVEN";
	case Cards::EIGHT: return "EIGHT";
	case Cards::NINE: return "NINE";
	case Cards::TEN: return "TEN";
	case Cards::JACK: return "JACK";
	case Cards::QUEEN: return "QUEEN";
	case Cards::KING: return "KING";
	default: return "UNKNOWN";
	}
};

//zamiana kolorów na stringi
inline String^ SuitsToString(Suits suit) {
	switch (suit) {
	case Suits::CLUBS: return "CLUB";
	case Suits::DIAMONDS: return "DIAMOND";
	case Suits::HEARTS: return "HEART";
	case Suits::SPADES: return "SPADE";
	default: return "UNKNOWN";
	}
}

