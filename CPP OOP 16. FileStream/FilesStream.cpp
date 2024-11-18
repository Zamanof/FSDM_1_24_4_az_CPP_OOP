#include<iostream>

using namespace std;

int main() {

	// ofstream - verilenleri chixishi (fayla yazilmasi)
	// ifstream - verilenleri daxil edilmesi (fayldan oxunmasi)
	// fsteram - fayla yazilma ve fayldan oxunma

	/*
		fstream() - fayli achmadan stream yaradir

		fstream(
				const char* name,			// faylin adi
				int omode,					// faylin achilma rejimi
				int = filebuff::openprot	// faylin qorunmasi
		) - stream yaradir, fayli achir ve stream ile elaqe yaradir

		fstream(
				int f						// fayl deskriptor
		) - stream yaradir ve stream-i artiq achilmish fayl ile elaqelendirir

		fstream(
				int f,						// fayl deskriptor					
				char* buff,					// buff
				int len						// buferin olchusu
		) - stream yaradir ve ve stream-i artiq achilmish fayl ile elaqelendirir,
			hemchinin stream-a bufer teyin olunur

	*/

	/*
		enum _Openmode
		{
			in         = 0x01;			// fayli yalniz oxumaq uchun achir	
			out        = 0x02;			// fayli yalniz yazmaq uchun achir
			ate        = 0x04;			// gostericini faylin sonuna teyin edir
			app        = 0x08;			// verilenleri faylin sonundan bashlayarq yazir 	
			trunc      = 0x10;			// faylin olchusunu sifir edir
			binary     = 0x20;			// fayli binar formatda mubadile etmek uchundur	
			_Nocreate  = 0x40;			// eger fayl yoxdursa achilma ile baqli sehv verir	
			_Noreplace = 0x80;			// eger fayl varsa achilma ile baqli sehv verir

		}
	
	*/
	
	//	fayllarla ishlemek uchun funksiyalar
	// 
	//	void open(const char* fileName, int mode, int protection)
	//  Konkret fayl ile fayl stream-i elaqelendirir 

	// int close() - buferi temizleyir, fayl stream-i ayirir, fayl-baqlayir

	// istream::read(unsigned char* buf, int len)
	// istream::read(char* buf, int len)
	// simvollar blokunu oxuyur

	// ostream::write(const unsigned char* buf, int n)
	// ostream::write(const char* buf, int n)
	// simvollar blokunu yazir

	// int istream::get()
	// int istream::get(unsigned char&)
	// int istream::get(char&)
	// stream-den bir simvolu goturur

	// ostream::put(char)
	// stream-e bir simvol yerleshdirir


	// istream::get(unsigned char* buf, int n, char c = '\n')
	// istream::get(char* buf, int n, char c = '\n')
	//  stream-den setri goturur


	// istream::getline(unsigned char* buf, int n, char c = '\n')
	// istream::getline(signed char* buf, int n, char c = '\n')
	// stream-den setri goturur (bufere elave etmeden)


	// istream::ignore(int n=1, int d=EOF)
	// stream-den d delimetrine rast gelene qeder, 
	// ve ya n sayda simvolu goturmur

	// istream::gcount()
	// stream-den goturduyumuz simvollarin sayini qaytarir

	// istream::peek()
	// stream-de olan novbeti simvolu "gormeye" imkan verir
	

	// istream::putback(char c)
	// stream-den goturulucek novbeti simvolu stream-e yerleshdirir
	

	// istream::seekg(long pos)
	// oxuma pozisyasini teyin eleyir
	

	// istream::seekg(long off, ios::seek_dir dir)
	// dir istiqametinde (beg, cur, end) off parametriqeder surushme yerine yetirir

	// ostream::seekp(long pos)
	// fayla yazilmanin absolute position- teyin edirik
	

	// ostream::seekp(long off, ios::seek_dir dir)
	// fayla yaznaq uchun pozisiyanin yerdeyishmesini edir
	

	// istream::tellg()
	// streamde oxuma gostericisinin hazirdaki pozisiyasini gosterir

	// ostream::tellp()
	// streamde yazma gostericisinin hazirdaki pozisiyasini gosterir

}