#pragma once
#include "Enums.h"
#include "Card.h"

using namespace System;

public ref class Deck {
private:
    static array<Card^>^ arrCards;
    static bool isInitialized;

public:
    Deck() {
        arrCards = gcnew array<Card^>(52);
        //wykonywana tylko raz
        isInitialized = false;
        InitializeDeck();
    }

    void InitializeDeck() {
        if (!isInitialized) {
            int index = 0;
            for (int suit = (int)Suits::CLUBS; suit <= (int)Suits::SPADES; suit++) {
                for (int rank = 1; rank <= 13; rank++) {
                    int value = rank + 1;
                    arrCards[index++] = gcnew Card((Suits)suit, static_cast<Cards>(rank), value);
                }
            }
            isInitialized = true;
        }
    }

    //pobieranie ca³ej nazwy karty jako String przez index z arrCards
    String^ getCardNameById(int idx) {
        String^ cardName = CardNameToString(arrCards[idx]->rank) + "_" + SuitsToString(arrCards[idx]->suit);
        return cardName;
    }

    //pobieranie ca³ej nazwy karty jako String przez index z arrCards
    String^ getCardNameByCard(Card^ card) {
        String^ cardName_cardSuit = CardNameToString(card->rank) + "_" + SuitsToString(card->suit);
        return cardName_cardSuit;
    }
    

    array<Card^>^ getArrCards() {
        if (!isInitialized) {
            InitializeDeck();
        }
        return arrCards;
    }
};
