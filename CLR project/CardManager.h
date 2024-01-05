#pragma once

#include "Enums.h"
#include "Card.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
//namespace CLRproject;
    ref class CardManager
    {
    public:
        static String^ GetCardImagePath(Card^ card);
        static void AddCardToForm(Card^ card, Form^ form, int posX, int posY, int idx);
        static void ShowDeckOnForm(Form^ form);
        static void pictureBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
    };
