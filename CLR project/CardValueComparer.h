#include "Card.h"

#pragma once

using namespace System::Collections;

public ref class CardValueComparer : System::Collections::IComparer{
public:
    virtual int Compare(Object^ x, Object^ y) {
        Card^ card1 = dynamic_cast<Card^>(x);
        Card^ card2 = dynamic_cast<Card^>(y);
        if (card1 == nullptr || card2 == nullptr) {
            throw gcnew InvalidOperationException("oba musz¹ byæ typu Card.");
        }
        return card1->value.CompareTo(card2->value);
    }
};
