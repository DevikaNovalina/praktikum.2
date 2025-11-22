#include <iostream>
using namespace std;

int main()
{
	double harga, diskon, jumlahdiskon, hargasetelahdiskon;

	cout << "=MASUKAN=" << endl;
	cout << "harga barang (rp)=" << endl;
	cin >> harga;

	cout << "diskon barang=" << endl;
	cin >> diskon;

	jumlahdiskon = harga * (diskon / 100);
	hargasetelahdiskon = harga * (diskon / 100);

	cout << "/nhasil:" << endl;
	cout << "jumlah diskon      = RP" << jumlahdiskon << endl;
	cout << "harga setelah diskon    = RP" << hargasetelahdiskon << endl;

	return 0;
}