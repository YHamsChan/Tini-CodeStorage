#include <stdio.h>
#include <iostream>
using namespace std;
bool Used = false;

int main() {
	int Luas;
	int Alas;
	int Tinggi;
	if (Used == true) {
		cout << "[FICTION CYBER'S CREATION]\n";
		cout << " ===  Luas Segitiga   ===\n";
		cout << "---------------------------\n";
		cout << "Silahkan isi data di bawah!\n";
		Used = true;
	}
	else {
		cout << "---------------------------\n";
		cout << "Silahkan isi data di lagi!\n";
	};
	
	cout << "Alas Segitiga: ";
	cin >> Alas;
	cout << "Tinggi Segitiga: ";
	cin >> Tinggi;
	Luas = (Alas * Tinggi) / 2;
	cout << "Luas: " << Alas << " * " << Tinggi << " = " << Luas << "\n";
	main();
}
