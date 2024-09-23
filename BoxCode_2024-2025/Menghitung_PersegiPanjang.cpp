//SYSTEM: MENGHITUNG LUAS+KELILING PERSEGI PANJANG
#include <iostream>
#include <stdio.h>
using namespace std;
bool Used = false;

int main() {
	if (Used == false) {
		cout << "     [FICION CYBER'S CREATION]\n";
		cout << "=== MENGHITUNG PERSEGI PANJANG ===\n";
		Used = true;
	}
	else {
		cout << "[Isi Angka Lagi!]\n";
		cout << "=================\n";
	}
	int Tinggi = 0;
	int Lebar = 0;
	
	cout << "Masukkan Tinggi: ";
	cin >> Tinggi;
	cout << "Masukkan Lebar: ";
	cin >> Lebar;
	
	if (Tinggi) {
		cout << "======================\n";
		int Result = Tinggi * Lebar;
		int Result2 = (Tinggi+Lebar) *2;
		cout << "Luas: " << Tinggi << " x " << Lebar << " = " << Result << "\n";
		cout << "Keliling: (" << Tinggi << " + " << Lebar << ") x 2 = " << Result2 << "\n";
		cout << "-------------------------------\n";
	}
	main();
}
