#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
bool Used = false;

int main() {
	int Code = 1;
	float Alas, Tinggi, Luas, Keliling;
	float Celsius, Fahrenheit, Reamur;
	float SisiMiring;
	int Bilangan_GanjilGenap;
	if (Used == false) {
		cout << "[FICTION CYBER'S CREATION]\n";
		cout << "====      TUGAS      ====\n";
		cout << "--------------------------\n";
		cout << "Silahkan isi data di bawah!\n";
		Used = true;
	}
	else {
		cout << "---------------------------\n";
		cout << "Silahkan isi data di lagi!\n";
	};
	cout << "---------------------------\n";
	cout << "[1] Luas Keliling Segitiga\n[2] Celcius -> Fahrenheit & Reamur\n[3] Mencari Sisi Miring Segitiga\n[4] Bilangan Ganjil Atau Genap\n";
	cout << "---------------------------\n";
	cout << "Masukkan Kode: ";
	cin >> Code;
	cout << "---------------------------\n";
	
	if (Code == 1) {
		cout << "Masukkan Tinggi: ";
		cin >> Tinggi;
		cout << "Masukkan Alas: ";
		cin >> Alas;
		
		Luas = 0.5 * Alas * Tinggi;
    	Keliling = Alas + Tinggi + (sqrt(pow(Alas, 2) + pow(Tinggi, 2)));
    	cout << "Luas: 0.5 x " << Alas << " x " << Tinggi << " = " << Luas << "\n";
    	cout << "Keliling: " << Alas << " + " << Tinggi << " + " << (sqrt(pow(Alas, 2) + pow(Tinggi, 2))) <<"(SisiMiring)" << " = " << Keliling << "\n";
	};
	if (Code == 2) {
		cout << "Masukkan Celcius: ";
		cin >> Celsius;
		Fahrenheit = (Celsius * 9 / 5) + 32;
    	Reamur = Celsius * 4 / 5;
    	cout << "Fahrenheit: " << Fahrenheit << " 'F\n";
    	cout << "Reamur: " << Reamur << " 'R\n";
	};
	if (Code == 3) {
		cout << "Masukkan Tinggi: ";
		cin >> Tinggi;
		cout << "Masukkan Alas: ";
		cin >> Alas;
    	SisiMiring = sqrt(pow(Alas, 2) + pow(Tinggi, 2));
    	cout << "Sisi Miring: " << Alas << "^2 x " << Tinggi << "^2 = " << SisiMiring << "\n";
	}
	if (Code == 4) {
		cout << "Masukkan Bilangan: ";
		cin >> Bilangan_GanjilGenap;
		if (Bilangan_GanjilGenap < 0) {
        cout << "Masukkan Bilangan: ";
        cin >> Bilangan_GanjilGenap;
    	} else {
        if (Bilangan_GanjilGenap % 2 == 0) {
            printf("[Bilangan Genap!]\n");
        } else {
            printf("[Bilangan Ganjil!]\n");
        	}
    	}
	}
	main();
}
