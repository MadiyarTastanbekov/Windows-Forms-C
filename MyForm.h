#pragma once

namespace Srs1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label1->Location = System::Drawing::Point(78, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(78, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label3->Location = System::Drawing::Point(78, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"X1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->Location = System::Drawing::Point(78, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Y1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label5->Location = System::Drawing::Point(77, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"X2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label6->Location = System::Drawing::Point(77, 250);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Y2";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(104, 118);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(104, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(104, 186);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(104, 224);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(104, 250);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(246, 212);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(389, 22);
			this->label7->TabIndex = 12;
			this->label7->Text = L"-------------------------------------------------------------X";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(420, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 352);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Y\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(417, 212);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 24);
			this->label9->TabIndex = 14;
			this->label9->Text = L"O";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(146, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"����������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label10->Location = System::Drawing::Point(466, 118);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 20);
			this->label10->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label11->Location = System::Drawing::Point(466, 138);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 20);
			this->label11->TabIndex = 17;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label12->Location = System::Drawing::Point(466, 158);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 20);
			this->label12->TabIndex = 18;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label13->Location = System::Drawing::Point(466, 250);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 20);
			this->label13->TabIndex = 19;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label14->Location = System::Drawing::Point(466, 282);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 20);
			this->label14->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label15->Location = System::Drawing::Point(466, 305);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 20);
			this->label15->TabIndex = 21;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label16->Location = System::Drawing::Point(323, 250);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 20);
			this->label16->TabIndex = 22;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label17->Location = System::Drawing::Point(323, 282);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 20);
			this->label17->TabIndex = 23;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label18->Location = System::Drawing::Point(323, 315);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 20);
			this->label18->TabIndex = 24;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label19->Location = System::Drawing::Point(323, 118);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 20);
			this->label19->TabIndex = 25;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label20->Location = System::Drawing::Point(323, 138);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 20);
			this->label20->TabIndex = 26;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label21->Location = System::Drawing::Point(323, 158);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 20);
			this->label21->TabIndex = 27;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label22->Location = System::Drawing::Point(52, 102);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(20, 20);
			this->label22->TabIndex = 28;
			this->label22->Text = L"A";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label23->Location = System::Drawing::Point(52, 173);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(29, 20);
			this->label23->TabIndex = 29;
			this->label23->Text = L"A1";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label24->Location = System::Drawing::Point(51, 232);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(29, 20);
			this->label24->TabIndex = 30;
			this->label24->Text = L"A2";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(65, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 31;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label25->Location = System::Drawing::Point(78, 282);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 20);
			this->label25->TabIndex = 32;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label26->Location = System::Drawing::Point(78, 305);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 20);
			this->label26->TabIndex = 33;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label27->Location = System::Drawing::Point(77, 325);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 20);
			this->label27->TabIndex = 34;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(660, 432);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Tastanbekov_Madiyar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double x, y, x1, y1, x2, y2;
	if (textBox1->Text != "" && textBox2->Text != "") {
		x = System::Convert::ToDouble(textBox1->Text);
		y = System::Convert::ToDouble(textBox2->Text);
		if (x == 0 && y == 0) { label25->Text = "� ���������� �� ������ ���������"; }

		else if (x > 0 && y >0)
		{
			label10->Text = "A("+x+";"+y+")=I";
		}
		if (x > 0 && y < 0) {
			label13->Text = "A(" + x + ";" + y + ")=IV";
	}
		if (x < 0 && y> 0)
		{
			label19->Text = "A(" + x + ";" + y + ")=II";
		}
		if (x < 0 && y < 0) {
			label6->Text = "A(" + x + ";" + y + ")=III";
		}
	}
	else { 
		textBox1->Text = "";
		textBox2->Text = ""; 
	}

	   if (textBox3->Text != "" && textBox4->Text != "") {
		   x1 = System::Convert::ToDouble(textBox3->Text);
		   y1 = System::Convert::ToDouble(textBox4->Text);
		   if (x1== 0 && y1== 0) { label26->Text = "�1 ���������� �� ������ ���������"; }
		   else if (x1 > 0 && y1 > 0)
		   {
			   label11->Text = "A1(" + x1 + ";" + y1 + ")=I";
		   }
		   if (x1> 0 && y1 < 0) {
			   label14->Text = "A1(" + x1 + ";" + y1 + ")=IV";

		   }
		   if (x1 < 0 && y1 > 0)
		   {
			   label20->Text = "A1(" + x1 + ";" + y1 + ")=II";
		   }
		   if (x1 < 0 && y1 < 0) {
			   label17->Text = "A1(" + x1 + ";" + y1 + ")=III";

		   }
	   }
	    
	   else {
		   textBox3->Text = "";
		   textBox4->Text = "";
	   }
	   if (textBox5->Text != "" && textBox6->Text != "") {
		   x2 = System::Convert::ToDouble(textBox5->Text);
		   y2 = System::Convert::ToDouble(textBox6->Text);
		   if (x2== 0 && y2== 0) { label27->Text = "�2 ���������� �� ������ ���������"; }
		   else if (x2 > 0 && y2 > 0)
		   {
			   label12->Text = "A2(" + x2 + ";" + y2 + ")=I";
		   }
		   if (x2 > 0 && y2 < 0) {
			   label15->Text = "A2(" + x2 + ";" + y2 + ")=IV";
		   }
		   if (x2 < 0 && y2 > 0)
		   {
			   label21->Text = "A2(" + x2 + ";" + y2 + ")=II";
		   }
		   if (x2 < 0 && y2 < 0) {
			   label18->Text = "A2(" + x2 + ";" + y2 + ")=III";
		   }
	   }
	   else {
		   textBox5->Text = "";
		   textBox6->Text = "";
	   }
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	label10->Text = "";
	label11->Text = ""; 
	label12->Text = "";
	label13->Text = "";
	label14->Text = "";
	label15->Text = "";
	label16->Text = "";
	label17->Text = "";
	label18->Text = "";
	label19->Text = "";
	label20->Text = "";
	label21->Text = "";
	label25->Text = "";
	label26->Text = "";
	label27->Text = "";
}
};
}
