#include "stdafx.h"
#include "WindowForm.h"
using namespace FontEditor;

System::Void WindowForm::write_word(BinaryWriter^ out, Int16 val) {
	out->Write((Byte)(val & 0xFF));
	out->Write((Byte)(val >> 8 & 0xFF));
}
System::Void WindowForm::write_dword(BinaryWriter^ out, Int32 val) {
	out->Write((Byte)(val & 0xFF));
	out->Write((Byte)(val >> 8 & 0xFF));
	out->Write((Byte)(val >> 16 & 0xFF));
	out->Write((Byte)(val >> 24 & 0xFF));
}
System::Void WindowForm::btn_open_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->InitialDirectory = Environment::GetFolderPath(Environment::SpecialFolder::Desktop);
	openFileDialog1->Filter = "laf files (*.laf)|*.laf|All files (*.*)|*.*";
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
		FileStream^ fs = gcnew FileStream(openFileDialog1->FileName, FileMode::Open);
		BinaryReader^ br = gcnew BinaryReader(fs);
		a_header = gcnew array<Int32>(8);
		characters = gcnew array<Character^>(256);
		

		for (int i = 0; i < 8; i++) a_header[i] = br->ReadInt32();
		for (int i = 0; i < 256; i++) {
			characters[i] = gcnew Character();
			characters[i]->index = br->ReadInt16();
		}
		for (int i = 0; i < 256; i++) {
			characters[i]->file_offset = br->ReadInt32();
			characters[i]->size_x = br->ReadByte();
			characters[i]->size_y = br->ReadByte();
			characters[i]->offset_y = br->ReadInt16();
			characters[i]->columns = br->ReadInt32();
			characters[i]->rows = br->ReadInt32();
		}
		for (int i = 0; i < 256; i++) {
			characters[i]->bitmap = new Byte[characters[i]->columns * characters[i]->rows];
			for (int j = 0; j < characters[i]->columns * characters[i]->rows; j++)
				characters[i]->bitmap[j] = br->ReadByte();
		}
		fs->Close();
		btn_save->Enabled = true;
		listBox1->Items->Clear();
		for (int i = 0; i < 256; i++)
			listBox1->Items->Add("0x" + characters[i]->index.ToString("X2") + "  [" + Convert::ToChar(characters[i]->index) + "]");
	}
}
System::Void WindowForm::btn_save_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->Filter = "laf files (*.laf)|*.laf";
	saveFileDialog1->ShowDialog();

	if (saveFileDialog1->FileName != "") {
		FileStream^ fs = gcnew FileStream(saveFileDialog1->FileName, FileMode::Create);
		BinaryWriter^ w = gcnew BinaryWriter(fs);
		int file_offset;

		file_offset = 0;  for (int i = 0; i < 256; i++) file_offset += characters[i]->columns * characters[i]->rows;
		a_header[1] = file_offset;
		for (int i = 0; i < 8; i++)	 write_dword(w, a_header[i]);
		for (int i = 0; i < 256; i++)  write_word(w, characters[i]->index);

		file_offset = 0;  for (int i = 0; i < 256; i++) {
			write_dword(w, file_offset);
			file_offset += characters[i]->columns * characters[i]->rows;
			w->Write(characters[i]->size_x);
			w->Write(characters[i]->size_y);
			write_word(w, characters[i]->offset_y < 0 ? characters[i]->offset_y + 256 : characters[i]->offset_y);
			write_dword(w, characters[i]->columns);
			write_dword(w, characters[i]->rows);
		}
		for (int i = 0; i < 256; i++)
			for (int j = 0; j < characters[i]->columns * characters[i]->rows; j++)
				w->Write(characters[i]->bitmap[j]);
		fs->Close();
	}
}
System::Void WindowForm::btn_add_top_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Insert(0);
	for (int i = 0; i < dataGridView1->ColumnCount; i++)
		dataGridView1[i, 0]->Value = Image::FromFile("0.png");
}
System::Void WindowForm::btn_rm_top_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->RemoveAt(0);
}
System::Void WindowForm::btn_add_btm_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Insert(dataGridView1->RowCount);
	for (int i = 0; i < dataGridView1->ColumnCount; i++)
		dataGridView1[i, dataGridView1->RowCount - 1]->Value = Image::FromFile("0.png");
}
System::Void WindowForm::btn_rm_btm_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->RemoveAt(dataGridView1->RowCount - 1);
}
System::Void WindowForm::btn_add_left_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Columns->Insert(0, gcnew DataGridViewImageColumn());
	dataGridView1->Columns[0]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
	dataGridView1->Columns[0]->SortMode = DataGridViewColumnSortMode::NotSortable;
	for (int i = 0; i < dataGridView1->RowCount; i++)
		dataGridView1[0, i]->Value = Image::FromFile("0.png");
}
System::Void WindowForm::btn_rm_left_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Columns->RemoveAt(0);
}
System::Void WindowForm::btn_add_right_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Columns->Insert(dataGridView1->ColumnCount, gcnew DataGridViewImageColumn());
	dataGridView1->Columns[dataGridView1->ColumnCount - 1]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
	dataGridView1->Columns[dataGridView1->ColumnCount - 1]->SortMode = DataGridViewColumnSortMode::NotSortable;
	for (int i = 0; i < dataGridView1->RowCount; i++)
		dataGridView1[dataGridView1->ColumnCount - 1, i]->Value = Image::FromFile("0.png");
}
System::Void WindowForm::btn_rm_right_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Columns->RemoveAt(dataGridView1->ColumnCount - 1);
}
System::Void WindowForm::button11_Click(System::Object^  sender, System::EventArgs^  e) {
	characters[listBox1->SelectedIndex]->columns = dataGridView1->ColumnCount;
	characters[listBox1->SelectedIndex]->rows = dataGridView1->RowCount;
	characters[listBox1->SelectedIndex]->size_x = (int)numericUpDown1->Value;
	characters[listBox1->SelectedIndex]->size_y = (int)numericUpDown2->Value;
	characters[listBox1->SelectedIndex]->offset_y = (int)numericUpDown3->Value;

	delete characters[listBox1->SelectedIndex]->bitmap;
	characters[listBox1->SelectedIndex]->bitmap = new Byte[dataGridView1->ColumnCount * dataGridView1->RowCount];

	for (int i = 0; i < dataGridView1->RowCount; i++)
		for (int j = 0; j < dataGridView1->ColumnCount; j++)
			if (dataGridView1[j, i]->ToolTipText == "Umbra")
				characters[listBox1->SelectedIndex]->bitmap[characters[listBox1->SelectedIndex]->columns *i + j] = 0x80;
			else if (dataGridView1[j, i]->ToolTipText == "Culoare")
				characters[listBox1->SelectedIndex]->bitmap[characters[listBox1->SelectedIndex]->columns *i + j] = 0xff;
			else characters[listBox1->SelectedIndex]->bitmap[characters[listBox1->SelectedIndex]->columns *i + j] = 0x00;
}
System::Void WindowForm::listBox1_SelectedValueChanged(System::Object^  sender, System::EventArgs^  e) {
	numericUpDown4->Value = characters[listBox1->SelectedIndex]->columns;
	numericUpDown5->Value = characters[listBox1->SelectedIndex]->rows;
	numericUpDown1->Value = characters[listBox1->SelectedIndex]->size_x;
	numericUpDown2->Value = characters[listBox1->SelectedIndex]->size_y;
	numericUpDown3->Value = characters[listBox1->SelectedIndex]->offset_y < 128
		? characters[listBox1->SelectedIndex]->offset_y : characters[listBox1->SelectedIndex]->offset_y - 256;
	dataGridView1->ColumnCount = 0;

	for (int i = 0; i < characters[listBox1->SelectedIndex]->columns; i++) {
		DataGridViewImageColumn^ column = gcnew DataGridViewImageColumn();
		dataGridView1->Columns->Add(column);
		dataGridView1->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
		dataGridView1->Columns[i]->SortMode = DataGridViewColumnSortMode::NotSortable;
	}
	dataGridView1->RowCount = characters[listBox1->SelectedIndex]->rows;

	for (int i = 0; i < characters[listBox1->SelectedIndex]->columns; i++)
		for (int j = 0; j < characters[listBox1->SelectedIndex]->rows; j++)
			switch (characters[listBox1->SelectedIndex]->bitmap[characters[listBox1->SelectedIndex]->columns *j + i]) {
				case 0x00: dataGridView1[i, j]->Value = Image::FromFile("0.png"); break;
				case 0x80: dataGridView1[i, j]->Value = Image::FromFile("1.png");
					dataGridView1[i, j]->ToolTipText = "Umbra"; break;
				case 0xff: dataGridView1[i, j]->Value = Image::FromFile("2.png");
					dataGridView1[i, j]->ToolTipText = "Culoare"; break;
			}
}
System::Void WindowForm::dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//  Alb ("")  =>  Gri ("Umbra")  =>  Negru ("Culoare")  =>  Alb ("")
	if (dataGridView1[e->ColumnIndex, e->RowIndex]->ToolTipText == "Umbra")	{
		dataGridView1[e->ColumnIndex, e->RowIndex]->ToolTipText = "Culoare";
		dataGridView1[e->ColumnIndex, e->RowIndex]->Value = Image::FromFile("2.png");
	} else if (dataGridView1[e->ColumnIndex, e->RowIndex]->ToolTipText == "Culoare") {
		dataGridView1[e->ColumnIndex, e->RowIndex]->ToolTipText = "";
		dataGridView1[e->ColumnIndex, e->RowIndex]->Value = Image::FromFile("0.png");
	} else {
		dataGridView1[e->ColumnIndex, e->RowIndex]->ToolTipText = "Umbra";
		dataGridView1[e->ColumnIndex, e->RowIndex]->Value = Image::FromFile("1.png");
	}
}
System::Void WindowForm::dataGridView1_CellContentDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	dataGridView1_CellContentClick(sender, e);
}
System::Void WindowForm::dataGridView1_ColumnStateChanged(System::Object^  sender, System::Windows::Forms::DataGridViewColumnStateChangedEventArgs^  e) {
	numericUpDown4->Value = dataGridView1->ColumnCount;
}
System::Void WindowForm::dataGridView1_RowStateChanged(System::Object^  sender, System::Windows::Forms::DataGridViewRowStateChangedEventArgs^  e) {
	numericUpDown5->Value = dataGridView1->RowCount;
}