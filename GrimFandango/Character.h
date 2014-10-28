public ref class Character {
	public:
		Character() {};

		System::Int16 index;
		System::Int32 file_offset;
		System::Byte size_x, size_y;
		System::Int16 offset_y;
		System::Int32 columns, rows;
		System::Byte *bitmap;
};