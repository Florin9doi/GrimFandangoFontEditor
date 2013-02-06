#pragma once
namespace GrimFandango {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	private: array<Int32>^ a_header;
	private: value struct font{
				 Int16 num;
				 Int32 offset;
				 Byte a,b;
				 Int16 c;
				 Int32 col, row;
				 Byte *bitmap;
			 };
	private: array<font>^ grimf;
	private: System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::ListBox^  listBox1;
			    
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(12, 13);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 20);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Open file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
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
			this->listBox1->SelectedValueChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedValueChanged);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(88, 13);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 20);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Save as...";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
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
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentDoubleClick);
			this->dataGridView1->ColumnStateChanged += gcnew System::Windows::Forms::DataGridViewColumnStateChangedEventHandler(this, &Form1::dataGridView1_ColumnStateChanged);
			this->dataGridView1->RowStateChanged += gcnew System::Windows::Forms::DataGridViewRowStateChangedEventHandler(this, &Form1::dataGridView1_RowStateChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(108, 69);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(20, 20);
			this->button3->TabIndex = 7;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(108, 97);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(20, 20);
			this->button4->TabIndex = 9;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(108, 440);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(20, 20);
			this->button5->TabIndex = 10;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(108, 468);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(20, 20);
			this->button6->TabIndex = 11;
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(134, 41);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(20, 20);
			this->button7->TabIndex = 12;
			this->button7->Text = L"+";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(160, 41);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(20, 20);
			this->button8->TabIndex = 13;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(543, 41);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(20, 20);
			this->button9->TabIndex = 14;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(572, 41);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(20, 20);
			this->button10->TabIndex = 15;
			this->button10->Text = L"-";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
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
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(186, 41);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(50, 20);
			this->numericUpDown1->TabIndex = 17;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(242, 41);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(50, 20);
			this->numericUpDown2->TabIndex = 18;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(298, 41);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {127, 0, 0, 0});
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {128, 0, 0, System::Int32::MinValue});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(50, 20);
			this->numericUpDown3->TabIndex = 19;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(164, 13);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->ReadOnly = true;
			this->numericUpDown4->Size = System::Drawing::Size(50, 20);
			this->numericUpDown4->TabIndex = 20;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(220, 13);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->ReadOnly = true;
			this->numericUpDown5->Size = System::Drawing::Size(50, 20);
			this->numericUpDown5->TabIndex = 21;
			// 
			// Form1
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
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MinimumSize = System::Drawing::Size(480, 250);
			this->Name = L"Form1";
			this->Text = L"Grim Fandango";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void write_word(BinaryWriter^ out, Int16 val) {
				 out->Write( (Byte)(val    & 0xFF ));
				 out->Write( (Byte)(val>>8 & 0xFF ));
			 }
	private: System::Void write_dword(BinaryWriter^ out, Int32 val) {
				 out->Write( (Byte)(val     & 0xFF ));
				 out->Write( (Byte)(val>> 8 & 0xFF ));
				 out->Write( (Byte)(val>>16 & 0xFF ));
				 out->Write( (Byte)(val>>24 & 0xFF ));
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				 openFileDialog1->InitialDirectory = Environment::GetFolderPath(Environment::SpecialFolder::Desktop);
				 openFileDialog1->Filter = "laf files (*.laf)|*.laf|All files (*.*)|*.*";
				 openFileDialog1->RestoreDirectory = true;
					 
				 if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
				 {   FileStream^ fs = gcnew FileStream(openFileDialog1->FileName, FileMode::Open);
					 BinaryReader^ br = gcnew BinaryReader(fs);
					 a_header = gcnew array<Int32>(8);
					 grimf = gcnew array<font>(256);

					 for(int i=0; i<8; i++)  a_header[i] = br->ReadInt32();					 
					 for(int i=0; i<256; i++)  grimf[i].num = br->ReadInt16();
					 for(int i=0; i<256; i++)
					 {   grimf[i].offset = br->ReadInt32();
						 grimf[i].a = br->ReadByte();
						 grimf[i].b = br->ReadByte();
						 grimf[i].c = br->ReadInt16();
						 grimf[i].col = br->ReadInt32();
						 grimf[i].row = br->ReadInt32();
					 }
					 for(int i=0; i<256; i++)
					 {   grimf[i].bitmap = new Byte[grimf[i].col * grimf[i].row];
						 for(int j=0; j < grimf[i].col * grimf[i].row; j++)
							 grimf[i].bitmap[j] = br->ReadByte();
					 }
					 fs->Close();					 
					 button2->Enabled = true;
					 listBox1->Items->Clear();
					 for(int i=0; i<256; i++)
						 listBox1->Items->Add( "0x"+ grimf[i].num.ToString("X2") +"  ["+ Convert::ToChar(grimf[i].num) +"]");
				} 
			 }			 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {			 
			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
			 saveFileDialog1->Filter = "laf files (*.laf)|*.laf";
			 saveFileDialog1->ShowDialog();
			
			 if(saveFileDialog1->FileName != "")
			 {   FileStream^ fs = gcnew FileStream(saveFileDialog1->FileName, FileMode::Create);
				 BinaryWriter^ w = gcnew BinaryWriter(fs);
				 int offset;

				 write_dword(w, a_header[0]);
				 offset = 0;  for(int i=0; i<256; i++)  offset += grimf[i].col * grimf[i].row;
				 write_dword(w, offset);
				 for(int i=2; i<8; i++)	 write_dword(w, a_header[i]);
				 for(int i=0; i<256; i++)  write_word(w, grimf[i].num);
				 
				 offset = 0;  for(int i=0; i<256; i++)
				 {   write_dword(w, offset);
					 offset += grimf[i].col * grimf[i].row;
					 w->Write(grimf[i].a);
					 w->Write(grimf[i].b);
					 write_word(w, grimf[i].c < 0 ? grimf[i].c + 256 : grimf[i].c );
					 write_dword(w, grimf[i].col);
					 write_dword(w, grimf[i].row);
				 }
				 for(int i=0; i<256; i++)
				 	for (int j=0; j < grimf[i].col * grimf[i].row; j++ )
						w->Write(grimf[i].bitmap[j]);
				 fs->Close();
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->Rows->Insert(0);
			 for(int i=0; i < dataGridView1->ColumnCount; i++)
				 dataGridView1[i,0]->Value = Image::FromFile("0.png");
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->Rows->RemoveAt(0);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->Rows->Insert(dataGridView1->RowCount);
			 for(int i=0; i < dataGridView1->ColumnCount; i++)
				 dataGridView1[i,dataGridView1->RowCount-1]->Value = Image::FromFile("0.png");
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->Rows->RemoveAt(dataGridView1->RowCount-1);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->Columns->Insert(0, gcnew DataGridViewImageColumn());
			 dataGridView1->Columns[0]->AutoSizeMode=DataGridViewAutoSizeColumnMode::AllCells;
			 dataGridView1->Columns[0]->SortMode=DataGridViewColumnSortMode::NotSortable;
			 for(int i=0; i < dataGridView1->RowCount; i++)
				 dataGridView1[0,i]->Value = Image::FromFile("0.png");
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->Columns->RemoveAt(0);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->Columns->Insert(dataGridView1->ColumnCount, gcnew DataGridViewImageColumn());
			 dataGridView1->Columns[dataGridView1->ColumnCount-1]->AutoSizeMode=DataGridViewAutoSizeColumnMode::AllCells;
			 dataGridView1->Columns[dataGridView1->ColumnCount-1]->SortMode=DataGridViewColumnSortMode::NotSortable;
			 for(int i=0; i < dataGridView1->RowCount; i++)
				 dataGridView1[dataGridView1->ColumnCount-1,i]->Value = Image::FromFile("0.png");
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->Columns->RemoveAt(dataGridView1->ColumnCount-1);
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 grimf[listBox1->SelectedIndex].col = dataGridView1->ColumnCount;
			 grimf[listBox1->SelectedIndex].row = dataGridView1->RowCount;
			 grimf[listBox1->SelectedIndex].a = (int)numericUpDown1->Value;
			 grimf[listBox1->SelectedIndex].b = (int)numericUpDown2->Value;
			 grimf[listBox1->SelectedIndex].c = (int)numericUpDown3->Value;

			 delete grimf[listBox1->SelectedIndex].bitmap;
			 grimf[listBox1->SelectedIndex].bitmap = new Byte[ dataGridView1->ColumnCount * dataGridView1->RowCount ];

			 for(int i=0; i < dataGridView1->RowCount; i++)
				 for (int j=0; j < dataGridView1->ColumnCount; j++)
					 if (dataGridView1[j,i]->ToolTipText == "Umbra")
						 grimf[listBox1->SelectedIndex] .bitmap[grimf[listBox1->SelectedIndex].col *i+j ] = 0x80;
					 else if (dataGridView1[j,i]->ToolTipText == "Culoare")
						 grimf[listBox1->SelectedIndex] .bitmap[grimf[listBox1->SelectedIndex].col *i+j ] = 0xff;
					 else grimf[listBox1->SelectedIndex] .bitmap[grimf[listBox1->SelectedIndex].col *i+j ] = 0x00;
		 }
private: System::Void listBox1_SelectedValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 numericUpDown4->Value = grimf[listBox1->SelectedIndex].col;
			 numericUpDown5->Value = grimf[listBox1->SelectedIndex].row;
			 numericUpDown1->Value = grimf[listBox1->SelectedIndex].a;
			 numericUpDown2->Value = grimf[listBox1->SelectedIndex].b;
			 numericUpDown3->Value = grimf[listBox1->SelectedIndex].c < 128 ? grimf[listBox1->SelectedIndex].c : grimf[listBox1->SelectedIndex].c - 256;
			 dataGridView1->ColumnCount = 0;

			 for(int i=0; i < grimf[listBox1->SelectedIndex].col; i++)
			 {   DataGridViewImageColumn^ column = gcnew DataGridViewImageColumn();
				 dataGridView1->Columns->Add(column);
				 dataGridView1->Columns[i]->AutoSizeMode=DataGridViewAutoSizeColumnMode::AllCells;
				 dataGridView1->Columns[i]->SortMode=DataGridViewColumnSortMode::NotSortable;		
			 }
			 dataGridView1->RowCount = grimf[listBox1->SelectedIndex].row;
		
			 for(int i=0; i < grimf[listBox1->SelectedIndex].col; i++)
				 for (int j=0; j < grimf[listBox1->SelectedIndex].row; j++)
					 switch ( grimf[listBox1->SelectedIndex].bitmap[grimf[listBox1->SelectedIndex].col *j+i ])
					 {   case 0x00: dataGridView1[i,j]->Value = Image::FromFile("0.png"); break;
						 case 0x80: dataGridView1[i,j]->Value = Image::FromFile("1.png");
									dataGridView1[i,j]->ToolTipText = "Umbra"; break;
						 case 0xff: dataGridView1[i,j]->Value = Image::FromFile("2.png");
									dataGridView1[i,j]->ToolTipText = "Culoare"; break;
					 }
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 //  Alb ("")  =>  Gri ("Umbra")  =>  Negru ("Culoare")  =>  Alb ("")
			 if(dataGridView1[e->ColumnIndex, e->RowIndex]->ToolTipText == "Umbra")
			 {   dataGridView1[e->ColumnIndex, e->RowIndex]->ToolTipText = "Culoare";		
				 dataGridView1[e->ColumnIndex, e->RowIndex]->Value = Image::FromFile("2.png");	 
			 }
			 else if(dataGridView1[e->ColumnIndex, e->RowIndex]->ToolTipText == "Culoare")
			 {   dataGridView1[e->ColumnIndex, e->RowIndex]->ToolTipText = "";		
				 dataGridView1[e->ColumnIndex, e->RowIndex]->Value = Image::FromFile("0.png");	 
			 }
			 else
			 {   dataGridView1[e->ColumnIndex, e->RowIndex]->ToolTipText = "Umbra";
				 dataGridView1[e->ColumnIndex, e->RowIndex]->Value = Image::FromFile("1.png");	 
			 }			
		 }
private: System::Void dataGridView1_CellContentDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 dataGridView1_CellContentClick(sender, e);
		 }
private: System::Void dataGridView1_ColumnStateChanged(System::Object^  sender, System::Windows::Forms::DataGridViewColumnStateChangedEventArgs^  e) {
			 numericUpDown4->Value = dataGridView1->ColumnCount;
		 }
private: System::Void dataGridView1_RowStateChanged(System::Object^  sender, System::Windows::Forms::DataGridViewRowStateChangedEventArgs^  e) {
			 numericUpDown5->Value = dataGridView1->RowCount;
		 }
};
}
