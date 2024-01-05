#pragma once

#include "Enums.h"

using namespace System;

//// Przedrostek "E" oznacza, ¿e s¹ to typy wyliczeniowe (enumerations).
//public enum class ECards {
//    ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
//};
//
//public enum class ESuits {
//    CLUBS, DIAMONDS, HEARTS, SPADES
//};

public ref class Card {
public:
    Suits suit;
    Cards rank;
    int value;

    Card(Suits suit, Cards rank, int value) : suit(suit), rank(rank), value(value) {}

    // Funkcja pomocnicza do konwersji na ³añcuch znaków.
   /* static String^ ToString(Suits suit, Cards rank) {
        return Enum::GetName(Cards::typeid, rank) + " of " + Enum::GetName(Suits::typeid, suit);
    }*/
};

