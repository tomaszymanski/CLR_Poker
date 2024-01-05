#include "CardManager.h";
#include "Deck.h";
#include "Card.h";
#include "PlayerHand.h"
#include "Shuffle.h"



//zamiana Karty Card na œcie¿kê do obrazó kard "Img/NazwaKarty_Kolor.png"
String^ CardManager::GetCardImagePath(Card^ card) {
    Deck^ deck = gcnew Deck;
    deck->getCardNameByCard(card);
    return "Img/" + deck->getCardNameByCard(card) + ".png";
}


void CardManager::pictureBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    PictureBox^ picBox = dynamic_cast<PictureBox^>(sender);
    if (Shuffle::LastUniqueNumbers != nullptr)
    {
        if (picBox != nullptr && Array::IndexOf(Shuffle::LastUniqueNumbers, picBox->Tag) >= 0) {
            // Ustaw kolor i szerokoœæ pêdzla
            Pen^ pen = gcnew Pen(Color::BlueViolet, 3);
            // Narysuj prostok¹t wokó³ PictureBox
            e->Graphics->DrawRectangle(pen, 1, 1, picBox->Width - 3, picBox->Height - 3);
            delete pen; // Dobr¹ praktyk¹ jest zwalnianie zasobów GDI+ po u¿yciu
        }
    }
}
//test..definicja. rozmiar i lkalizacja. dynamiczne miniaturowe karty obrezuj¹ce arrCards
void CardManager::AddCardToForm(Card^ card, Form^ form, int posX, int posY, int idx) {
    PictureBox^ pictureBox = gcnew PictureBox();
    Label^ lbl = gcnew Label();
    //String^ str = (card->suit).ToString();
    lbl->Text = idx.ToString() + "|" + card->value.ToString(); // + "|" + card->suit.ToString() + "|"+str;
    //lbl->Font->Size = 12;
    pictureBox->Tag = idx;
    pictureBox->Image = Image::FromFile(GetCardImagePath(card));
    Point newLocation = Point(posX, posY);
    pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
    pictureBox->Size = System::Drawing::Size(33, 50);
    pictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(&CardManager::pictureBox_Paint);
    form->Controls->Add(pictureBox);
    form->Controls->Add(lbl);
    lbl->Size = System::Drawing::Size(33, 15);
    lbl->Location = newLocation;
    pictureBox->Location = newLocation;
    pictureBox->BringToFront();
    lbl->BringToFront();
}


//test..uk³adanie miniaturowych kart w kolumny
void CardManager::ShowDeckOnForm(Form^ form) {
    Deck^ deck;
    //deck.setCards();
    int posBezX = 1100;
    int posX = posBezX;
    int posY = 10;
    int cardWidth = 33;  // szerokoœæ karty
    int cardHeight = 50; // wysokoœæ karty
    int spacing = 5;     // Przerwa miêdzy kartami

    for (int i = 0; i < 52; ++i) {
        Card^ card = deck->getArrCards()[i];
        AddCardToForm(card, form, posX, posY, i);

        posY += cardHeight + spacing;
        if ((i + 1) % 13 == 0) {
            posY = 10;
            posX += cardWidth + spacing;    
        }
    }
}
