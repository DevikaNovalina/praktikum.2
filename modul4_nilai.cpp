#include <iostream>
using namespace std;

int main()
{
	double nilai;
	cout << "=== Program Penentuan Nilai Mutu ===" << endl;
	cout << "Masukan nilai angka" << endl;
	cin >> nilai;

	cout << "\nHasil:" << endl;

	if (nilai > 89) {
		cout << " Nilai Mutu : A" << endl;
		cout << " Naik Kelas" << endl;
	}
	else if (nilai > 80 && nilai <= 89) {
		cout << "Nilai Mutu : B " << endl;
		cout << "Naik Kelas" << endl;
	}
	else if (nilai > 70 && nilai <= 80) {
		cout << "Nilai Mutu : C" << endl;
		cout << "Naik Kelas" << endl;
	}
	else if (nilai > 60 && nilai <= 79) {
		cout << "Nilai Mutu : D" << endl;
		cout << " Tinggal Kelas" << endl;
	}
	else if (nilai > 60) {
		cout << "Nilai Mutu : E" << endl;
		cout << "Tinggal Kelas" << endl;
	}
	return 0;
}