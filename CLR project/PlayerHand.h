#pragma once

#include "Shuffle.h"
#include "Deck.h"
#include "Card.h"
#include "CardValueComparer.h"

using namespace System::Collections::Generic;
using namespace System;

public ref class PlayerHand {

private:
   static Deck^ deck = gcnew Deck();
   static array<Card^>^ arrCardHand = gcnew array<Card^>(5);
   static array<int>^ playerHandNumbersSorted;
public:


   
    // Metoda do sortowania rêki gracza
    static void SortPlayerHand() {
        for (int i = 0; i < Shuffle::LastUniqueNumbers->Length; ++i) {
            int id = Shuffle::LastUniqueNumbers[i];
            arrCardHand[i] = deck->getArrCards()[id];
            
        }
        
        Array::Sort(arrCardHand, gcnew CardValueComparer());
       
    }

    static property array<Card^>^ ArrCardHandSort {
         array<Card^>^ get() {
            return arrCardHand;
         }   
    }

};
