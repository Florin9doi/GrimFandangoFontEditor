#include "stdafx.h"
#include "Character.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
#pragma once
namespace FontEditor {
	public ref class WindowForm : public System::Windows::Forms::Form 
	{
	private:
	array<Int32>^ a_header;
	array<Character^>^ characters;

	System::Void write_word(BinaryWriter^ out, Int16 val);
	System::Void write_dword(BinaryWriter^ out, Int32 val);
	System::Void btn_open_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void btn_save_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void btn_add_top_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void btn_rm_top_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void btn_add_btm_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void btn_rm_btm_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void btn_add_left_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void btn_rm_left_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void btn_add_right_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void btn_rm_right_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void button11_Click(System::Object^  sender, System::EventArgs^  e);
	System::Void listBox1_SelectedValueChanged(System::Object^  sender, System::EventArgs^  e);
	System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e);
	System::Void dataGridView1_CellContentDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e);
	System::Void dataGridView1_ColumnStateChanged(System::Object^  sender, System::Windows::Forms::DataGridViewColumnStateChangedEventArgs^  e);
	System::Void dataGridView1_RowStateChanged(System::Object^  sender, System::Windows::Forms::DataGridViewRowStateChangedEventArgs^  e);

	private: System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  btn_open;
	private: System::Windows::Forms::Button^  btn_save;


	private: System::Windows::Forms::Button^  btn_add_top;
	private: System::Windows::Forms::Button^  btn_rm_top;
	private: System::Windows::Forms::Button^  btn_add_btm;
	private: System::Windows::Forms::Button^  btn_rm_btm;




	private: System::Windows::Forms::Button^  btn_add_left;
	private: System::Windows::Forms::Button^  btn_rm_left;

	private: System::Windows::Forms::Button^  btn_add_right;
	private: System::Windows::Forms::Button^  btn_rm_right;


	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::ListBox^  listBox1;
			    
	public:
		WindowForm(void) {
			InitializeComponent();
		}

	protected:
		~WindowForm() {
			if (components) {
				delete components;
			}
		}

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btn_open = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_add_top = (gcnew System::Windows::Forms::Button());
			this->btn_rm_top = (gcnew System::Windows::Forms::Button());
			this->btn_add_btm = (gcnew System::Windows::Forms::Button());
			this->btn_rm_btm = (gcnew System::Windows::Forms::Button());
			this->btn_add_left = (gcnew System::Windows::Forms::Button());
			this->btn_rm_left = (gcnew System::Windows::Forms::Button());
			this->btn_add_right = (gcnew System::Windows::Forms::Button());
			this->btn_rm_right = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_open
			// 
			this->btn_open->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_open->Location = System::Drawing::Point(12, 13);
			this->btn_open->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_open->Name = L"btn_open";
			this->btn_open->Size = System::Drawing::Size(70, 20);
			this->btn_open->TabIndex = 0;
			this->btn_open->Text = L"Open file";
			this->btn_open->UseVisualStyleBackColor = true;
			this->btn_open->Click += gcnew System::EventHandler(this, &WindowForm::btn_open_Click);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listBox1->Location = System::Drawing::Point(12, 41);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(90, 446);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedValueChanged += gcnew System::EventHandler(this, &WindowForm::listBox1_SelectedValueChanged);
			// 
			// btn_save
			// 
			this->btn_save->Enabled = false;
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_save->Location = System::Drawing::Point(88, 13);
			this->btn_save->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(70, 20);
			this->btn_save->TabIndex = 2;
			this->btn_save->Text = L"Save as...";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &WindowForm::btn_save_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(134, 69);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::White;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(458, 419);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &WindowForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &WindowForm::dataGridView1_CellContentDoubleClick);
			this->dataGridView1->ColumnStateChanged += gcnew System::Windows::Forms::DataGridViewColumnStateChangedEventHandler(this, &WindowForm::dataGridView1_ColumnStateChanged);
			this->dataGridView1->RowStateChanged += gcnew System::Windows::Forms::DataGridViewRowStateChangedEventHandler(this, &WindowForm::dataGridView1_RowStateChanged);
			// 
			// btn_add_top
			// 
			this->btn_add_top->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_add_top->Location = System::Drawing::Point(108, 69);
			this->btn_add_top->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_add_top->Name = L"btn_add_top";
			this->btn_add_top->Size = System::Drawing::Size(20, 20);
			this->btn_add_top->TabIndex = 7;
			this->btn_add_top->Text = L"+";
			this->btn_add_top->UseVisualStyleBackColor = true;
			this->btn_add_top->Click += gcnew System::EventHandler(this, &WindowForm::btn_add_top_Click);
			// 
			// btn_rm_top
			// 
			this->btn_rm_top->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_rm_top->Location = System::Drawing::Point(108, 97);
			this->btn_rm_top->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_rm_top->Name = L"btn_rm_top";
			this->btn_rm_top->Size = System::Drawing::Size(20, 20);
			this->btn_rm_top->TabIndex = 9;
			this->btn_rm_top->Text = L"-";
			this->btn_rm_top->UseVisualStyleBackColor = true;
			this->btn_rm_top->Click += gcnew System::EventHandler(this, &WindowForm::btn_rm_top_Click);
			// 
			// btn_add_btm
			// 
			this->btn_add_btm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btn_add_btm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_add_btm->Location = System::Drawing::Point(108, 440);
			this->btn_add_btm->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_add_btm->Name = L"btn_add_btm";
			this->btn_add_btm->Size = System::Drawing::Size(20, 20);
			this->btn_add_btm->TabIndex = 10;
			this->btn_add_btm->Text = L"+";
			this->btn_add_btm->UseVisualStyleBackColor = true;
			this->btn_add_btm->Click += gcnew System::EventHandler(this, &WindowForm::btn_add_btm_Click);
			// 
			// btn_rm_btm
			// 
			this->btn_rm_btm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btn_rm_btm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_rm_btm->Location = System::Drawing::Point(108, 468);
			this->btn_rm_btm->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_rm_btm->Name = L"btn_rm_btm";
			this->btn_rm_btm->Size = System::Drawing::Size(20, 20);
			this->btn_rm_btm->TabIndex = 11;
			this->btn_rm_btm->Text = L"-";
			this->btn_rm_btm->UseVisualStyleBackColor = true;
			this->btn_rm_btm->Click += gcnew System::EventHandler(this, &WindowForm::btn_rm_btm_Click);
			// 
			// btn_add_left
			// 
			this->btn_add_left->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_add_left->Location = System::Drawing::Point(134, 41);
			this->btn_add_left->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_add_left->Name = L"btn_add_left";
			this->btn_add_left->Size = System::Drawing::Size(20, 20);
			this->btn_add_left->TabIndex = 12;
			this->btn_add_left->Text = L"+";
			this->btn_add_left->UseVisualStyleBackColor = true;
			this->btn_add_left->Click += gcnew System::EventHandler(this, &WindowForm::btn_add_left_Click);
			// 
			// btn_rm_left
			// 
			this->btn_rm_left->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_rm_left->Location = System::Drawing::Point(160, 41);
			this->btn_rm_left->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_rm_left->Name = L"btn_rm_left";
			this->btn_rm_left->Size = System::Drawing::Size(20, 20);
			this->btn_rm_left->TabIndex = 13;
			this->btn_rm_left->Text = L"-";
			this->btn_rm_left->UseVisualStyleBackColor = true;
			this->btn_rm_left->Click += gcnew System::EventHandler(this, &WindowForm::btn_rm_left_Click);
			// 
			// btn_add_right
			// 
			this->btn_add_right->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_add_right->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_add_right->Location = System::Drawing::Point(543, 41);
			this->btn_add_right->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_add_right->Name = L"btn_add_right";
			this->btn_add_right->Size = System::Drawing::Size(20, 20);
			this->btn_add_right->TabIndex = 14;
			this->btn_add_right->Text = L"+";
			this->btn_add_right->UseVisualStyleBackColor = true;
			this->btn_add_right->Click += gcnew System::EventHandler(this, &WindowForm::btn_add_right_Click);
			// 
			// btn_rm_right
			// 
			this->btn_rm_right->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_rm_right->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_rm_right->Location = System::Drawing::Point(572, 41);
			this->btn_rm_right->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_rm_right->Name = L"btn_rm_right";
			this->btn_rm_right->Size = System::Drawing::Size(20, 20);
			this->btn_rm_right->TabIndex = 15;
			this->btn_rm_right->Text = L"-";
			this->btn_rm_right->UseVisualStyleBackColor = true;
			this->btn_rm_right->Click += gcnew System::EventHandler(this, &WindowForm::btn_rm_right_Click);
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(490, 41);
			this->button11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(46, 20);
			this->button11->TabIndex = 16;
			this->button11->Text = L"Apply";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &WindowForm::button11_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(186, 41);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(50, 20);
			this->numericUpDown1->TabIndex = 17;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(242, 41);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(50, 20);
			this->numericUpDown2->TabIndex = 18;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(298, 41);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 127, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 128, 0, 0, System::Int32::MinValue });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(50, 20);
			this->numericUpDown3->TabIndex = 19;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(164, 13);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->ReadOnly = true;
			this->numericUpDown4->Size = System::Drawing::Size(50, 20);
			this->numericUpDown4->TabIndex = 20;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(220, 13);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->ReadOnly = true;
			this->numericUpDown5->Size = System::Drawing::Size(50, 20);
			this->numericUpDown5->TabIndex = 21;
			// 
			// WindowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 501);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->btn_rm_right);
			this->Controls->Add(this->btn_add_right);
			this->Controls->Add(this->btn_rm_left);
			this->Controls->Add(this->btn_add_left);
			this->Controls->Add(this->btn_rm_btm);
			this->Controls->Add(this->btn_add_btm);
			this->Controls->Add(this->btn_rm_top);
			this->Controls->Add(this->btn_add_top);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->btn_open);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MinimumSize = System::Drawing::Size(480, 250);
			this->Name = L"WindowForm";
			this->Text = L"Font Editor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

}; 
}
