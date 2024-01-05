#pragma once
#include "Enums.h"
#include "Deck.h"
#include "Card.h"
#include "CardManager.h"
#include "Shuffle.h"
#include "PlayerHand.h"

namespace CLRproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	//using vec = std::vector<int>;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	/// 


	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			
			
			//inicjalizacja talii kart tablicy arrDeck
			Deck^ deck = gcnew Deck();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ PokerGame;
	private: System::Windows::Forms::Button^ btnRozdaj;


	private: System::Windows::Forms::PictureBox^ k1;
	private: System::Windows::Forms::PictureBox^ k2;
	private: System::Windows::Forms::PictureBox^ k3;
	private: System::Windows::Forms::PictureBox^ k4;
	private: System::Windows::Forms::PictureBox^ k5;
	private: System::Windows::Forms::TableLayoutPanel^ pnlMain;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pboxDeck;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ btnTalia;
	private: System::Windows::Forms::Label^ lblUnSort;
	private: System::Windows::Forms::Label^ lblSort;


	private: System::Windows::Forms::Button^ btnSort;







	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->PokerGame = (gcnew System::Windows::Forms::PictureBox());
			this->btnRozdaj = (gcnew System::Windows::Forms::Button());
			this->k1 = (gcnew System::Windows::Forms::PictureBox());
			this->k2 = (gcnew System::Windows::Forms::PictureBox());
			this->k3 = (gcnew System::Windows::Forms::PictureBox());
			this->k4 = (gcnew System::Windows::Forms::PictureBox());
			this->k5 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlMain = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pboxDeck = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->btnTalia = (gcnew System::Windows::Forms::Button());
			this->lblUnSort = (gcnew System::Windows::Forms::Label());
			this->lblSort = (gcnew System::Windows::Forms::Label());
			this->btnSort = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PokerGame))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->k1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->k2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->k3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->k4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->k5))->BeginInit();
			this->pnlMain->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pboxDeck))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// PokerGame
			// 
			this->PokerGame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PokerGame.BackgroundImage")));
			this->PokerGame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PokerGame->Location = System::Drawing::Point(-355, -292);
			this->PokerGame->Name = L"PokerGame";
			this->PokerGame->Size = System::Drawing::Size(2116, 1491);
			this->PokerGame->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PokerGame->TabIndex = 1;
			this->PokerGame->TabStop = false;
			// 
			// btnRozdaj
			// 
			this->btnRozdaj->Location = System::Drawing::Point(626, 888);
			this->btnRozdaj->Name = L"btnRozdaj";
			this->btnRozdaj->Size = System::Drawing::Size(118, 53);
			this->btnRozdaj->TabIndex = 3;
			this->btnRozdaj->Text = L"wypisz karty";
			this->btnRozdaj->UseVisualStyleBackColor = true;
			this->btnRozdaj->Click += gcnew System::EventHandler(this, &MainForm::btnRozdaj_Click);
			// 
			// k1
			// 
			this->k1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"k1.Image")));
			this->k1->Location = System::Drawing::Point(3, 3);
			this->k1->Name = L"k1";
			this->k1->Size = System::Drawing::Size(135, 200);
			this->k1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->k1->TabIndex = 4;
			this->k1->TabStop = false;
			this->k1->Click += gcnew System::EventHandler(this, &MainForm::k1_Click);
			// 
			// k2
			// 
			this->k2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"k2.Image")));
			this->k2->Location = System::Drawing::Point(144, 3);
			this->k2->Name = L"k2";
			this->k2->Size = System::Drawing::Size(135, 200);
			this->k2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->k2->TabIndex = 4;
			this->k2->TabStop = false;
			this->k2->Click += gcnew System::EventHandler(this, &MainForm::k2_Click);
			// 
			// k3
			// 
			this->k3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"k3.Image")));
			this->k3->Location = System::Drawing::Point(285, 3);
			this->k3->Name = L"k3";
			this->k3->Size = System::Drawing::Size(133, 200);
			this->k3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->k3->TabIndex = 4;
			this->k3->TabStop = false;
			this->k3->Click += gcnew System::EventHandler(this, &MainForm::k3_Click);
			// 
			// k4
			// 
			this->k4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"k4.Image")));
			this->k4->Location = System::Drawing::Point(426, 3);
			this->k4->Name = L"k4";
			this->k4->Size = System::Drawing::Size(135, 200);
			this->k4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->k4->TabIndex = 4;
			this->k4->TabStop = false;
			this->k4->Click += gcnew System::EventHandler(this, &MainForm::k4_Click);
			// 
			// k5
			// 
			this->k5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"k5.Image")));
			this->k5->Location = System::Drawing::Point(567, 3);
			this->k5->Name = L"k5";
			this->k5->Size = System::Drawing::Size(135, 200);
			this->k5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->k5->TabIndex = 4;
			this->k5->TabStop = false;
			this->k5->Click += gcnew System::EventHandler(this, &MainForm::k5_Click);
			// 
			// pnlMain
			// 
			this->pnlMain->AutoSize = true;
			this->pnlMain->BackColor = System::Drawing::Color::Green;
			this->pnlMain->ColumnCount = 5;
			this->pnlMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->pnlMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->pnlMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->pnlMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->pnlMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->pnlMain->Controls->Add(this->k1, 0, 0);
			this->pnlMain->Controls->Add(this->k2, 1, 0);
			this->pnlMain->Controls->Add(this->k3, 2, 0);
			this->pnlMain->Controls->Add(this->k4, 3, 0);
			this->pnlMain->Controls->Add(this->k5, 4, 0);
			this->pnlMain->Location = System::Drawing::Point(326, 510);
			this->pnlMain->Name = L"pnlMain";
			this->pnlMain->RowCount = 1;
			this->pnlMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->pnlMain->Size = System::Drawing::Size(705, 206);
			this->pnlMain->TabIndex = 5;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Green;
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox5, 4, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(323, 193);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(705, 206);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 200);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(144, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(135, 200);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(285, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(133, 200);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(426, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(135, 200);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(567, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(135, 200);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pboxDeck
			// 
			this->pboxDeck->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pboxDeck.Image")));
			this->pboxDeck->Location = System::Drawing::Point(1102, 352);
			this->pboxDeck->Name = L"pboxDeck";
			this->pboxDeck->Size = System::Drawing::Size(135, 200);
			this->pboxDeck->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pboxDeck->TabIndex = 4;
			this->pboxDeck->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1078, 392);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(135, 200);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1111, 377);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(135, 200);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 4;
			this->pictureBox7->TabStop = false;
			// 
			// btnTalia
			// 
			this->btnTalia->Location = System::Drawing::Point(799, 888);
			this->btnTalia->Name = L"btnTalia";
			this->btnTalia->Size = System::Drawing::Size(118, 53);
			this->btnTalia->TabIndex = 3;
			this->btnTalia->Text = L"wypisz taliê";
			this->btnTalia->UseVisualStyleBackColor = true;
			this->btnTalia->Click += gcnew System::EventHandler(this, &MainForm::btnTalia_Click);
			// 
			// lblUnSort
			// 
			this->lblUnSort->AutoSize = true;
			this->lblUnSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblUnSort->ForeColor = System::Drawing::Color::Coral;
			this->lblUnSort->Location = System::Drawing::Point(324, 719);
			this->lblUnSort->Name = L"lblUnSort";
			this->lblUnSort->Size = System::Drawing::Size(92, 25);
			this->lblUnSort->TabIndex = 6;
			this->lblUnSort->Text = L"lblUnSort";
			// 
			// lblSort
			// 
			this->lblSort->AutoSize = true;
			this->lblSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblSort->Location = System::Drawing::Point(324, 482);
			this->lblSort->Name = L"lblSort";
			this->lblSort->Size = System::Drawing::Size(67, 25);
			this->lblSort->TabIndex = 6;
			this->lblSort->Text = L"lblSort";
			// 
			// btnSort
			// 
			this->btnSort->Location = System::Drawing::Point(470, 888);
			this->btnSort->Name = L"btnSort";
			this->btnSort->Size = System::Drawing::Size(118, 53);
			this->btnSort->TabIndex = 3;
			this->btnSort->Text = L"posortuj karty";
			this->btnSort->UseVisualStyleBackColor = true;
			this->btnSort->Click += gcnew System::EventHandler(this, &MainForm::btnSort_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1758, 976);
			this->Controls->Add(this->lblSort);
			this->Controls->Add(this->lblUnSort);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pboxDeck);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->pnlMain);
			this->Controls->Add(this->btnTalia);
			this->Controls->Add(this->btnSort);
			this->Controls->Add(this->btnRozdaj);
			this->Controls->Add(this->PokerGame);
			this->Name = L"MainForm";
			this->Text = L"CLRPoker";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PokerGame))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->k1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->k2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->k3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->k4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->k5))->EndInit();
			this->pnlMain->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pboxDeck))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

		static void addCardToForm(Card^ card, Form^ form, int posX, int posY) {
			PictureBox^ pictureBox = gcnew PictureBox();
		
			/*pictureBox->Image = Image::FromFile("Img/card");*/
			String^ cardImageName = CardNameToString(card->rank) + "_" + SuitsToString(card->suit) + ".png";
			String^ imagePath = "Img/" + cardImageName;


			pictureBox->Image = Image::FromFile(imagePath);
			pictureBox->Location = System::Drawing::Point(posX, posY);
			pictureBox->Name = CardNameToString(card->rank) + "_" + SuitsToString(card->suit);
			pictureBox->Size = System::Drawing::Size(200, 200);
			pictureBox->Visible = true;
			pictureBox->BringToFront();
			pictureBox->SizeMode = PictureBoxSizeMode::AutoSize;
			//pictureBox->SizeMode = PictureBoxSizeMode::AutoSize;
			form->Controls->Add(pictureBox);
		}

		

		static void addCardToPBox(int idx, PictureBox^ pictureBox) {

			//PictureBox^ pictureBox = gcnew PictureBox();
			/*pictureBox->Image = Image::FromFile("Img/card");*/
			Deck^ deck = gcnew Deck();
			//deck.setCards();
			String^ name_karta = CardNameToString(deck->getArrCards()[idx]->rank) + "_" + SuitsToString(deck->getArrCards()[idx]->suit);
			//Cards name_suit = dec.arrCards[idx].suit
			String^ cardImageName = name_karta + ".png";
			String^ imagePath = "Img/" + cardImageName; // 

			pictureBox->Image = Image::FromFile(imagePath);

		}
		
	private: System::Void btnSort_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = "";
		String^ strInd = "";
		Deck^ deck = gcnew Deck();
		//PlayerHand::FetchAndCopyUniqueNumbers();
		//PlayerHand::SortPlayerHand();

		//for each (int id in PlayerHand::PlayerHandNumbers)
		//{
			//str += deck->getCardNameById(id) + " | ";
			//strInd += id.ToString() + " | ";
		//}
		PlayerHand::SortPlayerHand();
		//auto indices
		for each (Card^ card in PlayerHand::ArrCardHandSort) {
			str += deck->getCardNameByCard(card)  + "->" + card->value.ToString() + " | ";
			//strInd += card->value.ToString() + " | ";
		}
		auto indices = Shuffle::LastUniqueNumbers;
		//lblUnSort->Text = "Value -> " + strInd;
		lblSort->Text = "Posortowane -> " + str;
		addCardToPBox(indices[0], k1);
		addCardToPBox(indices[1], k2);
		addCardToPBox(indices[2], k3);
		addCardToPBox(indices[3], k4);
		addCardToPBox(indices[4], k5);

	}



	private: System::Void btnRozdaj_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str;
		String^ strInd;
		Shuffle shuffle;
		Deck^ deck = gcnew Deck();
		 //InitializeRandom();
		auto indices = shuffle.GenerateUniqueNumbers(5, 51);;
		//indices->Sort();
		int idg = 0;
		for each (int id in Shuffle::LastUniqueNumbers)
		{
			//str += deck->getCardNameById(id) + " | " + id.ToString() + " | ";
			str += id.ToString() + " " + CardNameToString(deck->getArrCards()[id]->rank) + "_" + SuitsToString(deck->getArrCards()[id]->suit) + " | ";
			strInd += indices[idg++].ToString() + " | ";
		}
		
		lblUnSort->Text = "LastUniqueNumbers     -> " + str;
		lblSort->Text   = "GenerateUniqueNumbers -> " + strInd;
		addCardToPBox(indices[0], k1);
		addCardToPBox(indices[1], k2);
		addCardToPBox(indices[2], k3);
		addCardToPBox(indices[3], k4);
		addCardToPBox(indices[4], k5);
	}

		   // Deklaracja funkcji, która bêdzie u¿ywana do obs³ugi klikniêæ PictureBox
		   void HandlePictureBoxClick(PictureBox^ originalPictureBox, TableLayoutPanel^ panel, int offsetUp) {
			   if (originalPictureBox != nullptr && panel != nullptr) {
				   // Ukryj oryginaln¹ PictureBox
				   originalPictureBox->Visible = false;

				   // Stwórz now¹ PictureBox i skopiuj w³aœciwoœci
				   PictureBox^ newPictureBox = gcnew PictureBox();
				   newPictureBox->Image = originalPictureBox->Image;
				   newPictureBox->Size = originalPictureBox->Size;
				   newPictureBox->SizeMode = originalPictureBox->SizeMode;
				   // Mo¿esz dodaæ inne w³aœciwoœci do skopiowania

				   // Oblicz now¹ lokalizacjê w kontekœcie formularza
				   Point panelLocation = panel->PointToScreen(Point(0, 0));
				   Point cellLocation = originalPictureBox->Location;
				   Point formLocation = this->PointToClient(panelLocation);
				   Point newLocation = Point(formLocation.X + cellLocation.X, formLocation.Y + cellLocation.Y - offsetUp);

				   // Dodaj now¹ PictureBox do formularza
				   this->Controls->Add(newPictureBox);
				   newPictureBox->Location = newLocation;
				   newPictureBox->BringToFront();

				   // Zapisz oryginaln¹ PictureBox w tagu nowej PictureBox, abyœmy mogli j¹ potem odnaleŸæ
				   newPictureBox->Tag = originalPictureBox;

				   // Dodaj zdarzenie klikniêcia do nowej PictureBox
				   newPictureBox->Click += gcnew System::EventHandler(this, &MainForm::NewPictureBox_Click);
			   }
		   }

		   // Metoda obs³ugi zdarzenia klikniêcia dla nowej PictureBox
	private: System::Void NewPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		// Rzutowanie sendera do PictureBox
		PictureBox^ newPictureBox = safe_cast<PictureBox^>(sender);
		// ZnajdŸ oryginaln¹ PictureBox zapisan¹ w Tag
		PictureBox^ originalPictureBox = safe_cast<PictureBox^>(newPictureBox->Tag);

		if (originalPictureBox != nullptr) {
			// Usuñ now¹ PictureBox z formularza
			this->Controls->Remove(newPictureBox);
			// Odkryj oryginaln¹ PictureBox
			originalPictureBox->Visible = true;
		}
	}
	private: System::Void k1_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ clickedPictureBox = safe_cast<PictureBox^>(sender);
		HandlePictureBoxClick(clickedPictureBox, pnlMain, 10);
	}






	private: System::Void k2_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ clickedPictureBox = safe_cast<PictureBox^>(sender);
		HandlePictureBoxClick(clickedPictureBox, pnlMain, 10);
	}
	private: System::Void k3_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ clickedPictureBox = safe_cast<PictureBox^>(sender);
		HandlePictureBoxClick(clickedPictureBox, pnlMain, 10);
	}
	private: System::Void k5_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ clickedPictureBox = safe_cast<PictureBox^>(sender);
		HandlePictureBoxClick(clickedPictureBox, pnlMain, 10);
	}
	private: System::Void k4_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ clickedPictureBox = safe_cast<PictureBox^>(sender);
		HandlePictureBoxClick(clickedPictureBox, pnlMain, 10);
	}

	private: System::Void btnTalia_Click(System::Object^ sender, System::EventArgs^ e) {

		CardManager::ShowDeckOnForm(this);

	}
	};
}


