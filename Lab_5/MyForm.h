#pragma once

namespace Lab5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòâîğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ â³äêğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem1;
	private: System::Windows::Forms::Label^ label1;



	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòâîğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(574, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñòâîğèòèToolStripMenuItem,
					this->â³äêğèòèToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->ôàéëToolStripMenuItem->Text = L"Êîë³ğ";
			// 
			// ñòâîğèòèToolStripMenuItem
			// 
			this->ñòâîğèòèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem,
					this->çåëåíèéToolStripMenuItem, this->ñèí³éToolStripMenuItem
			});
			this->ñòâîğèòèToolStripMenuItem->Name = L"ñòâîğèòèToolStripMenuItem";
			this->ñòâîğèòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ñòâîğèòèToolStripMenuItem->Text = L"Òåêñò";
			// 
			// ÷åğâîíèéToolStripMenuItem
			// 
			this->÷åğâîíèéToolStripMenuItem->Name = L"÷åğâîíèéToolStripMenuItem";
			this->÷åğâîíèéToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->÷åğâîíèéToolStripMenuItem->Text = L"×åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem_Click);
			// 
			// çåëåíèéToolStripMenuItem
			// 
			this->çåëåíèéToolStripMenuItem->Name = L"çåëåíèéToolStripMenuItem";
			this->çåëåíèéToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->çåëåíèéToolStripMenuItem->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem_Click);
			// 
			// ñèí³éToolStripMenuItem
			// 
			this->ñèí³éToolStripMenuItem->Name = L"ñèí³éToolStripMenuItem";
			this->ñèí³éToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->ñèí³éToolStripMenuItem->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem_Click);
			// 
			// â³äêğèòèToolStripMenuItem
			// 
			this->â³äêğèòèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem1,
					this->çåëåíèéToolStripMenuItem1, this->ñèí³éToolStripMenuItem1
			});
			this->â³äêğèòèToolStripMenuItem->Name = L"â³äêğèòèToolStripMenuItem";
			this->â³äêğèòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->â³äêğèòèToolStripMenuItem->Text = L"Ôîí";
			// 
			// ÷åğâîíèéToolStripMenuItem1
			// 
			this->÷åğâîíèéToolStripMenuItem1->Name = L"÷åğâîíèéToolStripMenuItem1";
			this->÷åğâîíèéToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->÷åğâîíèéToolStripMenuItem1->Text = L"×åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem1_Click);
			// 
			// çåëåíèéToolStripMenuItem1
			// 
			this->çåëåíèéToolStripMenuItem1->Name = L"çåëåíèéToolStripMenuItem1";
			this->çåëåíèéToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->çåëåíèéToolStripMenuItem1->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem1_Click);
			// 
			// ñèí³éToolStripMenuItem1
			// 
			this->ñèí³éToolStripMenuItem1->Name = L"ñèí³éToolStripMenuItem1";
			this->ñèí³éToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->ñèí³éToolStripMenuItem1->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(102, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(265, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ĞĞÀĞÀĞÅĞÀĞÒÒÀÈÂÏÏÂÊÏÊÂÊÈÂÅÒÒ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(574, 483);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"ëàáà5";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

    private: System::Void ÷åğâîíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::Red;
    }
private: System::Void ÷åğâîíèéToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Red;
}
private: System::Void çåëåíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Green;
}
private: System::Void çåëåíèéToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Green;
}
private: System::Void ñèí³éToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Blue;
}
private: System::Void ñèí³éToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Blue;
}
};
}
